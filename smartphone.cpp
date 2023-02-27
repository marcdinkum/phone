#include <iostream>
#include <string>
#include <smartphone.h>

class Screen
{
public:
  int glass;
};


void SmartPhone::dialNumber(std::string number)
{
  std::cout << "Dialing " << number << std::endl;
}

void SmartPhone::call()
{
  std::cout << "Call starts" << std::endl;
}

void SmartPhone::endCall()
{
  std::cout << "Call ends" << std::endl;
}

void SmartPhone::heySiri(std::string wakeUpNotice)
{
  std::cout << "How can I help you?" << std::endl;
}

