
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

Pict0

let's say the dining room is empty and nobody is in there we can let P0 the first one enter into the dining room:

Pict1

So he's gonna find that the the shared ressource C4 and C0 are free and he's gonna start eating

So now P1 gonna enter:

Pict2

So he should have acces to two ressources and he have acess to C1 but he can't have acess to C0 because it's already used by P0 so the process is blocked and he's gonna wait until P0 free the ressource C0

So now P2 enter :

Pict3

As we can see in the picture that P2 have acces to the two ressources C1 and C2 and so he's start eating which that leads us to that P1 don't have access to any ressources now so he's gonna wait now P0 nad P2 until they finish

And the same scenario that happen to the P1 at the begining will happen to P3 and P4

Pict4

We can see that P3 enter and have acces to one ressource C3 and ressource C2 it's already used by P2

pict5

And the same for P4


So now let's consider that P0 has finish eating:

Pict6

So he's gonna free the ressources C4 and C0 and that let P4 gonna enter because he has now access to the two free ressources C4 And C3, that leads to P1 and P3 gonna still wait(blocked).

P2 has finished so will free two ressources

Pict7

Ressources C1 and C2 are free and P1 gonna enter and P3 gonna still wait until P4 free the ressource C3

And at the end P4 left

Pict8












