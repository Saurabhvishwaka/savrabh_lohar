#include<iostream>
#include<iuom>
#include<uom>
#include<uomdao>
#include<forward_list>
using namespace inventory;
using namespace data_layer;
int main()
{
int code;
cout<<"Enter Code:";
cin>>code;
UnitOfMeasurementDAO unitOfMeasurementDAO;
try
{
abc::IUnitOfMeasurement * unitOfMeasurement;
unitOfMeasurement=unitOfMeasurementDAO.getByCode(code);
cout<<"Code :"<<unitOfMeasurement->getCode()<<"Title :"<<unitOfMeasurement->getTitle()<<endl;
}
catch(DAOException daoException)
{
cout<<daoException.what();
}
return 0;
}