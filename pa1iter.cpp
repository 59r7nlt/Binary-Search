/*
    Name: Ritika Lama
    Course: CS 310
    Professor: Dr. Shahadat
    Purpose: The purpose of this program is to implement Binary Search Algorithms
            using Iteration method.
*/
#include <iostream>
using namespace std;

int binarySearchIteration(const int nums[], int target, int low, int high) {
    //initialize result to -1
    int result = -1;
    //iterate through the array until there is something to search for 
    while (low <= high) {
        //find the midpoint
        int mid = (low + high) / 2;
        
        //store the mid index in result if its value equals target
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1; // Continue searching in the right half
        } 
        //search in the left if less than target
        else if (nums[mid] < target) {
            high = mid - 1;
        } 
        //search in right if element is greater than target
        else {
            low = mid + 1;
        }
    }
    
    //return -1 if not found
    return result;
}

int main() {
    // The input array
    int nums[] = {12, 11, 9, 7, 7, 6, 5, 4, 0, -1, -2};
    //low index 
    int low = 0;
    // The number to be searched for
    int target = 7; 
    // Size of the input array
    int sizeOfArray = sizeof(nums) / sizeof(nums[0]);

    // The output from the binary search
    int output = binarySearchIteration(nums, target, low, sizeOfArray - 1);

    // Display the result
    if (output < 0)
        cout << "Target not found" << endl;
    else
        cout << "The index of target is " << output << "." << endl;

    return 0;
}
