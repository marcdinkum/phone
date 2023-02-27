#include <iostream>

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
  void end_call();
  
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

void SmartPhone::end_call()
{
  std::cout << "Call ends" << std::endl;
}



int main()
{
  SmartPhone nokia;
  nokia.dialNumber("0612345678");
  nokia.call();
  nokia.end_call();

  return 0;
}

