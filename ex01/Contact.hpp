#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "iostream"
# include "sstream"
# include "string"

typedef struct s_contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;
} t_contact;

class Contact
{
  public:
	Contact();
	Contact(t_contact contact);
	~Contact();

	std::string getFirstname();
	std::string getLastname();
	std::string getNickname();
	std::string getDarkestSecret();
	std::string getPhonenumber();

  private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _darkest_secret;
	std::string _phone_number;
};

#endif