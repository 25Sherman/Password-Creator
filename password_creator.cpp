/******************************************************************************

                            Work of Milan Grewal

*******************************************************************************/

#include <iostream>
#include <cctype>
#include <cstring>
#include<string>

using namespace std;

int main()
{
	string password;
	int size;
	bool passwordCreated = false;
	bool upper = false;
	bool lower = false;
	bool number = false;

	do {

		cout << "Create your password\n"
			<< "Your password must meet the following criteria:\n"
			<< "The password should be at least six characters long.\n"
			<< "The password should contain at least one uppercase and one lowercase letter.\n"
			<< "The password should have at least one digit.\n";

		getline(cin, password);
		size = password.length();

		if (size < 6)
		{
			cout << "You need at least 6 characters." << endl;
		}

		for (int i = 0; i < size; i++)
		{
			if (isupper(password[i]))
			{
				upper = true;
			}
			if (islower(password[i]))
			{
				lower = true;
			}
			if (isdigit(password[i]))
			{
				number = true;
			}
		}

		if (upper == false)
		{
			cout << "You need an upercase letter." << endl;
		}

		if (lower == false)
		{
			cout << "You need an lowercase letter." << endl;
		}

		if (number == false)
		{
			cout << "You need at least one number." << endl;
		}

		if (upper == true && lower == true && number == true)
		{
			cout << "Your password has been created." << endl;
			exit(EXIT_SUCCESS);
		}
		else
		{
			cout << "Please create a password that meets the criteria: " << endl;
		}

	} while (passwordCreated == false);

	return 0;
}

