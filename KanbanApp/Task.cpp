#include "Task.h"
Task::Task(string title)
{
	this->title = title;
}

Task::Task(string title, string description)
{
	this->title = title;
	this->description = description;
}

//void Task::setAttachment(Attachment& attachment)
//{
//	this->attachment = attachment;
//}
