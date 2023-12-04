#include "phil.h"
/* N: define number of philosophers*/


int main(void)
{
	int i, *num;
	pthread_t id_philospher[N];	/* Thread ID for each philosopher*/

	for (i = 0; i < N; i++)
		sem_init(&chopstick[i], 0, 1);

	for (i = 0; i < N; i++)
	{
		num = malloc(sizeof(int));
		*num = i;
		pthread_create(&id_philospher[i], NULL, philosopher, num);
		sleep(2);
	}

	for (i = 0; i < N; i++)
		pthread_join(id_philospher[i], NULL);

	return (0);
}
