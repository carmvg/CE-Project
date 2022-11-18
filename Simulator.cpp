#include <bitset>
#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

const int DIGITS = 32;

//Preforms the restoring division algorithm.
//Preconditions: Integers Dividened/Divisor 
string Restoring(int Dividend, int Divisor){

  return 0;
}

string NonRestoring(int Dividend, int Divisor){

  return 0;
}

int main(){
  string Dividend;
  string Divisor;
  bool finished = false;

  //First to be inputted is Dividend, followed by Divisor.

  /*INVARIANT: 
    {P} while B do C {!B && P}
    Dividened/Divisor Produce Divised.
  */

  while (!finished){
    cin >> Dividend;
    cin >> Divisor;
    cout << Dividend << endl << Divisor << endl;
    
  }
  return 0;
}