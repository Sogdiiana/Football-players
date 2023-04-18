#include <iostream>
#include <string>
#include "player11.h"
using namespace std;
static int playerNum = 11;

int main()
{
	Player ply;
	string playerID ;
	int matches, menu, w = 1, nextStep;;
	int goals;
	cout << "<<< Football players information system >>> ";
	
	while (w == 1)
	{
		cout << " Choose menu : \n 1~create player \n 2~see players \n 3~delete player \n 4~number of players  " << endl;
		while (w == 1)
		{
			cin >> menu;
			switch (menu)
			{
			case 1:
				cout << "Creating player >> \n  Enter player id : ";
				cin >> playerID;
				cout << "  How many matches have been played ? ";
				cin >> matches;
				cout << "  How many goals have been scored ? ";
				cin >> goals;
				break;
			case 2:
				system("CLS");
				cout << "Display player >> " << endl;
				ply.displayMessage();
				break;

			case 3:
				system("CLS");
				cout << "Delete player >> " << endl;
				ply.deleting();
				break;
			case 4:
				system("CLS");
				cout << "Number of players >> " << endl;
				ply.getPlayersNum();
				break;
			default:
				cout << "Choose one of the options " << endl;
				continue;
			}
			break;
		}
		cout << "Press <1> to get menu or <0> to exit " << endl;
		cin >> nextStep;
		if (nextStep == 1)
		{
			cout << " ";
			system("CLS");
		}
		if (nextStep == 0)
		{
			break;
		}
	}

	return 0;
}
