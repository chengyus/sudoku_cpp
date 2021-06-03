#include "Eigen/Dense"
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include "qqwing.hpp"

using namespace qqwing;
using namespace Eigen;
using namespace std;

int main()
{
  Matrix<int, 9, 9, RowMajor> m;
  SudokuBoard::PrintStyle printStyle = SudokuBoard::ONE_LINE;
  bool printPuzzle = true;

  SudokuBoard* ss = new SudokuBoard();

  ss->setPrintStyle(printStyle);
  
  ss->generatePuzzle();
  const int *puzzle = ss->getPuzzle();

  for(int i=0; i < 81; i++){
    m(i/9, i%9) = puzzle[i];
  }

  cout << m << endl;

  bool solved_bool = ss->solve();
  cout << solved_bool << endl;

  const int *solved = ss->getSolution();

  for(int i=0; i < 81; i++){
    m(i/9, i%9) = solved[i];
  }

  cout << "Solved:" << endl << m << endl;

  delete ss;
  return 0;
}
