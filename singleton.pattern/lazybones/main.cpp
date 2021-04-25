#include <iostream>
#include "lazybones.h"

int main(int argc, char* argv[])
{
	MySingleton* myInstance1 = MySingleton::getInstance();
	printf("--------------\n");
	MySingleton* myInstance2 = MySingleton::getInstance();
	return 0;
}
