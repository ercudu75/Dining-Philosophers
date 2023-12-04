#include "phil.h"

/* Function to let a philosopher take chopsticks */
void take_chopstick(int i)
{
	if (i % 2 == 0)
	{
		/*take the left chopstick*/
		sem_wait(&chopstick[i]);
		/*take the right chopstick*/
		sem_wait(&chopstick[(i + 1) % N]);
	}
	else
	{
		sem_wait(&chopstick[(i + 1) % N]);
		sem_wait(&chopstick[i]);
	}
	printf("Philosopher %d is eating\n", i);
}


void put_chopstick(int i)
{
	sem_post(&chopstick[i]);
	sem_post(&chopstick[(i + 1) % N]);
	printf("Philosopher %d has finished eating\n", i);
}
