#include "Contact.hpp"
#include "PhoneBook.hpp"

static void	print_this_contact(PhoneBook &book, int i)
{
	std::cout << book._contacts[i].getFirstname() << std::endl;
	std::cout << book._contacts[i].getLastname() << std::endl;
	std::cout << book._contacts[i].getNickname() << std::endl;
	std::cout << book._contacts[i].getPhonenumber() << std::endl;
	std::cout << book._contacts[i].getDarkestSecret() << std::endl;
}

static int	return_index(void)
{
	int	number;

	std::string input;
	std::getline(std::cin, input);
	std::stringstream ss(input);
	ss >> number;
	if (ss.fail() || !ss.eof())
	{
		std::cout << "Error of converssion" << std::endl;
		return (-1);
	}
	return (number);
}

static void	which_contact(PhoneBook &book, int limit)
{
	int	number;

	if (limit == 0)
		return ;
	else if (limit == 1)
	{
		print_this_contact(book, 0);
		return ;
	}
	else
	{
		std::cout << "Now choose a contact between " << 1;
		std::cout << " and " << limit << " : ";
		number = return_index() - 1;
		if (number == -1 || number < 0 || number >= limit)
			std::cout << "You must retry (invalid index)" << std::endl;
		else
			print_this_contact(book, number);
	}
}

void	print_infos(PhoneBook &book, int i)
{
	int	y;

	std::string str[3];
	y = 0;
	str[0] = book._contacts[i].getFirstname();
	str[1] = book._contacts[i].getLastname();
	str[2] = book._contacts[i].getNickname();
	while (y < 3)
	{
		if (str[y].length() > 10)
		{
			str[y][9] = '.';
			for (int j = 0; j < 10; j++)
				std::cout << str[y][j];
			std::cout << "|";
		}
		else
		{
			for (long unsigned int j = 0; j < (10 - str[y].length()); j++)
				std::cout << " ";
			std::cout << str[y] << "|";
		}
		y++;
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
		if (book._contacts[i].getFirstname()[0] != '\0')
		{
			for (int j = 0; j < 9; j++)
				std::cout << " ";
			std::cout << i + 1;
			std::cout << "|";
			print_infos(book, i);
			std::cout << std::endl;
			limit++;
		}
	}
	which_contact(book, limit);
	return ;
}
