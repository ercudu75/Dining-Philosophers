#ifndef PHIL_H
#define PHIL_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

#define N 5
/* N: define number of philosophers*/
sem_t chopstick[N];

void *philosopher(void *num);
void take_chopstick(int i);
void put_chopstick(int i);



#endif
