#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->_cycle = 0;
}

PhoneBook::~PhoneBook() {
    return ;
}

void PhoneBook::add_contact(t_contact contact)
{
    Contact new_contact(contact);
    _contacts[_cycle] = new_contact;
    _cycle++;
    if (_cycle == 8)
    {
        _cycle = 0;
    }
}
