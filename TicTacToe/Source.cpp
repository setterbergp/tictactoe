#include <iostream>
using namespace std;	


void message();
void draw(char board[]);

int main()
{
	const int size = 9;
	char board[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	message();
	draw(board);
	
	system("pause");
}

void message()
{
	cout << "TIC TAC TOE" << endl;
	cout << "Player 1 = X" << endl;
	cout << "Player 2 = O" << endl;
	cout << endl;
}

void draw(char board[])
{
	cout << "\t" << board[0] << "\t" << "|" << "\t" << board[1] << "\t" << "|" << "\t" << board[2] << endl;
	cout << "     -----------|---------------|-----------" << endl;

	cout << "\t" << board[3] << "\t" << "|" << "\t" << board[4] << "\t" << "|" << "\t" << board[5] << endl;
	cout << "     -----------|---------------|-----------" << endl;

	cout << "\t" << board[6] << "\t" << "|" << "\t" << board[7] << "\t" << "|" << "\t" << board[8] << endl;

	cout << endl;
}