#include <iostream>
#include "calculator.h"

int main(int argc, char* argv[])
{
	int a = 2, b = 4;

	Calculator calculator;

	int c = calculator.Sub(b, a);

	std::cout <<"Result = "<< c << std::endl;

	return 0;
}
