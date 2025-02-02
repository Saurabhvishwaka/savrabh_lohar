#include<bl/iuom>
#include<bl/uom>
#include<bl/iuommanager>
#include<bl/uommanager>
#include<common/stringutils>
#include<dl/iuom>
#include<dl/uom>
#include<dl/daoexception>
#include<dl/iuomdao>
#include<dl/uomdao>
#include<map>
#include<forward_list>
using namespace inventory;
using namespace business_layer;
using namespace stringutils;
bool UnitOfMeasurementTitleComparator::operator()(string *left,string *right)
{
return compareStringIgnoreCase(left->c_str(),right->c_str())<0;
}
UnitOfMeasurementManager::DataModel UnitOfMeasurementManager::dataModel;
UintOfMeasurementManager::DataModel::Dsatamodel()
{
populateDataStructure();
}
UintOfMeasureemnt::DataModel::~DataModel()
{

}
void UintOfMeasurementManager::DataModel::populateDataStructure()
{
}
UnitOfMeasurement::UnitOfMeasurement()
{
}
void UnitOfMeasurementManager::addUnitOfMeasurement(abc::IUnitOfMeasurement * unitOfMeasurement) throw(BLException)
{
}
void UnitOfMeasurementManager::updateUnitOfMeasurement(abc::IUnitOfMeasurement * unitOfMeasurement) throw(BLException)
{
}
void UnitOfMeasurementManager::removeUnitOfMeasurement(abc::IUnitOfMeasurement * unitOfMeasurement) throw(BLException)
{
}
