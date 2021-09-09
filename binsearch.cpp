using namespace std;
#include <iostream>

//--------------------------------------------
// CS311 HW2P1 Binary Search
// Name: Olaf Zielinski
// Compiler: g++
// --------------------------------------------

// x is what we are looking for in L; first and last are slot numbers 
int binarySearch(int L[], int x, int first, int last) 
{
  //if the last is behind the first, 
  //the value must not have been found.
  //so return -1.

  if(first > last)
    return -1;

  //search recursively

  int middle = (first + last)/2;
  cout << "comparing against an element in slot " << middle << endl;

  if(L[middle] == x)
    return middle;

  //if the value is higher, search on the right.

  else if(x > L[middle])
    return binarySearch(L, x, middle+1, last);

  //otherwise, search on the left.
  else
    return binarySearch(L, x, first, middle-1);
}


int main()
{ int A[10];
  int e;  // to look for this

  // fixed elements for A
  A[0] = 1; A[1]= 3; A[2]=5; A[3]= 7; A[4]=9; A[5]=11; A[6]=13;
  A[7] =15; A[8]= 17; A[9]= 19;

  cout << "What do you want to look for? ";
  cin >> e;

  // Call binarySearch here to look for e in A
  int respos = binarySearch( A, e, 0, 9 );

  if (respos == -1) cout << "Element not found" << endl; 
  else cout << "Found it in position " << respos+1 << endl;

}
