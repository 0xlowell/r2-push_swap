# push_swap_42
push_swap : This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

Algo 100% 5/5 for a 100 - 4/5 for a 500

Wiki:
For a 100, find the 20 smallest values in stack.a, and push into stack.b.
Then find the next 20 smallest values that remain in stack.a, until stack.a is empty.
Then, find the biggest value in stack b by rotate or reverse-rotate, and push it back into stack.a.
For a 500, change the chunk size to 70, more or less.

Optimisation :
While searching for a value between 0 and 20 to push, split it into push a chunk of 0 to 10, and push reverse rotate 10 to 20.

https://user-images.githubusercontent.com/93135858/161398892-20a8537a-62d3-4153-bd51-6c04d5491859.mov

