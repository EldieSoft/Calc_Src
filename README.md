README for Calc_Src

The original version of my small Calc.c terminal app can be found in my main repository, but after adding a new "Grid Mode" to my simple file, i realized it was getting much too cluttered as a simple single file C project. 

I decided it needed its own repository, because I have already made one new library for this project, I'm not sure how many more I will be making. As of right now, it is still just a simple calculator app, but for how long? I'm not sure. I'm having a lot of fun adding new features, and, although some of the features I have i mind go a bit out of scope for a simle calulator app, I'll keep adding stuff until I am satisfied, or bored.

Have fun looking through my files. Below will be compilation instructions, I know how hard it was to learn how to compile as a beginner, and I don't want anyone else to be lost.

Big Bosco 2/17/24


COMPILATION INSTRUCTIONS (USING GCC):

gcc -c Calc.c

gcc -c grid.c

gcc Calc.o grid.o -o main //main is the executable

RUNNING MAIN:

./main
