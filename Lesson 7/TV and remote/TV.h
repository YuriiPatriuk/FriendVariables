#pragma once
#include <iostream>
class TV
{
public:
	TV(int& maxCh)
		:maxChannel(maxCh)
	{}
	TV(bool& st)
		:state(st)
	{}

	void power();
	void nextChannel();
	void prevChannel();
	void incVolume();
	void decVolume();
	void print() const;


private:
	bool state=false;
	size_t volume=15;
	size_t currChannel=1;
	const int maxChannel=100;
	const size_t maxVolume = 100;
	friend class Remote;
};

