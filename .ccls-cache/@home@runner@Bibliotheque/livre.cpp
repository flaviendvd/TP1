#include <iostream>
#include "livre.h"
#include "date.h"

Livre::Livre(std::string auteur, std::string titre, Genres genre, Langues langue, int ISBN, Date
datePublication){
    _auteur = auteur;
    _titre = titre;
    _genre = genre;
    _langue = langue;
    _ISBN = ISBN;
    _datePublication = datePublication;
}

std::string toStringGenre(Genres g) {
switch (g)
{
case Genres::Science_fiction:
return "Science_fiction";
break;
case Genres::Action:
return "Action";
break;
case Genres::Policier:
return "Policier";
break;
case Genres::Histoire:
return "Histoire";
break;
case Genres::Réaliste:
return "Réaliste";
break;
case Genres::Romance:
return "Romance";
break;
case Genres::Fantastique:
return "Fantastique";
break;
case Genres::Drama:
return "Drama";
break;
default:
break;
}
}

std::string toStringLangue(Langues l) {
switch (l)
{
case Langues::Français:
return "Français";
break;
case Langues::Anglais:
return "Anglais";
break;
case Langues::Allemand:
return "Allemand";
break;
case Langues::Espagnol:
return "Espagnol";
break;
case Langues::Chinois:
return "Chinois";
break;
case Langues::Russe:
return "Russe";
break;
case Langues::Japonais:
return "Japonais";
break;
case Langues::Portugais:
return "Portugais";
break;
case Langues::Polonnais:
return "Polonnais";
break;
default:
break;
}
}