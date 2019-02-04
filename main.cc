#include "replace.h"
//replace.h includes iostream, string, and cstdlib

int main(int argc, char* argv[])
{
	//Returns an error message if the command line arguments have not been formatted correctly 
	if (argc != 3)
	{
		std::cerr << "Error: an incorrect number of command line arguments has been entered." << std::endl;
		return 1;
	}
	else
	{
		std::string input = argv[1]; //String to be replaced in file
		std::string output = argv[2]; //Replacement string for the file
		replace(input, output); //Makes the replacement
		return 0;
	}
}