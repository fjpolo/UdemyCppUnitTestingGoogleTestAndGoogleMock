#include "EmployeeManager.hpp"
#include <map>

/**
 * \class EmployeeManager
 * \fn constructor
 */
EmployeeManager::EmployeeManager(IDatabaseConnection *dbConnection): mDbConnection{dbConnection}{
  mDbConnection->connect();
}

/**
 * \class EmployeeManager
 * \fn destructor
 */
EmployeeManager::~EmployeeManager(){
  mDbConnection->disconnect();
}

/**
 * \class EmployeeManager
 * \fn getSalary
 */
float EmployeeManager::getSalary(int employeeId) const{
 return mDbConnection->getSalary(employeeId); 
}
  
/**
 * \class EmployeeManager
 * \fn setSalary
 */
void EmployeeManager::setSalary(int employeeId, float newSalary){
  mDbConnection->updateSalary(employeeId, newSalary);
}
  
/**
 * \class EmployeeManager
 * \fn vectorToMap
 */
std::map<std::string, float> EmployeeManager::vectorToMap(std::vector<Employee> const& employees) const{
  std::map<std::string, float> result;
  for(Employee const& employee : employees)
  {
      result[employee.name] = employee.salary;
  }
  return result;
}

/**
 * \class EmployeeManager
 * \fn EmployeeManager
 */
std::map<std::string,float> EmployeeManager::getSalariesGreater(float low) const{
  return vectorToMap(mDbConnection->getSalariesRange(low));
  
}

/**
 * \class EmployeeManager
 * \fn getSalariesBetween
 */
std::map<std::string,float> EmployeeManager::getSalariesBetween(float low, float high) const{
  return vectorToMap(mDbConnection->getSalariesRange(low, high));
}
