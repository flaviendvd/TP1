#pragma once
#include <iostream>
#include "auteur.h"

Auteur::nom(std::string firstname, std::string lastname) : _firstname(firstname), _lastname(lastname) {
    }

    std::string Auteur::firstname() const {
        return _firstname;
    }

    std::string Auteur::lastname() const {
        return _lastname;
    }

    std::string Auteur::getFullName()const {
        return std::string (firstname() + " " + std::string(lastname()));
    };