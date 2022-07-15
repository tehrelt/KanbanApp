#include <iostream>
#include <conio.h>
#include "Board.h"

using namespace std;

Board createBoard();

int main()
{
    Board board = createBoard();

    

    // system("pause");
}

void menu()
{
    char key;
    do
    {

        key = _getch();
        _putch(key);

    } while (key != 'y' && key != 'n')
}

Board createBoard()
{
    cout << "#### Setup a board ####" << endl;

    string boardName;
    cout << "Board name: ";
    cin >> boardName;

    cout << "#### Board setup completed ####" << endl;

    system("pause");
    system("cls");
    return Board(boardName);
}