#include "Contact.hpp"

Contact::Contact() {
    return ;
}

Contact::~Contact() {
    return ;
}

void Contact::set_firstname(std::string first_name)
{
    this->_first_name = first_name;
}
void Contact::set_lastname(std::string last_name)
{
    this->_last_name = last_name;
}
void Contact::set_nickname(std::string nickname)
{
    this->_nickname = nickname;
}
void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}
void Contact::set_phone_number(int phone_number)
{
    this->_phone_number = phone_number;
}
