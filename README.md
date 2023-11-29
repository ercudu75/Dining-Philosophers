
# The Dining Philosophers Problem

The dining philosophers problem is a very famous and interesting problem used to demonstrate the concept of deadlock.

<div style="text-align: center;">
  <img src="https://res.cloudinary.com/practicaldev/image/fetch/s--eqcyI4o8--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/xuhgni9ifz9d1uo1red2.png" alt="C Programming Logo" width="563" height="500">
</div>



## Table of Contents

- [Explination Of The Problem](#Explination-Of-The-Problem)
- [Solution](#Solution)

## Explination-Of-The-Problem

There are 5 philosophers sitting around a round table eating spaghetti and each of them has one chopstick between them. All 5 of them sit around the table and pick up the chopstick placed towards their right. But, here’s the problem. To eat the spaghetti they need both the chopsticks and since everyone picked up the chopstick to their right, nobody gets the left chopstick so that nobody can eat.

I don't know but that's not an actual problem in our real life so they can demand more chopstick and the problem is resolved 😂😂😂, the real question that i ahev in my mind right now is how they would eat spaghetti with two chopstick 😅.

Now let's stop the joke and talk about the dining philosophers problem is an excellent example to explain the concept of deadlock.

When each philosopher picks up the chopstick to their right, they also end up picking the left chopstick of the person sitting next to them which leaves every philosopher with just one chopstick and nobody can start eating.

Let's consider that the Philosophers are the Process and the Chopsticks are the ressource shared, Every process need two ressource which one of this shared ressource it has already acquired and the other is acquired by some other process. so One of this process is blocked and gonna wait until that ressource is free and this process cannot proceed.

As we can see that every process is dependent on each other and that forms a circular-wait and the system goes into a deadlock condition.

## Solution

To solve the problem <br />
Let's Consider <br />
Five philosophers: P0,P1,P2,P3,P4<br />
Five chopsticks: C0,C1,C2,C3,C4<br />

<img width="1169" alt="Pict0" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/9138c9c5-4eef-41fd-befd-39d2e821a485">

let's say the dining room is empty and nobody is in there we can let P0 the first one enter into the dining room:

<img width="1108" alt="Pic1" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/48a1fd81-90d0-4f3d-8201-b905f7154bd9">


So he's gonna find that the the shared ressource C4 and C0 are free and he's gonna start eating

So now P1 gonna enter:

<img width="740" alt="Pic2" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/1ef6691f-062f-4697-a55a-f3e976ae229e">


So he should have acces to two ressources and he have acess to C1 but he can't have acess to C0 because it's already used by P0 so the process is blocked and he's gonna wait until P0 free the ressource C0

So now P2 enter :

<img width="762" alt="Pic3" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/359eb076-2456-4d12-b628-411402fc7de3">


As we can see in the picture that P2 have acces to the two ressources C1 and C2 and so he's start eating which that leads us to that P1 don't have access to any ressources now so he's gonna wait now P0 nad P2 until they finish

And the same scenario that happen to the P1 at the begining will happen to P3 and P4

<img width="823" alt="Pic4" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/7d33601b-4255-4b4a-9e29-06b624b9a7af">


We can see that P3 enter and have acces to one ressource C3 and ressource C2 it's already used by P2

<img width="883" alt="Pic5" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/739527a7-e955-405f-83d0-ee298dbf6e25">

And the same for P4


So now let's consider that P0 has finish eating:

<img width="830" alt="Pic6" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/7804ef45-ce04-4aa3-b3ee-ddb2a781b6fb">

So he's gonna free the ressources C4 and C0 and that let P4 gonna enter because he has now access to the two free ressources C4 And C3, that leads to P1 and P3 gonna still wait(blocked).

P2 has finished so will free two ressources

<img width="842" alt="Pic7" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/768a7584-1f41-4f09-9e7f-24c684130106">


Ressources C1 and C2 are free and P1 gonna enter and P3 gonna still wait until P4 free the ressource C3

And at the end P4 left

<img width="806" alt="Pic8" src="https://github.com/ercudu75/Dining-Philosophers/assets/75138084/8c10d5fe-c2bf-46ce-8df6-cb0c99c5242e">













