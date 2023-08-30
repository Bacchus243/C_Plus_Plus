/*
Array Challenge

Have the function ArrayChallenge(arr) take the array of numbers stored in arr
and return the string true if any combination of numbers in the array 
(excluding the largest number) can be added up to equal the largest number in
the array, otherwise return the string false. For example: if arr contains 
[4, 6, 23, 10, 1, 3] the output should return true because 4 + 6 + 10 + 3 = 23. 
The array will not be empty, will not contain all the same elements, and may 
contain negative numbers.



Examples:

Input: {5,7,16,1,2} 
Output: false


Input: {3,5,-1,8,12} 
Output: true


*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int ArrayChallenge(int arr[], int arrLength) {
  
  // code goes here

  sort(arr, arr + arrLength);
  for(int i = 0; i < arrLength; i++) {
    cout << arr[i] << "\n\n";
  }

  return arr[0];

}

int main(void) { 
   
  // keep this function call here
  int A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << ArrayChallenge(A, arrLength);
  return 0;
    
}