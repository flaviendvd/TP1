#include <iostream>
#include "date.h"

enum class Genres{
        Science_fiction, Action, Policier, Romance, Histoire, Réaliste, Fantastique, Drama
    };

enum class Langues{
        Français, Anglais, Espagnol, Allemand, Russe, Chinois, Japonais, Portugais, Polonnais
    };

class Livre
{
private:
  std::string _auteur;
  std::string _titre;
  Genres _genre;
  Langues _langue;
  int _ISBN;
  Date _datePublication;
public:
  Livre(std::string auteur, std::string titre, Genres genre, Langues langue, int ISBN, Date datePublication);
  std::string getTitre() const { 
        return _titre;}
	std::string getAuteur() const { 
	    return _auteur;}
	Langues getLangue() const { 
	    return _langue;}
	Genres getGenre() const { 
	    return _genre;}
	Date getDatePublication() const { 
	    return _datePublication;}
	int getISBN() const { 
	    return _ISBN;}
};
    
std::string toStringGenre(Genres g);
std::string toStringLangue(Langues l);
