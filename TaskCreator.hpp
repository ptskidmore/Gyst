#ifndef TASK_CREATOR_HPP
#define TASK_CREATOR_HPP

#include "Task.hpp"
#include <string>

class TaskCreator
{
	Task createTask(std::string name, std::string description, std::string assignee, int dueDate);
};


#endif