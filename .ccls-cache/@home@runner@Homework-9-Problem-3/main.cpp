#include <iostream>
#include <iomanip>

using namespace std;

void printmatrix(char mymat[][5], int Num_rows, int Num_cols);
int *getgrade(char mymat[][5], int Num_tests);

int main() {
  char tandf[6][5] = {{'T', 'F', 'T', 'T', 'T'},
                      {'T', 'T', 'T', 'T', 'T'},
                      {'T', 'T', 'F', 'F', 'T'},
                      {'F', 'T', 'F', 'F', 'F'},
                      {'F', 'F', 'F', 'F', 'F'},
                      {'T', 'T', 'F', 'T', 'F'}};

  //printmatrix(tandf, 6, 5);

  int *marks = getgrade(tandf, 6);
  for (int i = 0; )
  
}

void printmatrix(char mymat[][5], int Num_rows, int Num_cols){
  for (int r = 0; r < Num_rows; r++){
    for (int c = 0; c < Num_cols; c++){
      cout << setw(8) << mymat[r][c];
    }
  cout << endl;
  }
}

int *getgrade(char mymat[][5], int Num_tests){
  const char answers[5] = {'T', 'T', 'F', 'F', 'T'};
  int *marks = new int[Num_tests]; 
  const int mark = 5;

  for (int r = 0; r < Num_tests; r++){
    for (int c = 0; c < 5; c++){
      if (mymat[r][c] == answers[c])
        marks[c] += mark;
    }
  }

  return marks;
  
    
  
}