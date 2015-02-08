#include "TaskCreator.hpp"
#include "Task.hpp"

Task TaskCreator::createTask(std::string name, std::string description, std::string assignee, int dueDate)
{
	return Task(name, description, assignee, dueDate);	
}