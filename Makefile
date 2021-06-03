CPP=g++
CPP_FLAGS=-I/usr/local/include
#LD_FLAGS=-L/usr/local/lib -lqqwing  #this is supposingly under pure linux env.
LD_FLAGS=-L/usr/local/bin -lcygqqwing-2 # I needed this under cygwin (under Win10 for lazy/relax quick deveopment env), not easily found, StackOverflow Article 39136010, this assumes you installed QQWing lib under Cygwin env as well.

all: sudoku

sudoku: sudoku.o
	${CPP} ${LD_FLAGS} sudoku.o -o sudoku

sudoku.o: sudoku.cpp
	${CPP} ${CPP_FLAGS} -c sudoku.cpp -o sudoku.o

clean:
	-rm sudoku.exe sudoku.o
