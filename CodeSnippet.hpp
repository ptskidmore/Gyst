#ifndef CODE_SNIPPET_HPP
#define CODE_SNIPPET_HPP

#include <fstream>
#include <string>

class CodeSnippet
{
public:
	CodeSnippet(const std::string& path, int lineNumber);
	std::string& getLines();
private:
	std::string prettyLines;
	const int lineNumber;
};

#endif