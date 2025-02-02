#include<iostream>
#include<uomdao>
#include<uom>
using namespace inventory;
using namespace data_layer;
int main()
{
int code;
string title;
cout<<"Enter Code: ";
cin>>code;
UnitOfMeasurementDAO unitOfMeasurementDAO;
try
{
unitOfMeasurementDAO.remove(code);
cout<<"unit of measurement delete"<<endl;
}
catch(DAOException daoException)
{
cout<<daoException.what();
}
return 0;
}