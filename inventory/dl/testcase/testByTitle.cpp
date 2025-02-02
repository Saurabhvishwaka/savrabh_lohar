#include<iostream>
#include<iuom>
#include<uom>
#include<uomdao>
#include<forward_list>
using namespace inventory;
using namespace data_layer;
int main()
{
string title;
cout<<"Enter Title :";
cin>>title;
UnitOfMeasurementDAO unitOfMeasurementDAO;
try
{
abc::IUnitOfMeasurement * unitOfMeasurement;
unitOfMeasurement=unitOfMeasurementDAO.getByTitle(title);
cout<<"code :"<<unitOfMeasurement->getCode()<<"Title :"<<unitOfMeasurement->getTitle()<<endl;
}
catch(DAOException daoException)
{
cout<<daoException.what();
}
return 0;
}