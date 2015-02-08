#include "Task.hpp"
#include <vector>
#include "TaskStorage.hpp"

TaskStorage::TaskStorage()
{

}

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

std::vector<Task> TaskStorage::findTasksDueOn(std::string date)
{
	std::vector<Task> dateTasks;
	for(int i = 0; i < tasks.size(); i++)
	{
		if(tasks[i].getDate().compare(date) == 0)
		{
			dateTasks.push_back(tasks[i]);
		}
	}
	return dateTasks;
}

void TaskStorage::store(const Task& task)
{
	tasks.push_back(task);
}

std::vector<Task> TaskStorage::getTasks() 
{
	return tasks;
}