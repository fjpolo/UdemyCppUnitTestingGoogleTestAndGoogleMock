#include "IDatabaseConnection.hpp"
#include <iostream>

/**
 * \class IDatabaseConnection
 * \fn constructor
 */
IDatabaseConnection::IDatabaseConnection(std::string serverAddress, HelperClass *hc) 
:mServerAddress{serverAddress},
mHelper{hc}
{
  hc->increaseConnectionCount());
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
  // if(mOnConnect!=nullptr){
  //   std::cout << "Callback was set\n";
  //   mOnConnect(5, 6);
  // }
  onConnect();
}

/**
 * \class IDatabaseConnection
 * \fn disconnect
 */
void IDatabaseConnection::disconnect(){
 std::cout << "Disconnecting from database\n";
 //close the real connection
}

void IDatabaseConnection::setOnConnect(Callback onConnect){
  // std::string mServerAddress;
  // Callback mOnConnect;
}

unsigned IDatabaseConnection::connectionCount = 0;
void IDatabaseConnection::increaseConnectionCount(){
  connectionCount++;
  std::cout << "Connection count = " << connectionCount;
}

void HelperClass::increaseConnectionCount(){
  IDatabaseConnection::increaseConnectionCount();
}