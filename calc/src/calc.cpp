/*
 * calc.cpp
 * Copyright (C) 2016 cameron <cameron@default-VirtualBox>
 *
 * Distributed under terms of the MIT license.
 */

//#include "calc.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of args: Must be 4"
			<< std::endl;
		return 1;
	}
	
	double lhs = std::stod(argv[1]);
	std::string op = argv[2];
	double rhs = std::stod(argv[3]);

	if (op == "+")
	{
		std::cout << "Result = " << lhs + rhs << std::endl;
	}

	else if (op == "-")
	{
		std::cout << "Result = " << lhs - rhs << std::endl;
	}

	else if (op == "x")
	{
		std::cout << "Result = " << lhs * rhs << std::endl;
	}

	else
	{
		std::cerr << "Operation not supported" << std::endl;
		return 1;
	}

}

