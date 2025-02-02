#include<iostream>
#include<iuom>
#include<uom>
#include<iuomdao>
#include<uomdao>
#include<forward_list>
using namespace inventory;
using namespace data_layer;
int main()
{
UnitOfMeasurementDAO unitOfMeasurementDAO;
cout<<"number of records in context to unit of measurement:"<<unitOfMeasurementDAO.getCount()<<endl;
return 0;
}