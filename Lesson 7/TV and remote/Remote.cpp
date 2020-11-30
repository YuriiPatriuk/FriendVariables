#include "Remote.h"

void Remote::power()
{
	if (tv->state)
		tv->state = false;
	else
		tv->state = true;
}

Remote& Remote::operator++()
{
	tv->nextChannel();
	return *this;
}

Remote& Remote::operator--()
{
	tv->prevChannel();
	return *this;
}
