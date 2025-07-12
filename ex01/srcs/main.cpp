#include "Contact.hpp"
#include "PhoneBook.hpp"

void print_contacts(PhoneBook &book);

static bool	add_contact(PhoneBook &book)
{
	t_contact contact;

	std::cout << "Contact's firstname :";
	if (!std::getline(std::cin, contact.first_name))
		return (false);
	std::cout << "Contact's lastname :";
	if (!std::getline(std::cin, contact.last_name))
		return (false);
	std::cout << "Contact's nickname :";
	if (!std::getline(std::cin, contact.nickname))
		return (false);
	std::cout << "Contact's phone number :";
	if (!std::getline(std::cin, contact.phone_number))
		return (false);
	std::cout << "Contact's darkest_secret :";
	if (!std::getline(std::cin, contact.darkest_secret))
		return (false);
	std::cout << std::endl;
	book.add_contact(contact);
	std::cout << "✅ Contact added successfully.\n";
	return (true);
}

static bool	which_action(std::string input, PhoneBook &book)
{
	if (input == "ADD" && !add_contact(book))
			return (false);
	else if (input == "SEARCH")
		print_contacts(book);
	else if (input == "EXIT")
	{
		std::cout << "exit";
		return (false);
	}
	return (true);
}

int	main(void)
{
	PhoneBook book;
	std::string input;

	while (42)
	{
		std::cout << "📞 PhoneBook ➜ ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "exit" << std::endl;
			return (0);
		}
		if (which_action(input, book) == false)
			break ;
	}
	std::cout << std::endl;
	return (0);
}
