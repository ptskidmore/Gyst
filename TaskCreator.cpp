#include "TaskCreator.hpp"

Task TaskCreator::createTask(std::string name, std::string description, std::string assignee, int dueDate)
{
	Task task(name, description, assignee, dueDate);

	return task;	
}