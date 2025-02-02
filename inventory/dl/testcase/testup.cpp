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
cout<<"Enter Title: ";
cin>>title;
UnitOfMeasurement m;
m.setCode(code);
m.setTitle(title);
UnitOfMeasurementDAO unitOfMeasurementDAO;
try
{
unitOfMeasurementDAO.update(&m);
cout<<"unit of measurement update"<<endl;
}
catch(DAOException daoException)
{
cout<<daoException.what();
}
return 0;
}