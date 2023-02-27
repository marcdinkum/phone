#include <iostream>

class Phone
{
public:
  void dial_number(std::string number);
  void call();
  void end_call();
  
private:

};


void Phone::dial_number(std::string number)
{
  std::cout << "Dialing " << number << std::endl;
}

void Phone::call()
{
  std::cout << "Call starts" << std::endl;
}

void Phone::end_call()
{
  std::cout << "Call ends" << std::endl;
}



int main()
{
  Phone nokia;
  nokia.dial_number("0612345678");
  nokia.call();
  nokia.end_call();

  return 0;
}

