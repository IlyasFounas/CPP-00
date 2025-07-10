#include "Contact.hpp"


Contact::Contact()
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_darkest_secret = "";
	_phone_number = "";
	return ;
}

Contact::Contact(t_contact contact)
{
	this->_last_name = contact.last_name;
	this->_first_name = contact.first_name;
	this->_nickname = contact.nickname;
	this->_darkest_secret = contact.darkest_secret;
	this->_phone_number = contact.phone_number;
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string Contact::getFirstname()
{
    return (_first_name);
}
std::string Contact::getLastname()
{
    return (_last_name);
}
std::string Contact::getNickname()
{
    return (_nickname);
}
std::string Contact::getDarkestSecret()
{
    return (_darkest_secret);
}
std::string Contact::getPhonenumber()
{
    return (_phone_number);
}
