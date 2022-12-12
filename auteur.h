#pragma once 
#include <iostream>

class Auteur {
public:
  Auteur(std::string firstname, std::string lastname);
  std::string firstname() const;
  std::string lastname() const;
  std::string getFullName() const;
            
private:
  std::string _firstname;
  std::string _lastname;
  
}