#include "TicTacToe.h"
#include <iostream>
#include <iomanip>
using namespace std;

TicTacToe::TicTacToe()
{
	welcomeMessage();


	while (endGame == false)
	{
		inputFirst();
		printArray();
		gameEndCheck();
		if (endGame == true)
			break;
		inputSecond();
		printArray();
		gameEndCheck();
	}
}


void TicTacToe::welcomeMessage() const
{
	cout << "Hello! welcome to TicTacToe, please " 
		<< "specify the row and column of which box you want to plan "
		<< "your next move! " << endl;
}

void TicTacToe::printArray() const
{
	cout << "***************" << endl;
	for (int printRow = 0; printRow < row; printRow++)
	{
		for (int printCol = 0; printCol < col; printCol++)
		{
			if (arena[printRow][printCol] == 1)
				cout << 'X' << " ";
			else if (arena[printRow][printCol] == 2)
				cout << 'O' << " ";
			else
				cout << arena[printRow][printCol] << " ";
		}
		cout << endl;
	}
}

void TicTacToe::inputFirst()
{
	cout << "Player one: enter row and column seperated by space." << endl;

	do{
	cin >> rows;
	cin >> cols;

	
	if (checkArray(rows, cols) == true)
	{
		arena[rows][cols] = 1;
		break; 
	}
		else
			cout << "Thats already taken or out of bounds! try again player 1." << endl;
	} while (checkArray(rows, cols) == false);
	rows = 3; cols = 3;
}

void TicTacToe::inputSecond()
{
	cout << "Player two: enter row and column seperated by space." << endl;

	do{
	   cin >> rows;
	   cin >> cols;

	
	   if (checkArray(rows, cols) == true)
	   {
		   arena[rows][cols] = 2;
		   break;
	   }
		else
			cout << "Thats already taken or out of bounds! try again player 2." << endl;
	} while (checkArray(rows, cols) == false);
	rows = 3; cols = 3;
}

bool TicTacToe::checkArray(int row, int col) const
{
	if (arena[row][col] == 0 && (row >= 0 && row <= 2 && col >= 0 && col <=2))
		return true;
	else
		return false;
}

bool TicTacToe::checkDraw() const
{
	if (arena[0][0] != 0 && arena[0][1] != 0 && arena[0][2] != 0 && arena[1][0] != 0 && arena[1][1] != 0 && arena[1][2] != 0 && arena[2][0] != 0 && arena[2][1] != 0 && arena[2][2] != 0)
		return true;
	else
		return false;
}

void TicTacToe::gameEndCheck()
{
	if (arena[0][0] == 1 && arena[0][1] == 1 && arena[2][2] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][0] == 1 && arena[0][1]== 1 && arena[0][2] == 1)
	{
		cout << "And the winner is: player " << 1  << endl;
		endGame = true;
	}
	else if (arena[1][0] == 1 && arena[1][1] == 1 && arena[1][2] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[2][0] == 1 && arena[1][1] == 1 && arena[0][2] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[2][0] == 1  && arena[2][1] == 1 && arena[2][2] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][0] == 1 && arena[1][0] == 1 && arena[2][0] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][1] == 1 && arena[1][1] == 1 && arena[2][1] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][2] == 1 && arena[1][2] == 1 && arena[2][2] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][0] == 1 && arena[1][1] == 1 && arena[2][2] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
	}
	else if (arena[0][2] == 1 && arena[1][1] == 1 && arena[2][0] == 1)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][0] == 2 && arena[0][1] == 2 && arena[2][2] ==  2)
	{
		cout << "And the winner is: player " << 1 << endl;
		endGame = true;
	}
	else if (arena[0][0]== 2 && arena[0][1] == 2&& arena[0][2] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[1][0] ==2&& arena[1][1]==2 && arena[1][2] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[2][0]==2 && arena[1][1]==2 && arena[0][2] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[2][0]==2 && arena[2][1]==2 && arena[2][2] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[0][0] == 2 && arena[1][1] == 2 && arena[2][2] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
	}
	else if (arena[0][0]==2 && arena[1][0] ==2 && arena[2][0] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[0][1] == 2 && arena[1][1] == 2 && arena[2][1] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[0][2] == 2 && arena[1][2] == 2 && arena[2][2] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (arena[0][2] == 2 && arena[1][1] == 2 && arena[2][0] == 2)
	{
		cout << "And the winner is: player " << 2 << endl;
		endGame = true;
	}
	else if (checkDraw() == true)
	{
		cout << "Wow! its a draw! congratualtions to you both." << endl;
		endGame = true;
	}
	

}

TicTacToe::~TicTacToe()
{
}
