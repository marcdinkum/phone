#include <iostream>
#include <string>

class Screen
{
public:
  int glass;
};


class SmartPhone
{
public:
  void dialNumber(std::string number);
  void call();
  void endCall();
  void heySiri(std::string wakeUpNotice);
  
private:
  Screen screen;
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

int main()
{
  SmartPhone nokia;
  nokia.dialNumber("0612345678");
  nokia.call();
  nokia.endCall();
  nokia.heySiri("Hello Siri");

  return 0;
}

