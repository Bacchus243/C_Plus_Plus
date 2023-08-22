#include <iostream>


using namespace std;



int main()
{

    int age = 19;
    int *pAge = &age;   // the pointer variable for the 'age' variable

    double gpa = 2.7;
    double *pGpa = &gpa;    // the pointer variable for the 'gpa' variable
    
    string name = "Mike";
    string *pName = &name;  // the pointer variable for the 'name' variable


    cout << &age << endl ;  /* the '&age' shows us the pointer (to the memory 
                               address) for the 'age' variable */
    
    cout << "\nAge: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << "\n\n\n";

    cout << "\nAge: " << pAge << endl;              // this section shows the same 
    cout << "Gpa: " << pGpa << endl;                // as above, only this time it
    cout << "Name: " << pName << "\n\n\n";          // is using pointer variables


    cout << *pAge << endl;      // This 'de-references' the age pointer 'pAge'
    cout << pAge << endl;
    cout << *&gpa;


    return 0;
}