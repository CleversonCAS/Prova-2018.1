#include <iostream>
#include <iterator>
#include <string>
#include <ctime> //rand
#include <vector>
#include "fun.h"

using std::begin;
using std::end;

bool cmp ( const void *a , const void *b )
{
	if(static_cast<int*>(a)  <  static_cast<int*>(b))
	{
		return true;
	}
	return false;
}

int main()
{
	


	return 0;
}