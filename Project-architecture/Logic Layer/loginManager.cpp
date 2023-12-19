#include "precompile.hpp"
bool checkLogin(std::fstream& loginInfo, std::string* usernname, std::string* password)
{
	std::string checkString;
	while (loginInfo)
	{
		std::getline(loginInfo, checkString);
		if (checkString == *usernname + " " + *password)
		{
			return true;
		}
	}
	return false;
}