#include "Contact.hpp"
#include "PhoneBook.hpp"

bool	which_action(std::string input)
{
	if (input == "ADD")
		std::cout << "ADDED" << std::endl;
	else if (input == "SEARCH")
		std::cout << "SEARCH" << std::endl;
	else if (input == "EXIT")
		return (false);
    return (true);
}

int	main(void)
{
	PhoneBook book1;
	std::string input;

	while (42)
	{
		std::cout << "📞 PhoneBook ➜ ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "exit" << std::endl;
			return (0);
		}
        if (which_action(input) == false)
            break ;
	}
	std::cout << std::endl;
	return (0);
}
