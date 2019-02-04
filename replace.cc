#include "replace.h"
//replace.h includes iostream, string, and cstdlib

void replace(const std::string& input, const std::string& output)
{
	//word is the current file line being read 
	//substring is the portion of the file line being searched for the input string
	std::string word, substring;
	
	//Reads the file to the end line by line, treating it as cin
	while (!std::cin.eof())
	{
		getline(std::cin, word);
		
		//Checks to see if the word line is long enough to house the input string
		if (word.length() > input.length())
		{
			//Checks every substring of word of the same length as the input
			//Makes the replacement if necessary
			for (size_t i = 0; i < word.length() - input.length(); i++)
			{
				substring = word.substr(i, input.length());
				if (substring == input)
				{
					word.replace(i, input.length(), output);
				}
			}
		}

		//Writes the resulting line to the output file
		std::cout << word << std::endl;
	}
}
