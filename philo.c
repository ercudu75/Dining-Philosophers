#include "phil.h"


void *philosopher(void *num)
{
	while (1)
	{
		int i = (int)num;

		printf("Philosopher %d is hungry\n", i);
		take_chopstick(i);
		sleep(1);
		put_chopstick(i);
	}
}
