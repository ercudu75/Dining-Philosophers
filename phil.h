#ifndef PHIL_H
#define PHIL_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>

void *philosopher(void *num);
void take_chopstick(int);
void put_chopstick(int);



#endif
