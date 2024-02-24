README for Calc_Src
UPDATE: 2/24/24

THis is a brand new version with a completely rehashed grid mode. Now the grid will print points that the user inputs. It works with both positive and negative points, and, as of right now, the user can input 10 points at a time. 

Another small improvement is the addition of a clear command at the selection menu, but that is just a quality of life improvement, and nothing spectacular. 

I will be adding more soon, but feel free to test everything out. I'll be cleaning up a lot of the code, there are still some artifacts of a previous build in there that I have to get rid of without destroying everything.

Big Bosco


COMPILATION INSTRUCTIONS (USING GCC):

gcc -c Calc.c

gcc -c grid.c

gcc Calc.o grid.o -o main //main is the executable

RUNNING MAIN:

./main
