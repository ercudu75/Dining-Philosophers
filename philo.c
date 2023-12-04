#include "phil.h"

/* Function to represent the philosopher's behavior */
void *philosopher(void *num)
{
	int i = *(int *)num;
	free(num);

	printf("Philosopher %d has entered the room.\n", i);
    sleep(2);

	while (1)
	{
		printf("Philosopher %d is thinking.\n", i);
		sleep(rand() % 5 + 1);
		printf("Philosopher %d is hungry\n", i);
		take_chopstick(i);
		sleep(2);
		put_chopstick(i);
		printf("Philosopher %d is thinking\n", i);
        sleep(rand() % 5 + 1);
	}
}
