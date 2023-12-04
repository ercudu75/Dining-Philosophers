#include "phil.h"


void take_chopstick(int i)
{
	/*take the left chopstick*/
	sem_wait(&chopstick[i]);
	/*take the right chopstick*/
	sem_wait(&chopstick[(i + 1) % N]);
	printf("Philosopher %d is eating\n", i);
}


void put_chopstick(int i)
{
	/*take the left chopstick*/
	sem_post(&chopstick[i]);
	/*take the right chopstick*/
	sem_post(&chopstick[(i + 1) % N]);
	printf("Philosopher %d is eating\n", i);
}
