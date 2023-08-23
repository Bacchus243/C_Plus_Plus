#include <iostream>
#include <string>

using namespace std;

string StringChallenge(string str1, string str2) {


// Option 2 Thoughts

  /*  iterate through each char in string 2, look for a match in string 1
      if a match is found, go ahead and remove that occurence from string 1
      and then append that matched letter to a new string3.

      After the for loop, if string 2 matches string 3, return true, else return false */
  string str3 = "";
  string tempChar = "";
  string containsLetters = "false";
  int result;

  bool matchFound = false;

  for(int i = 0; i < str2.length(); i++){
    //cout << "--- Round " << i << " through the For loop ---" << "\n";
    //cout << "Looking for Letter: " << str2[i] << "\n";
    int j = 0;  
    matchFound = false;
    
    //cout << "String 3 before While Loop: " << str3 << "\n";
    //cout << "String 1 Before Match Found: " << str1 << "\n\n";
    while(!matchFound && j < str1.length()){
      
      //cout << "Trip " << j << " through the while loop\n";
      
      if(str1[j] == str2[i]){
        tempChar = str1[j];
        //cout << "Match Found: " << tempChar << "\n";
        str3.append(tempChar);
        tempChar = "";
        str1.erase(j,1);
        matchFound = true;
        //cout << "String 1 After Letter Removed: " << str1 << "\n";
        //cout << "String 3 After Appending Found Letter: " << str3 << "\n\n\n";
      }
      else {
        //cout << "Match Not Found\n\n";
      }
      j++;
    }
    j = 0;
  }

  //cout << "String 3 After Checking Everything: " << str3 << "\n";


  result = str2.compare(str3);
  
  if(result == 0) {
    containsLetters = "true";
  }

  return containsLetters;

}

int main(void) { 
   
  // keep this function call here
  cout << StringChallenge(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}