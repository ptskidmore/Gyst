#include <boost/date_time.hpp>
#include <iostream>
#include "CodeSnippet.hpp"
#include "TaskCreator.hpp"

int main()
{
	Task newTask = createTask();
	std::cout << newTask.getName() << std::endl;
}