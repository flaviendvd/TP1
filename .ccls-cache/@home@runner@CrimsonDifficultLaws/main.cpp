#include <iostream>
#include "Lecteur.h"
#include "date.h"
#include <assert.h> 
#include "livre.h"


int main(int argc, char const *argv[]) 
{
    Person p1("Tchance","Ya");
    Livre livre1("FLAVIEN","Docteur","Policier","Francais", "9-780-96", "2022/01/28");
    
    std::cout << "Lecteur - " << p1.getFullName() << std::endl;
    std::cout << "Livre Emprunté- " << livre1.getFullNameLivre() << std::endl;
    
    Date a_day(2002,7,31);
    std::cout << "le " << toString(a_day) << std::endl;
    
    std::cout<<""<<std::endl;
  
    a_day.next();
    std::cout << "A rendre le " << toString(a_day) << std::endl;

    std::cout << "bye." << std::endl;

  return 0;


}