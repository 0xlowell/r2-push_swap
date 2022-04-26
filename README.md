# push_swap_42
# [![lzima's 42 push_swap Score](https://badge42.vercel.app/api/v2/cl1nk4f8f004009lb75fyii0c/project/2455829)](https://github.com/JaeSeoKim/badge42)

**push_swap : Solving a "Tower of Hanoi like" puzzle using sequential access sorting algorithms.**

This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

**the catch**
Starting with randomly ordered integers on one stack, we must order these by means of a second empty stack and a limited movements set :

* Pushing the topmost value of a stack to the next stack ( pa, pb )

* Swapping both topmost values of stack a, stack b or both ( sa, sb, ss )

* Rotating the topmost value of stack a, stack b or both under their bottom ( ra, rb, rr )

* Rotating the bottommost value of stack a, stack b or both over their top ( rra, rrb, rrr )

______________


Algo 100% 5/5 for a 100 - 4/5 for a 500

______________

Wiki:

For a 100, find the 20 smallest values in *stack.a*, and *push* into *stack.b*.
Then find the next 20 smallest values that remain in *stack.a*, until *stack.a* is empty.
Then, find the biggest value in *stack.b* by *rotate* or *reverse-rotate*, and *push* it back into *stack.a*.
For a 500, change the chunk size to 70, more or less.

Optimisation :

While searching for a value between 0 and 20 to push, split it into *push* a chunk of 0 to 10, and *push* + *reverse rotate* 10 to 20.


_______________

https://user-images.githubusercontent.com/93135858/161398892-20a8537a-62d3-4153-bd51-6c04d5491859.mov


_______________

Tested with:

https://github.com/lmalki-h/push_swap_tester

References:

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a

