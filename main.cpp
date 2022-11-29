
#include <iostream>
#include "Lecteur.h"


int main(int argc, char const *argv[]) 
{
    Person p1("Tchance","Ya");
    std::cout << "Lecteur - " << p1.getFullName() << std::endl;


  Date a_day(7,31);
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;
  a_day.next();
  std::cout << "a day + 1: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;

  return 0;

}