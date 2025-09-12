#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "iostream"

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	void add_contact(t_contact contact);
	Contact _contacts[8];

  private:
	int _cycle;
};

#endif