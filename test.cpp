#include <boost/date_time.hpp>
#include <iostream>
#include "CodeSnippet.hpp"

int main()
{
	CodeSnippet snip("CodeSnippet.cpp", 9);
	std::cout << snip.getLines() << std::endl;
}