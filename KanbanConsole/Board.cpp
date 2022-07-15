#include "Board.h"

Board::Board(string name)
{
	this->name = name;
}

ostream& operator<<(ostream& os, const Board board)
{
	os << "Board name: " << board.name << endl;
	if (board.columns.size() > 0)
	{
		for (List column : board.columns) 
		{
			os << "Column \"" << column.getTitle() << "\"" << endl;
		}
	} 
	else
	{
		os << "No columns!" << endl;
	}
	return os;
}
