#include "../Logic Layer/precompile.hpp"
void display(std::string* username, std::string* password)
{
	std::cout << "Enter Username: ";
	std::cin >> *username;
	std::cout << std::endl;
	std::cout << "Enter Password: ";
	std::cin >> *password;
}

void displayOut(std::string& outString)
{
	std::cout << std::endl;
	std::cout << outString;
}