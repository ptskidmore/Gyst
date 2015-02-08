#include "Task.hpp"
#include <vector>
#include <boost/date_time.hpp>
#include "TaskStorage.hpp"

std::vector<Task> TaskStorage::findTasksFor(std::string user)
{
	std::vector<Task> userTasks;
	for(int i = 0; i < tasks.size(); i++)
	{
		if(tasks[i].getAssignee().compare(user) == 0)
		{
			userTasks.push_back(tasks[i]);
		}
	}
	return userTasks;
}

std::vector<Task> TaskStorage::findTasksDueOn(int date)
{
	std::vector<Task> dateTasks;
	for(int i = 0; i < tasks.size(); i++)
	{
		if(tasks[i].getDate() == date)
		{
			dateTasks.push_back(tasks[i]);
		}
	}
	return dateTasks;
}