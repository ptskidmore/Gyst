#include "TaskCreator.hpp"
#include "Task.hpp"
#include "TaskStorage.hpp"
#include <iostream>
#include <string>

template <typename T>
T query(const std::string& question)
{
	std::cout << question << std::endl;
	T answer;
	std::cin >> answer;
	return answer;
}

Task createTask()
{
	std::string name = query<decltype(name)>("What is the task name?");
	std::string desc = query<decltype(desc)>("What is the task description?");
	std::string asig = query<decltype(asig)>("Who are you assigning this task to?");
	int dueDate = query<decltype(dueDate)>("When is this task due?");
	return Task(name, desc, asig, dueDate);	

}

Task TaskStorage::store(Task twoStore)
{
	tasks.push_back(twoStore);
	std::vector<Tasks> tasks;
}
