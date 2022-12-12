#include "date.h"
#include <iostream>

class Livre {
public:
  Livre(std::string auteur, std::string titre, std::string genre, std::string langue,
    std::string isbn, std::string datePublication);
    std::string auteur() const;
    std::string titre() const;
    std::string genres() const;
    std::string langues() const;
    std::string datePublication() const;
    std::string getFullName() const; 
    std::string isbn() const;
    std::string getFullNameLivre() const;
    std::string to_string() const; 
   

private:
    std::string _isbn;
    std::string _auteur;
    std::string _titre;
    std::string _genres;
    std::string _langues;
    std::string _datePublication;
};

  /*enum Genres {
    Science_fiction,
    Action,
    Policier,
    Romance,
    Histoire,
    Realiste,
    Fantastique,
    Drama
  };
  enum Langues {
    Francais,
    Anglais,
    Espagnol,
    Allemand,
    Russe,
    Chinois,
    Japonais,
    Portugais,
    Polonnais
  };*/

