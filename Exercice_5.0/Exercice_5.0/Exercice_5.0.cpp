#include <iostream>
#include <time.h>
#include <random>

int ComputerChoice()
{
	srand(static_cast<unsigned int>(time(0)));

	int maxChoice = 3;
	int choice = rand() % maxChoice;

	switch (choice)
	{
	case 0:
		
		std::cout << "The computer has chosen leaf.\n";
		break;

	case 1:

		std::cout << "The computer has chosen rock.\n";
		break;

	case 2:

		std::cout << "The computer has chosen scissors.\n";
		break;
	}

	return choice;
}

void TestChoice(int choice1, int choice2, bool &hasWon)
{
	if ((choice1 == 0 && choice2 == 1) || (choice1 == 1 && choice2 == 2) || (choice1 == 2 && choice2 == 0))
	{
		std::cout << "The computer wins!\n";

		hasWon = true;
	}
	else if ((choice2 == 0 && choice1 == 1) || (choice2 == 1 && choice1 == 2) || (choice2 == 2 && choice1 == 0))
	{
		std::cout << "You win!\n";

		hasWon = true;
	}
	else if (choice1 == choice2)
	{
		std::cout << "Draw!\n";
	}
}


int main()
{
	bool hasWon = false;

	int choice1 = 0;
	int choice2 = 0;

	while (!hasWon)
	{
		std::cout << "Choose one of the following numbers: \n 0 = leaf \n 1 = rock \n 2 = scissors \n";
		std::cin >> choice2;

		choice1 = ComputerChoice();

		TestChoice(choice1, choice2, hasWon);
	}



	system("pause");
	return EXIT_SUCCESS;
}