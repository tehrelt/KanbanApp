#pragma once
#include <vector>
#include "../KanbanApp/List.h"

class Board
{
	string name;
	vector<List> columns;
public:
	Board(string name);
	friend ostream& operator<< (ostream& os, const Board board);
};

