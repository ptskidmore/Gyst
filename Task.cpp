#include "Task.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>
#include "CodeSnippet.hpp"


std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) 
{
	std::stringstream ss(s);
	std::string item;
	while (std::getline(ss,item, delim)) {
		elems.push_back(item);
	}
	return elems;
}

std::vector<std::string> split(const std::string &s, char delim)
{
	std::vector<std::string> elems;
	split(s, delim, elems);
	return elems;
}

Task::Task(std::string name, std::string description, std::string assignee, std::string dueDate)
	: name(name), description(description), assignee(assignee), dueDate(dueDate)
{
	int firstSquareIndex = description.find('[');
	int secondSquareIndex = description.find(']');
	std::string code = description.substr(firstSquareIndex + 1, secondSquareIndex - (firstSquareIndex + 1));
	std::cout << code << std::endl;

	char chars[] = " ]";
	for (unsigned int i = 0; i < 2; ++i)
	{
		code.erase(std::remove(code.begin(), code.end(), chars[i]), code.end());
	}

	std::cout << code << std::endl;

	std::vector<std::string> splitteds = split(code, ',');

	CodeSnippet snippet(splitteds[0], atoi(splitteds[1].c_str()));
	this->description += snippet.getLines();
}

std::string Task::getName() const {
	return name;
}

std::string Task::getDescription() const {
	return description;
}

std::string Task::getAssignee() const {
	return assignee;
}

std::string Task::getDate() const {
	return dueDate;
}