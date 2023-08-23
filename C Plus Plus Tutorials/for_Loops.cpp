#include <iostream>


using namespace std;



int main()
{
    int nums[] = {1, 2, 5, 7, 3};
    int arraySize = sizeof(nums) / sizeof(int);

    for(int i = 0; i < arraySize; i++) {
        cout << "Current Array Value at Index " << i << ": " << nums[i] << endl;
    }

    return 0;
}