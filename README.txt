Dependencies:
 eigen-3.3.8     (only using Matrix with RowMajor stored type, not using any of its method only the Matrix template type.)
 qqwing-1.3.4    ( used its method to quickly generate and solve a sample puzzle while storing and iterating through them in a Matrix).

To Compile:

make


To Run:

./sudoku


Sample Output:

$ ./sudoku
4 0 0 0 3 1 0 0 0
8 0 0 0 2 0 0 0 0
0 5 0 0 0 7 3 4 0
0 0 0 0 0 0 5 2 0
0 0 0 0 7 4 1 0 0
0 0 0 8 9 5 0 0 0
0 0 5 0 4 0 0 7 0
0 0 0 0 0 8 4 0 0
0 0 3 7 0 9 0 5 0
1
Solved:
4 9 6 5 3 1 2 8 7
8 3 7 4 2 6 9 1 5
2 5 1 9 8 7 3 4 6
9 7 4 1 6 3 5 2 8
5 6 8 2 7 4 1 9 3
3 1 2 8 9 5 7 6 4
1 8 5 3 4 2 6 7 9
7 2 9 6 5 8 4 3 1
6 4 3 7 1 9 8 5 2

Developed Environment: mostly in linux-like env.  This particular repo was last developed in Cygwin-x86_64 env.
 but I kept in the Makefile what would seem to work/link (linux version of LD_FLAGS, the default pkg_config flag didn't work for Cygwin's installed shared dll under /usr/local/bin)
 oh ya, this repo assumes the READER knows how to configure and install (including cmake type project folder) most packages (such as eigen or qqwing).
 For this particular project, the eigen install method was just copying its include headers to be under /usr/local/include (which I only used Eigen/Dense)




