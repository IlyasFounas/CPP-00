#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "iostream"
#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        ~PhoneBook();
    private:
        Contact _contacts[8];
        int     _cycle;
        bool    _full;
};

#endif