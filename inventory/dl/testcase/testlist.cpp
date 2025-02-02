#include<iostream>
#include<uomdao>
#include<iuom>
#include<uom>
#include<forward_list>
using namespace inventory;
using namespace data_layer;
int main()
{
UnitOfMeasurement m;
m.setTitle(string("nitya weds saurabh"));
UnitOfMeasurementDAO unitOfMeasurementDAO;
try
{
unitOfMeasurementDAO.add(&m);
cout<<"Unit Of Measurement added with added code as :"<<m.getCode()<<endl;
}
catch(DAOException daoException)
{
cout<<daoException.what();
}
return 0;
}
 