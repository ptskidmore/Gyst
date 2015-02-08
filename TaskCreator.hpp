#ifndef TASK_CREATOR_HPP
#define TASK_CREATOR_HPP

#include "Task.hpp"
#include <string>

class TaskCreator
{
	Task createTask(string name, string description, string assignee, int dueDate);
};


#endif