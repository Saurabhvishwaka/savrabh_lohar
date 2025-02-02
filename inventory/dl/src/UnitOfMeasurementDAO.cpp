#include<iuom>
#include<uom>
#include<daoexception>
#include<iuomdao>
#include<uomdao>
#include<string.h>
#include<fstream>
#include<stringutils>
using namespace inventory;
using namespace data_layer;
using namespace stringutils;
void UnitOfMeasurementDAO::add(abc::IUnitOfMeasurement *unitOfMeasurement) throw(DAOException)
{
const string vTitle=unitOfMeasurement->getTitle();
string title=trimmed(vTitle);
if(title.length()==0)
{
throw DAOException("Title required,length is zero");
}
if(title.length()>50)
{
throw DAOException("Title length cannot exceed 50");
}
Header header;
_UnitOfMeasurement _unitOfMeasurement;
fstream dataFile(FILE_NAME,ios::in | ios::out | ios::binary);
if(dataFile.fail())
{
ofstream dFile(FILE_NAME,ios::app | ios::binary);
header.lastGeneratedCode=1;
header.numberOfRecords=1;
dFile.write((char *)&header,sizeof(Header));
_unitOfMeasurement.code=1;
strcpy(_unitOfMeasurement.title,title.c_str());
dFile.write((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
dFile.close();
unitOfMeasurement->setCode(1);
return;
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.clear();
dataFile.seekg(0,ios::beg);
dataFile.seekp(0,ios::beg);
header.lastGeneratedCode=1;
header.numberOfRecords=1;
dataFile.write((char *)&header,sizeof(Header));
_unitOfMeasurement.code=1;
strcpy(_unitOfMeasurement.title,title.c_str());
dataFile.write((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
dataFile.close();
unitOfMeasurement->setCode(1);
return;
}
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(compareStringIgnoreCase(_unitOfMeasurement.title,title.c_str())==0)
{
dataFile.close();
throw  DAOException(title+string(" : exists."));
}
}
dataFile.close();
header.lastGeneratedCode++;
header.numberOfRecords++;
_unitOfMeasurement.code=header.lastGeneratedCode;
strcpy(_unitOfMeasurement.title,title.c_str());
dataFile.seekp(0,ios::end);
dataFile.write((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
dataFile.seekp(0,ios::beg);
dataFile.write((char *)&header,sizeof(Header));
dataFile.close();
unitOfMeasurement->setCode(_unitOfMeasurement.code);
}
void UnitOfMeasurementDAO::update(abc::IUnitOfMeasurement *unitOfMeasurement) throw(DAOException)
{
int code=unitOfMeasurement->getCode();
if(code<=0)
{
throw DAOException("code should be greater than zero");
}
const string vTitle=unitOfMeasurement->getTitle();
string title=trimmed(vTitle);
if(title.length()==0)
{
throw DAOException("title required ,length is  zero");
}
if(title.length()>50)
{
throw DAOException("title length can not exceed 50");
}
Header header;
_UnitOfMeasurement _unitOfMeasurement;
fstream dataFile(FILE_NAME,ios::in | ios:: out | ios::binary);
char arr[100];
if(dataFile.fail())
{
sprintf(arr,"Invalid code:%d",code);
throw DAOException(string(arr));
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
sprintf(arr,"Invalid code %d",code);
throw DAOException(string(arr));
}
if(header.numberOfRecords==0)
{
dataFile.close();
sprintf(arr,"Invalid code %d",code);
throw DAOException(string(arr));
}
int found=false;
int pos;
while(true)
{
pos=dataFile.tellg();
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(_unitOfMeasurement.code==code)
{
found=true;
break;
}
}
if(found==false)
{
dataFile.close();
sprintf(arr,"Invalid code %d",code);
throw DAOException(string(arr));
}
dataFile.clear();
dataFile.seekg(sizeof(Header),ios::beg);
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(_unitOfMeasurement.code!=code && compareStringIgnoreCase(_unitOfMeasurement.title,title.c_str())==0)
{
dataFile.close();
throw DAOException(title+string("Exists"));
}
}
dataFile.clear();
_unitOfMeasurement.code=code;
strcpy(_unitOfMeasurement.title,title.c_str());
dataFile.seekp(pos,ios::beg);
dataFile.write((char *)
&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
dataFile.close();
}
void UnitOfMeasurementDAO::remove(int code) throw(DAOException)
{
if(code<=0)
{
throw DAOException("code should be greater than zero");
}
Header header;
_UnitOfMeasurement _unitOfMeasurement;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
char arr[100];
if(dataFile.fail())
{
sprintf(arr,"Invalid code :%d",code);
throw DAOException(string(arr));
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
sprintf(arr,"Invalid code:%d",code);
throw DAOException(string(arr));
}
if(header.numberOfRecords==0)
{
dataFile.close();
sprintf(arr,"Invalid code:%d",code);
throw DAOException(string(arr));
}
int found=false;
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(_unitOfMeasurement.code==code)
{
found=true;
break;
}
}
if(found==false)
{
dataFile.close();
sprintf(arr,"Invalid code:%d",code);
throw DAOException(string(arr));
}
dataFile.close();
header.numberOfRecords--;
ofstream tmpFile("tmp.tmp",ios::out | ios::binary);
tmpFile.write((char *)&header,sizeof(Header));
dataFile.seekg(sizeof(Header),ios::beg);
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(_unitOfMeasurement.code!=0)
{
tmpFile.write((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
}
}
tmpFile.close();
dataFile.close();
ifstream tmpF("tmp.tmp",ios::in | ios::binary);
ofstream dataF(FILE_NAME,ios::out | ios::binary);
tmpF.read((char *)&header,sizeof(Header));
dataF.write((char *)&header,sizeof(Header));
while(true)
{
tmpF.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(tmpF.fail()) break;
dataF.write((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement)); 
}
tmpF.close();
dataF.close();
tmpFile.open("tmp.tmp",ios::out | ios::binary);
tmpFile.close();
}
abc::IUnitOfMeasurement * UnitOfMeasurementDAO::getByCode(int code) throw(DAOException)
{
Header header;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
char arr[100];
if(dataFile.fail())
{
sprintf(arr,"Invalid uint of measurement code %d",code);
throw DAOException(string(arr));
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
sprintf(arr,"Invalid uint of measurement code %d",code);
throw DAOException(string(arr));
}
if(header.numberOfRecords==0)
{
dataFile.close();
sprintf(arr,"Invalid uint of measurement code %d",code);
throw DAOException(string(arr));
}
_UnitOfMeasurement _unitOfMeasurement;
abc::IUnitOfMeasurement *unitOfMeasurement;
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(_unitOfMeasurement.code==code)
{
unitOfMeasurement=new UnitOfMeasurement;
unitOfMeasurement->setCode(_unitOfMeasurement.code);
unitOfMeasurement->setTitle(_unitOfMeasurement.title);
dataFile.close();
return unitOfMeasurement;
}
}
dataFile.close();
sprintf(arr,"Invalid Unit of measurement code: %d",code);
throw DAOException(string(arr));
}
abc::IUnitOfMeasurement * UnitOfMeasurementDAO::getByTitle(string title) throw(DAOException)
{
string vTitle=trimmed(title);
if(vTitle.length()==0)
{
throw DAOException(string("Invalid unit of measurement: ")+vTitle);
}
if(vTitle.length()>50)
{
throw DAOException(string("Invalid unit of measurement: ")+vTitle);
}
Header header;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
if(dataFile.fail())
{
throw DAOException(string("Invalid unit of measurement: ")+vTitle);
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
throw DAOException(string("Invalid unit of measurement: ")+vTitle);
}
if(header.numberOfRecords==0)
{
dataFile.close();
throw DAOException(string("Invalid unit of measurement: ")+vTitle);
}
_UnitOfMeasurement _unitOfMeasurement;
abc::IUnitOfMeasurement *unitOfMeasurement;
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(compareStringIgnoreCase(_unitOfMeasurement.title,title.c_str())==0)
unitOfMeasurement=new UnitOfMeasurement;
unitOfMeasurement->setCode(_unitOfMeasurement.code);
unitOfMeasurement->setTitle(string(_unitOfMeasurement.title));
dataFile.close();
return unitOfMeasurement;
}
dataFile.close();
throw DAOException(string("Invalid unit of measurement:")+vTitle);
}
forward_list<abc::IUnitOfMeasurement *> * UnitOfMeasurementDAO::getAll() throw(DAOException)
{
Header header;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
if(dataFile.fail())
{
throw DAOException("unit of measurement does not exist.");
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
throw DAOException("unit of measurement does not exits");
}
if(header.numberOfRecords==0)
{
dataFile.close();
throw DAOException("unit of measurement does not exits");
}
_UnitOfMeasurement _unitOfMeasurement;
abc::IUnitOfMeasurement *unitOfMeasurement;
forward_list<abc::IUnitOfMeasurement *> *list;
list=new forward_list<abc::IUnitOfMeasurement *>;
forward_list<abc::IUnitOfMeasurement *>::iterator i=list->before_begin();
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
unitOfMeasurement=new UnitOfMeasurement;
unitOfMeasurement->setCode(_unitOfMeasurement.code);
unitOfMeasurement->setTitle(string (_unitOfMeasurement.title));
i=list->insert_after(i,unitOfMeasurement);
}
dataFile.close();
return list;
}
int UnitOfMeasurementDAO::getCount() throw(DAOException)
{
Header header;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
if(dataFile.fail())
{
return 0;
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
return 0;
}
dataFile.close();
return header.numberOfRecords;
}
int UnitOfMeasurementDAO::codeExists(int code) throw(DAOException)
{
Header header;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
if(dataFile.fail())
{
return false;
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
return false;
}
if(header.numberOfRecords==0)
{
dataFile.close();
return false;
}
_UnitOfMeasurement _unitOfMeasurement;
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(_unitOfMeasurement.code==code)
{
dataFile.close();
return true;
}
}
dataFile.close();
return false;
}
int UnitOfMeasurementDAO::titleExists(string title)throw(DAOException)
{
string vTitle=trimmed(title);
if(title.length()==0)
{
return false;
}
if(vTitle.length()>50)
{
return false;
}
Header header;
fstream dataFile(FILE_NAME,ios::in | ios::binary);
if(dataFile.fail())
{
return false;
}
dataFile.seekg(0,ios::beg);
dataFile.read((char *)&header,sizeof(Header));
if(dataFile.fail())
{
dataFile.close();
return false;
}
if(header.numberOfRecords==0)
{
dataFile.close();
return false;
}
_UnitOfMeasurement _unitOfMeasurement;
while(true)
{
dataFile.read((char *)&_unitOfMeasurement,sizeof(_UnitOfMeasurement));
if(dataFile.fail()) break;
if(compareStringIgnoreCase(_unitOfMeasurement.title,title.c_str())==0)
{
dataFile.close();
return true;
}
}
dataFile.close();
return false;
}
