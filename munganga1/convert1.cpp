#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// sentinel value
	bool ft_To_m = true;

	float ft;
	float cm;
	int numChoice = 1;
	
	// prompt user for an input until user enters an input
	while (numChoice == 1)
	{
		// Displays menu and
		// prompt user input again
		cout <<"\nChoose from the option below: \n"
		     <<"\n(1) cm to ft \n"
		     <<"(2) ft to cm \n"
		     <<"\nPlease type 1 or 2 to select your option: ";
		cin >> numChoice;
		
		// checks if user selects option 1 from menu
		if (numChoice == 1)
		{
			ft_To_m = true;
		}
		else
		{
			ft_To_m = false;
		}
			
		if (ft_To_m)
		{
			// prompt the user with number of cm to convert to ft
			cout << "Please enter in the number of centimeter: ";
			cin >> cm;
		
			// conversion happens here
			ft = cm / 30.48;
		
			if (ft > 1)
			{
				// setting the number of decimals to 2 decimal points
				cout << fixed << setprecision(2);
				// displaying more information to update the user with the right calculations based on his choices
				cout << cm << " centimeters = " << ft << " feet" << endl;
			}
			else
			{
				// setting the number of decimals to 2 decimal points
				cout << fixed << setprecision(2);
				// displaying more information to update the user with the right calculations based on his choices
				cout << cm << " centimeter = " << ft << " foot" << endl;
			}
		}
		else															// If user choice was 2
		{
			// prompt the user with number of foot to convert to cm
			cout << "Please enter in the number of foot: ";
			cin >> ft;

			// conversion happens here
			cm = ft * 30.48;
		
			if (ft > 1)
			{
				// setting the number of decimals to 2 decimal points
				cout << fixed << setprecision(2);
				// displaying more information to update the user with the right calculations based on his choices
				cout << ft << " feet = " << cm << " centimeters" << endl;
			}
			else
			{
				// setting the number of decimals to 2 decimal points
				cout << fixed << setprecision(2);
				// displaying more information to update the user with the right calculations based on his choices
				cout << ft << " foot = " << cm << " centimeter" << endl;
			}
		}
		// Displays menu and
		// prompt user input again
		cout <<"\nChoose: \n"
		     <<"\n(1) to convert again \n"
		     <<"(2) to exit \n"
		     <<"\nPlease type 1 or 2 to select your option: ";
		cin >> numChoice;
	}
	return 0;
}
