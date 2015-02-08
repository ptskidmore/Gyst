#ifndef TASK_HPP
#define TASK_HPP

#include <iostream>
#include <string>

class Task {
private:
	std::string name;
	std::string description;
	std::string assignee;
	int dueDate;
	Task(std::string name, std::string description, std::string assignee, int dueDate)
public:
	std::string getName();
	std::string getDescription();
	std::string getAssignee();
	
};

#endif