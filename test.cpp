#include <algorithm>
#include <vector>
#include <iostream>
#include "CodeSnippet.hpp"
#include "TaskCreator.hpp"
#include "TaskStorage.hpp"

void prettyPrint(std::vector<Task> tasks)
{
	std::for_each (tasks.begin(), tasks.end(),
		[] (const Task& e) {
			std::cout << e.getName() << "\t\t\tAssigned to: " << e.getAssignee() << std::endl;
			std::cout << e.getDescription() << std::endl;
			std::cout << e.getDate() << std::endl;

			std::cout << "--------------------------------------" << std::endl;
		}
	);
}

struct Action
{
	std::string description;
	char selector;
};

void tablePrint(std::vector<Action> actions)
{
	int maxDescLength = 0;
	std::for_each (actions.begin(), actions.end(),
		[&] (const Action& e) {
			if (e.description.size() > maxDescLength)
				maxDescLength = e.description.size();
		}
	);

	std::cout << '+';
	for (int i = 0; i < maxDescLength + 2; i++) std::cout << '-';
	std::cout << '+';
	std::cout << "---";
	std::cout << '+' << std::endl;

	std::for_each (actions.begin(), actions.end(),
		[&] (const Action& e) {
			std::cout << "| ";
			std::cout << e.description;
			for (int i = 0; i < maxDescLength - e.description.size(); i++)
				std::cout << " ";
			std::cout << " | ";
			std::cout << e.selector;
			std::cout << " |" << std::endl;
		}
	);

	std::cout << '+';
	for (int i = 0; i < maxDescLength + 2; i++) std::cout << '-';
	std::cout << '+';
	std::cout << "---";
	std::cout << '+' << std::endl;
}

int main()
{
	std::vector<Action> availableActions;
	availableActions.push_back({ "Create a task.", 't' }); 
	availableActions.push_back({ "View all tasks.", 'v' });

	TaskStorage tasks;

	while (true)
	{
		std::cout << "What do you want to do?" << std::endl;
		tablePrint(availableActions);

		char action;
		std::cin >> action;
		std::cin.ignore(2, '\n');

		switch (action)
		{
		case 't':
			tasks.store(createTask());
			break;
		case 'v':
			prettyPrint(tasks.getTasks());
			break;
		}

	}
}