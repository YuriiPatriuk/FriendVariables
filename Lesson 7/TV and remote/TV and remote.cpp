// TV and remote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Remote.h"
#include "TV.h"
int main()
{
    TV tv(500);
    tv.power();
    tv.incVolume();
    tv.print();
}

