#include "TaskCreator.hpp"
#include "Task.hpp"
#include <iostream>
#include <string>

std::string query(const std::string& question)
{
	std::cout << question << std::endl;
	std::string answer;
	std::getline(std::cin, answer);
	std::cin.clear();
	return answer;
}

Task createTask()
{
	std::string name = query("What is the task name?");
	std::string desc = query("What is the task description?");
	std::string asig = query("Who are you assigning this task to?");
	std::string dueDate = query("When is this task due?");
	return Task(name, desc, asig, dueDate);	
}