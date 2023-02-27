#include <iostream>
#include <string>
#include <smartphone.h>


int main()
{
  SmartPhone nokia;
  nokia.dialNumber("0612345678");
  nokia.call();
  nokia.endCall();
  nokia.heySiri("Hello Siri");

  return 0;
}

