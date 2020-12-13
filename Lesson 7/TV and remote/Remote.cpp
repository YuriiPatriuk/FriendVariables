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
	if(tv->state)
		tv->nextChannel();
	return *this;
}

Remote& Remote::operator--()
{
	if (tv->state)
		tv->prevChannel();
	return *this;
}

void Remote::incVolume()
{
	if (tv->state == true && tv->volume < tv->maxVolume)
		tv->volume++;
	else if (!tv->state)
		std::cout << "TV is off!!" << std::endl;
	else if (tv->volume == tv->maxVolume)
		std::cout << "Volume is max!" << std::endl;
}

void Remote::decVolume()
{
	if (tv->state == true && tv->volume > 1)
		tv->volume--;
	else if (!tv->state)
		std::cout << "TV is off!!" << std::endl;
	else if (tv->volume == 1)
		std::cout << "Volume is min!" << std::endl;
}

void Remote::changeTV(TV& tv)
{
	this->tv = &tv;
}

void Remote::goToChannel(size_t channel)
{
	if (channel > tv->maxChannel)
		std::cout << "No such channel!" << std::endl;
	else
		tv->currChannel = channel;
}
