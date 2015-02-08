#include "Task.hpp"
#include <iostream>

std::string Task::getName() {
	return name;
}

std::string Task::getDescription() {
	return description;
}

std::string Task::getAssignee() {
	return assignee;
}

int Task::getdueDate() {
	return dueDate;
}