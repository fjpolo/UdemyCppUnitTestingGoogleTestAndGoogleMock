#pragma once
#include "Employee.hpp"
#include "IDatabaseConnection.hpp"

#include <map>
#include <vector>
#include <string>

/**
 * \class class EmployeeManager
 */
class EmployeeManager{
public:
  /*Constructor*/
  EmployeeManager(IDatabaseConnection *dbConnection);
  /*Destructor*/
  ~EmployeeManager();
  /*Facilitators*/
  void setSalary(int employeeId, float newSalary);
  float getSalary(int employeeId) const;
  std::map<std::string,float> getSalariesGreater(float low) const;
  std::map<std::string,float> getSalariesBetween(float low, float high) const;
  /*Modifiers*/

private:
  /*Attributes*/
  std::map<std::string, float> vectorToMap(std::vector<Employee> const& employees) const;

private:
  /*Attributes*/
  IDatabaseConnection  *mDbConnection;
};
