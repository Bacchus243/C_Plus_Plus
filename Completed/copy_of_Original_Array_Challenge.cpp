#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int ArrayChallenge(int arr[], int arrLength) {
  
  // code goes here  
  sort(arr, arr + arrLength);
  for(int i = 0; i < arrLength; i++) {
    cout << arr[i] << ", ";
  }

  cout << "\n\n\n";
  return arr[0];

}

int main(void) { 
   
  // keep this function call here
  int A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << ArrayChallenge(A, arrLength);
  return 0;
    
}