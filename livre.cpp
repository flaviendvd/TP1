#include <iostream>
#include "livre.h"
#include "date.h"

Livre::Livre(std::string auteur, std::string titre, std::string genres, std::string langues, std::string isbn , std::string datePublication) : _auteur(auteur), _titre(titre), _genres(genres), _langues(langues), _isbn(isbn), _datePublication(datePublication)  { 
    /*_auteur = auteur;
    _titre = titre;
    _genres = genres;
    _langue = langue;
    _isbn = isbn;
    _datePublication = datePublication;*/
}

 std::string Livre::auteur() const {
        return _auteur;
    }
 std::string Livre::titre() const {
        return _titre;
    }

std::string Livre::genres() const {
        return _genres;
    }
    
 std::string Livre::langues() const {
        return _langues;
    }
    
 std::string Livre::isbn() const {
        return _isbn;
    }
 std::string Livre::datePublication() const {
        return _datePublication;
    }
  std::string Livre::getFullNameLivre() const {
        return std::string (auteur() +":"+ std::string(titre())+":"+ std::string(genres())+":"+std::string(langues())+":"+ std::string(isbn())+":"+std::string(datePublication()));
    };