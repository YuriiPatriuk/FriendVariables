// TV and remote.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Remote.h"
#include "TV.h"
int main()
{
    TV tv(17);
    TV tv2(120);
    tv.print();
    tv.power();
    tv.incVolume();
    tv.print();
    Remote remote(&tv);
   /* remote.goToChannel(17);
    tv.print();*/
    --remote;
    tv.print();
    tv2.print();
    remote.changeTV(tv2);
    remote.power();
    tv2.print();
}

