# Knights-Tour-Problem

See this Wikipedia article about the Knight’s Tour problem: http://en.wikipedia.org/wiki/Knight%27s tour.
Finding all directed, open tours on a standard, 8 × 8 chessboard is computationally intractable. To find
them all on a 7 × 7 board in reasonable time would require a supercomputer. My quick-and-dirty solution
finds all 6 × 6 solutions in about 2 hours and all 5 × 5 tours in under a second on a laptop.
Write a C program to find all directed, open Knight’s Tours on a 5 × 5 chess board. Assume the spaces
of the board are numbered:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
Print all tours as a list of numbers corresponding to the spaces in the order they are visited. For instance,
here is one solution:
25,18,21,12,23,20,9,2,11,22,19,10,13,16,7,4,15,24,17,6,3,14,5,8,1
There are 1727 others.
Your output should consist of 1728 lines, each line containing the numbers 1–25, each appearing exactly
once, separated by commas (like the line above). This will allow for straightforward, automated checking
of your output.
See the syllabus for information about what to turn in and submission format.
