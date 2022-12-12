
#include <iostream>
#include "Lecteur.h"
#include "date.h"
#include <assert.h>
#include "livre.h"


int main(int argc, char const *argv[]) 
{
  Person p1("Tchance","Ya");
  std::cout << "Lecteur - " << p1.getFullName() << std::endl;  
  Date datePublication(2002,7,10);
  Livre livre("Harlen Coben", "Sans un mot", Genres::Policier, Langues::Français, "978-2-7654-0912-0", datePublication);
  std::cout << livre.getTitre() << livre.getAuteur() << toStringGenre(livre.getGenre()) << toStringLangue(livre.getLangue()) << livre.getISBN() << toString(livre.getDatePublication()) << std::endl;

  return 0;
}



