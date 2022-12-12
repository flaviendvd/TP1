#include <iostream>
#include "date.h"
#include <string>

class Livre
{
    /*public:
      enum Genres{
        Science_fiction, Action, Policier, Romance, Histoire, Realiste, Fantastique, Drama
    };*/
public:
    
    Livre(std::string auteur, std::string titre, std::string genres, std::string langues, std::string isbn, std::string datePublication);
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


    /*enum class Langues{
        Francais, Anglais, Espagnol, Allemand, Russe, Chinois, Japonais, Portugais, Polonnais
    };*/