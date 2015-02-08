#include "CodeSnippet.hpp"
#include <cmath>

CodeSnippet::CodeSnippet(const std::string& path, int lineNumber)
	: lineNumber(lineNumber)
{
	file.open(path, std::fstream::in);

	const int AMOUNT_CONTEXTUAL_LINES= 3;
	
	int currentLine = 1;
	while (file.is_open())
	{
		std::string snippetLine;
		if (std::abs(AMOUNT_CONTEXTUAL_LINES - lineNumber) <= AMOUNT_CONTEXTUAL_LINES
		{
			std::getline(file, snippetLine);
			prettyLines += snippetLine + '\n';
		}
		currentLine++;
	}
}

CodeSnippet::~CodeSnippet()
{
	file.close();
}

std::string& CodeSnippet::getLines()
{
	return prettyLines;
}