#ifndef TASK_STORAGE_HPP
#define TASK_STORAGE_HPP

class TaskStorage
{
public:
	TaskStorage();
	std::vector<Task> tasks;
	std::vector<Task> findTasksFor(std::string user);
	std::vector<Task> findTasksDueOn(std::string date);
	void store(const Task& task);
	std::vector<Task> getTasks();
};

#endif