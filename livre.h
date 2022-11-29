#include <iostream>
#include "date.h"

class Livre
{
private:
    std::string _auteur;
    std::string _titre;
    Genres _genre;
    Langues _langue;
    int _isbn;
    Date _datePublication;
public:
    Livre(std::string auteur, std::string titre, Genres genre, Langues langue, int isbn, Date datePublication);
    enum Genres{
        Science_fiction, Action, Policier, Romance, Histoire, Réaliste, Fantastique, Drama
    };
    enum Langues{
        Français, Anglais, Espagnol, Allemand, Russe, Chinois, Japonais, Portugais, Polonnais
    };
};

livre::livre(/* args */)
{
}

