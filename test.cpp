#include "test.h"
#include <iostream>
#include <string>

extern "C" int my_stuff()
{
 std::string xx("nisse");
 std::cout << xx << std::endl;
return 0;
}

