#include <iostream>
#include "date.h"

class Livre
{
private:
    std::string _auteur const;
    std::string _titre const;
    Genres _genre const;
    Langues _langue const;
    int _isbn const;
    Date _datePublication const;
public:
    Livre(std::string auteur, std::string titre, Genres genre, Langues langue, int isbn, Date datePublication);
    enum Genres{
        Science_fiction, Action, Policier, Romance, Histoire, Réaliste, Fantastique, Drama
    };
    enum Langues{
        Français, Anglais, Espagnol, Allemand, Russe, Chinois, Japonais, Portugais, Polonnais
    };
};

