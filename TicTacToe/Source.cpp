#include <iostream>
using namespace std;

void draw(char grid[]);

int main()
{
	const int size = 9;
	char grid[size] = { '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	draw(grid);
	
	system("pause");
}

void draw(char grid[])
{
	cout << grid << endl;
}