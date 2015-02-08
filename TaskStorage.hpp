#ifndef TASK_STORAGE_HPP
#define TASK_STORAGE_HPP

class TaskStorage
{
	TaskStorage();
	std::vector<Task> tasks;
	std::vector<Task> findTasksFor(std::string user);
	std::vector<Task> findTasksDueOn(int date);
};

#endif