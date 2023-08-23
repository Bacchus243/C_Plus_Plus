#include <iostream>
#include <string>

using namespace std;


string StringChallenge(string str1, string str2) {

    int str1Length = str1.length();
    cout << "String 1 Length: " << str1Length << "\n";

    int str2Length = str2.length();
    cout << "String 2 Length: " << str2Length << "\n";


    string str1Copy = str1;
    string str2Copy = str2;
    string str3 = "end";

     
    cout << "String 1 Copy: " << str1Copy << "\n";
    cout << "String 2 Copy: " << str2Copy << "\n";
    cout << "String 3:" << str3.empty() << endl;

    //str1.append(str3[0]);
    //cout << "Appended String 1: " << str1 << "\n\n";


    str1.erase(0,1);
    cout << str1 << endl;
    cout << str1.empty() << endl;




    return str1;

}



int main() 
{
    string str1 = "cdore";
    string str2 = "coder";

    StringChallenge(str1, str2);
}







// Option 1 Thoughts:

  // For loop i = 0 up to length of str2 required to move through each char in str2

    // check to see if str2 is empty

    // If empty, break out of this and return "TRUE" to calling function

    // IF str2 NOT empty
        
        //Take first char of str2, then look for its presence in str1

        // Nested While loop with a matchFound boolean && j counter check to move 
          // through each char in str1 while checking for match 
          // if found, remove that first char from str2 with erase() function && remove 
          // that first found occurence of the same char in str1

          // if char NOT found, advance to next letter in str2

