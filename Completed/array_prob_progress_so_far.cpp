#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string ArrayChallenge(int arr[], int arrLength) {
  string result = "false";
  int targetVal;
  int smallerArray[arrLength - 1];
  int smallArrLength = sizeof(smallerArray) / sizeof(*smallerArray);
  
  // Print the array before sorting
  cout << "The Unsorted Array: ";
  for(int i = 0; i < arrLength-1; i++) {
    smallerArray[i] = arr[i];
    cout << arr[i] << ", ";
  }
  cout << arr[arrLength-1] << "\n\n";


  // sort the array into ascending order
  sort(arr, arr + arrLength);
  cout << "The Sorted Array: ";

  for(int i = 0; i < arrLength-1; i++) {
    smallerArray[i] = arr[i];
    cout << arr[i] << ", ";
  }
  cout << arr[arrLength-1] << "\n\n";

  // save a copy of the largest array element, then copy all other values to a new array
  targetVal = arr[arrLength -1];
  cout << "The largest number in the array: " << targetVal << "\n\n";

  cout << "Number of elements in the smaller Array: " << smallArrLength << "\n\n";
  cout << "My smaller array is: ";
  for(int i = 0; i < smallArrLength - 1; i++) {
    cout << smallerArray[i] << ", ";
  }
  cout << smallerArray[smallArrLength - 1] << "\n\n";
  
  /* Call the recursiveSum function below, passing in the needed arguments
  */

  return result;

}

  /*  Need to build some type of a recursive function to include / exclude values in sum.
      In the case of 4 elements, with two options for each, there are 16 possible sums that
      can potentially equal the target value */

  /*
bool recursiveSum(currSum, index, array, targetValue, matchFound) {
  
  add array[index] to currSum

  if currSum < targetValue
    index++
    call recursiveSum()
    
    if matchFound == true
      return matchFound
    else
      currSum -= array[index]
      index++
      call recursiveSum()
    
  else if currSum > targetValue
    currSum -= array[index]
    return matchFound
  
  else if currSum == targetValue
    matchFound == true
    return matchFound

  return matchFound
}

  */

int main(void) { 
   
  // keep this function call here
  int A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << ArrayChallenge(A, arrLength);
  return 0;
    
}