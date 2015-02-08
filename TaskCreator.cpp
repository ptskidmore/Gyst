#include "TaskCreator.hpp"

Task TaskCreator::createTask(string name, string description, string assignee, int dueDate)
{
	Task task(name, description, assignee, dueDate);

	return task;	
}