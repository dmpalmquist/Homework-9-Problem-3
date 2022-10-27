#include <iostream>
#include <iomanip>

using namespace std;

void printmatrix(char mymat[][5], int Num_rows, int Num_cols);

int main() {
  char tandf[6][5] = {{'T', 'F', 'T', 'T', 'T'},
                      {'T', 'T', 'T', 'T', 'T'},
                      {'T', 'T', 'F', 'F', 'T'},
                      {'F', 'T', 'F', 'F', 'F'},
                      {'F', 'F', 'F', 'F', 'F'},
                      {'T', 'T', 'F', 'T', 'F'}};

  printmatrix(tandf, 6, 5);
  
}

void printmatrix(char mymat[][5], int Num_rows, int Num_cols){
  for (int r = 0; r < Num_rows; r++){
    for (int c = 0; c < Num_cols; c++){
      cout << setw(8) << mymat[r][c];
    }
  cout << endl;
  }
}