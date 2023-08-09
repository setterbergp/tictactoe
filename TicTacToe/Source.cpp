#include <iostream>
using namespace std;	

void message();
void draw(char board[]);
void play(char* ptrTurn,char board[]);
bool gameover(char board[], bool* ptrisDraw);

int main()
{
	const int size = 9;
	char board[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char turn = 'X';
	bool isDraw = false;

	bool* ptrisDraw = &isDraw;
	char* ptrTurn = &turn;
	

	message();

	while (gameover(board, ptrisDraw))
	{
		draw(board);
		play(ptrTurn, board);
	}

	draw(board);

	if (isDraw == false && turn == 'X')
	{
		cout << "Player2" << endl;
	}
	else if (isDraw == false && turn == 'O')
	{
		cout << "Player1" << endl;
	}
	else
	{
		cout << "Draw" << endl;
	}
	
	system("pause");
}

void message()
{
	cout << "TIC TAC TOE" << endl;
	cout << "Player 1 = X" << endl;
	cout << "Player 2 = O" << endl;
	cout << endl << endl;
}

void draw(char board[])
{
	cout << "\t" << board[0] << "\t" << "|" << "\t" << board[1] << "\t" << "|" << "\t" << board[2] << endl;
	cout << "     -----------|---------------|-----------" << endl;

	cout << "\t" << board[3] << "\t" << "|" << "\t" << board[4] << "\t" << "|" << "\t" << board[5] << endl;
	cout << "     -----------|---------------|-----------" << endl;

	cout << "\t" << board[6] << "\t" << "|" << "\t" << board[7] << "\t" << "|" << "\t" << board[8] << endl;
}

void play(char* ptrTurn, char board[])
{
	int choice;
	int cell;

	if (*ptrTurn == 'X')
	{
		cout << "\n" << "\t" << "Player 1 [X] turn: " << endl;
	}
	if (*ptrTurn == 'O')
	{
		cout << "\n" << "\t" << "Player 2 [O] turn: " << endl;
	}

	cin >> choice;

	//checks if the input fits the defined variable datatype
	if (cin.fail())
	{
		cout << "\t" << "Invalid choice, try again" << endl;

		//clears error flags
		cin.clear();

		//clears the input buffer after failed input operation
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return;
	}

	switch (choice)
	{
		case 1:
			cell = 0;
			break;
		case 2:
			cell = 1;
			break;
		case 3:
			cell= 2;
			break;
		case 4:
			cell = 3;
			break;
		case 5:
			cell = 4;
			break;
		case 6:
			cell = 5;
			break;
		case 7:
			cell = 6;
			break;
		case 8:
			cell = 7;
			break;
		case 9:
			cell = 8;
			break;
		default:
			cout << "\t" << "\t" << "Invalid Choice" << endl;
			return;
	}

	if (*ptrTurn == 'X' && board[cell] != 'X' && board[cell] != 'O')
	{
		board[cell] = 'X';
		*ptrTurn = 'O';
	}
	else if (*ptrTurn == 'O' && board[cell] != 'X' && board[cell] != 'O')
	{
		board[cell] = 'O';
		*ptrTurn = 'X';
	}
	else
	{
		cout << "\t\tBox already filled!\n\t\tPlease try again!!!\n\n";
	}
}

bool gameover(char board[], bool* ptrisDraw)
{
	//check win
	for (int i = 0; i < 3; i++)
	{
		if (board[i * 3 + 0] == board[i * 3 + 1] && board[i * 3 + 1] == board[i * 3 + 2] || board[0 * 3 + i] == board[1 * 3 + i] && board[1 * 3 + i] == board[2 * 3 + i])
			return false;
	}
	if (board[0] == board[4] && board[4] == board[8] || board[2] == board[4] && board[4] == board[6])
		return false;

	//check if any box is not filled
	for (int i = 0; i < 9; i++)
	{
		if (board[i] != 'X' && board[i] != 'O')
		{
			return true;
		}
	}

	*ptrisDraw = true;
	return false;
}