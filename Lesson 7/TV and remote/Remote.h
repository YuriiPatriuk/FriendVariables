#pragma once
#include "TV.h"
class Remote
{
public:
	Remote(TV* tv)
		:tv(tv)
	{}
	void power();
	Remote& operator ++ ();
	Remote& operator -- ();

private:
	TV* tv;


};

