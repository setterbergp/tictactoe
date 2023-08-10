#include <iostream>
using namespace std;

void message();
void draw(char board[]);
void play();
bool gameOn(int player);

int main()
{
	char board[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int player = 1;

	message();
	draw(board);

	play();

	system("pause");
}

void message()
{
	cout << "TIC TAC TOE" << endl << endl;
	cout << "Player 1 [X]" << endl;
	cout << "Player 2 [O]" << endl;
	cout << endl;
}

void draw(char board[])
{
	cout << "\t" << board[0] << "\t" << board[1] << "\t" << board[2] << endl;
	cout << "\t" << board[3] << "\t" << board[4] << "\t" << board[5] << endl;
	cout << "\t" << board[6] << "\t" << board[7] << "\t" << board[8] << endl;
	cout << endl;
}

void play()
{
	int choice;
	int cell;

	cin >> choice;

	switch (choice)
	{
	case 1:
		cell = 0;
		break;
	case 2:
		cell = 1;
		break;
	case 3:
		cell = 2;
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
		break;
	}

}

bool gameOn(int player)
{
	return 0;
}