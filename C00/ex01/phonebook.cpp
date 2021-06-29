#include "phonebook.hpp"

void add_contact(Phonebook *book, int i)
{
	std::string	str;

	std::cout << "Enter First Name " << std::endl;
	std::getline(std::cin, str);
	book->setFirstName(str, i);
	std::cout << "Enter Last Name " << std::endl;
	std::getline(std::cin, str);
	book->setLastName(str, i);
	std::cout << "Enter Nickname " << std::endl;
	std::getline(std::cin, str);
	book->setNickName(str, i);
	std::cout << "Enter Login " << std::endl;
	std::getline(std::cin, str);
	book->setLogin(str, i);
	std::cout << "Enter Postal Address " << std::endl;
	std::getline(std::cin, str);
	book->setPostalAddress(str, i);
	std::cout << "Enter Phone Number " << std::endl;
	std::getline(std::cin, str);
	book->setPhoneNumber(str, i);
	std::cout << "Enter Birthday Date " << std::endl;
	std::getline(std::cin, str);
	book->setBirthdayDate(str, i);
	std::cout << "Enter Favorite Meal " << std::endl;
	std::getline(std::cin, str);
	book->setFavoriteMeal(str, i);
	std::cout << "Enter Underwear Color " << std::endl;
	std::getline(std::cin, str);
	book->setUnderwearColor(str, i);
	std::cout << "Enter Darkest Secret " << std::endl;
	std::getline(std::cin, str);
	book->setDarkestSecret(str, i);
}


void get_phonebook(Phonebook *book, int num_contact)
{
	int			n;
	std::string	str;

	n = 0;
	std::cout << std::right << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nickname" << "|" << '\n';
	while (n <= num_contact)
	{
		std::cout << std::right << std::setw(10) << n + 1;
		std::cout << "|";
		str = book->getFirstName(n);
		if (str.length() > 10)
			str = trim_contact(str);
		std::cout << std::right << std::setw(10) << str << "|";
		str = book->getLastName(n);
		if (str.length() > 10)
			str = trim_contact(str);
		std::cout << std::right << std::setw(10) << str << "|";
		str = book->getNickName(n);
		if (str.length() > 10)
			str = trim_contact(str);
		std::cout << std::right << std::setw(10) << str << "|\n";
		n++;
	}
	std::cout << "\n";
}

int	get_index(int num_contact)
{
	std::string	str;
	int 		n;

	std::cout << "Enter index: ";
	std::getline(std::cin, str);
	if (str.length() != 1)
		return (-1);
	if (!(std::strchr("12345678", str[0])))
		return (-1);
	n = std::stoi(str);
	n--;
	if (n > num_contact)
		return (-1);
	return (n);
}

void get_contact(Phonebook *book, int i)
{
	std::cout << "FirstName=" << book->getFirstName(i) << std::endl;
	std::cout << "LastName=" << book->getLastName(i) << std::endl;
	std::cout << "NickName=" << book->getNickName(i) << std::endl;
	std::cout << "Login=" << book->getLogin(i) << std::endl;
	std::cout << "PostalAddress=" << book->getPostalAddress(i) << std::endl;
	std::cout << "PhoneNumber=" << book->getPhoneNumber(i) << std::endl;
	std::cout << "BirthdayDate=" << book->getBirthdayDate(i) << std::endl;
	std::cout << "FavoriteMeal=" << book->getFavoriteMeal(i) << std::endl;
	std::cout << "UnderwearColor=" << book->getUnderwearColor(i) << std::endl;
	std::cout << "DarkestSecret=" << book->getDarkestSecret(i) << std::endl;
}

int	main()
{
	std::string	str;
	Phonebook	book;
	int 		num_contact;
	int			i;

	num_contact = -1;
	std::cout << "Enter command: ";
	while (std::getline(std::cin, str))
	{
		if (!(str.compare("EXIT")))
			break ;
		else if (!str.compare("ADD"))
		{
			++num_contact;
			if (num_contact >= 8)
			{
				std::cout << "MAX CONTACT" << std::endl;
				std::cout << "Enter command: ";
				num_contact = 7;
				continue ;
			}
			add_contact(&book, num_contact);
		}
		else if (!str.compare("SEARCH"))
		{
			get_phonebook(&book, num_contact);
			i = get_index(num_contact);
			if (i == -1)
			{
				std::cout << "index does not exist\n";
				std::cout << "Enter command: ";
				continue;
			}
			get_contact(&book, i);
		}
		else
			;
		std::cout << "Enter command: ";
	}
	return (0);
}
