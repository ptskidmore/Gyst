#include "Task.hpp"
#include <iostream>

Task::Task(std::string name, std::string description, std::string assignee, int dueDate)
	: name(name), description(description), assignee(assignee), dueDate(dueDate)
{

}

std::string Task::getName() {
	return name;
}

std::string Task::getDescription() {
	return description;
}

std::string Task::getAssignee() {
	return assignee;
}

int Task::getDate() {
	return dueDate;
}