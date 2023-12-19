#include "precompile.hpp"

int main()
{
	//for test username: admin, password: admin123456
	std::string* username = new std::string;
	std::string* password = new std::string;
	std::string outString;
	std::fstream loginInfo;
	loginInfo.open("./Data Structure Layer/loginInfo.txt", std::fstream::in | std::fstream::out | std::fstream::app);
	display(username, password);
	if (loginInfo.is_open())
	{
		if (checkLogin(loginInfo, username, password))
			outString = "Login successful!";
		else
			outString = "Username or Password is invalid. Try again!";
	}
	else
		outString = "Login registry can't open. Try again later";
	displayOut(outString);
	loginInfo.close();
	delete username;
	delete password;
}