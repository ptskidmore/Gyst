#include "CodeSnippet.hpp"
#include <cmath>
#include <iostream>

CodeSnippet::CodeSnippet(const std::string& path, int lineNumber)
	: lineNumber(lineNumber)
{
	std::ifstream file;
	file.open(path, std::fstream::in);

	const int AMOUNT_CONTEXTUAL_LINES = 3;
	
	int currentLine = 1;
	while (!file.eof())
	{
		std::string snippetLine;
		std::getline(file, snippetLine);
		if (std::abs(currentLine - lineNumber) <= AMOUNT_CONTEXTUAL_LINES)
		{
			prettyLines += snippetLine + '\n';
		}
		currentLine++;
	}
	file.close();
}

std::string& CodeSnippet::getLines()
{
	return prettyLines;
}