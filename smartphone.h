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


