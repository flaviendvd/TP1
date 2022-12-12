#include <iostream>
#include "livre.h"
#include "date.h"

Livre::Livre(std::string auteur, std::string titre, Genres genre, Langues langue, int isbn, Date datePublication){
    _auteur = auteur;
    _titre = titre;
    _genre = genre;
    _langue = langue;
    _isbn = isbn;
    _datePublication = datePublication;
}