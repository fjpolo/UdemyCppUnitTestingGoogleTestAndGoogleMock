#include "IDatabaseConnection.hpp"
#include <iostream>

/**
 * \class IDatabaseConnection
 * \fn constructor
 */
IDatabaseConnection::IDatabaseConnection(std::string serverAddress) : mServerAddress{serverAddress}{
}

/**
 * \class IDatabaseConnection
 * \fn destructor
 */
IDatabaseConnection::~IDatabaseConnection(){
}

/**
 * \class IDatabaseConnection
 * \fn connect
 */
void IDatabaseConnection::connect(){

  std::cout << "Connecting to database server " << mServerAddress << "\n";
  //initialize real DB connection
}

/**
 * \class IDatabaseConnection
 * \fn disconnect
 */
void IDatabaseConnection::disconnect(){
 std::cout << "Disconnecting from database\n";
 //close the real connection
}