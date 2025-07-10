#include "Contact.hpp"
#include "PhoneBook.hpp"

static void	print_this_contact(PhoneBook &book, int i)
{
	std::cout << book._contacts[i].getFirstname() << std::endl;
	std::cout << book._contacts[i].getLastname() << std::endl;
	std::cout << book._contacts[i].getNickname() << std::endl;
	std::cout << book._contacts[i].getDarkestSecret() << std::endl;
	std::cout << book._contacts[i].getPhonenumber() << std::endl;
}

static int	return_index(void)
{
	int	number;

	std::string input;
	std::getline(std::cin, input);
	std::stringstream ss(input);
    ss >> number;

    if (ss.fail() || !ss.eof()) {
        std::cout << "Error of converssion" << std::endl;
        return (-1);
    }
	return (number);
}

static void	which_contact(PhoneBook &book, int limit)
{
    int number;

	if (limit == 0)
		return ;
	else if (limit == 1)
	{
		print_this_contact(book, 0);
		return ;
	}
	else
	{
		std::cout << "now choose contact between " << 1;
		std::cout << " and " << limit << " : ";
		number = return_index() - 1;
        if (number == -1)
            return ;
        else if (number < 0 || number > limit)
            std::cout << "You must retry " << std::endl;
        else
            print_this_contact(book, number);
	}
}

void	print_contacts(PhoneBook &book)
{
	int	i;
	int	limit;

	i = -1;
	limit = 0;
	while (++i < 8)
	{
		std::cout << i + 1 << " ";
		if (book._contacts[i].getFirstname()[0] != '\0')
		{
			std::cout << book._contacts[i].getFirstname() << std::endl;
			limit++;
		}
		else
			std::cout << "(empty)" << std::endl;
	}
	which_contact(book, limit);
	return ;
}
