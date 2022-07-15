#pragma once
#include <iostream>
#include "../KanbanConsole/Attachment.h"
using namespace std;

class Task
{
	string title;
	string description;
	//Attachment& attachment;
private:
	Task(string title);
	Task(string title, string description);
	//void setAttachment(Attachment& attachment);
};

