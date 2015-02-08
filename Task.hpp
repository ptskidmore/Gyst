#ifndef TASK_HPP
#define TASK_HPP

#include <iostream>
#include <string>

class Task {
private:
	std::string name;
	std::string description;
	std::string assignee;
	std::string dueDate;
	
public:
	Task(std::string name, std::string description, std::string assignee, std::string dueDate); 
	std::string getName() const;
	std::string getDescription() const;
	std::string getAssignee() const;
	std::string getDate() const;
	
};

#endif