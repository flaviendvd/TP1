#include <iostream>
#include "Lecteur.h"


int main(int argc, char const *argv[]) 
{
    Person p1("Tchance","Ya");
    std::cout << "Lecteur - " << p1.getFullName() << std::endl;

    return 0;
}