#include <iostream>
#include <algorithm>
#include <iterator>
#include "fun.h"

using Compare=int(const void *a,const void*b);

void sort_bubble_2(const void*first , const void *last , size_t size, Compare *cmp)
{
	byte *it = static_cast<byte*>(first);
	byte *limit = static_cast<byte*>(last);
	while(it!=limit)
	{
		if(cpm(*it,*it+size))//Ta certo isso?
		{
			////////TROCAR *it por *it+size
		}
		it+=size;
		limit-=size;
	}
}