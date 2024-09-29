/*
    Name: Ritika Lama
    Course: CS 310
    Professor: Dr. Shahadat
    Purpose: The purpose of this program is to implement Binary Search Algorithms
            using Recursive method.
*/

#include <iostream>
using namespace std;

int binarySearchRecursion(const int nums[], int target, int low, int high){
    
    //return false of low index is greater than high index
    if(low > high){
        return -1;
    }
    else{
        //find the midpoint
        int mid = (low + high)/2;
        //return midpoint if instantly found
        if(nums[mid] == target){
            return mid;
        }
        //if middle point is less than target, set low to midpoint+1 and 
        //use recursion
        else if (nums[mid] < target){
            return binarySearchRecursion(nums, target, mid + 1, high);
        }
        //if middle point is more than target, set high to midpoint-1 and 
        //use recursion
        else{
            return binarySearchRecursion(nums, target, low, mid - 1);
        }
    }
}

int main(){
    //the input array
    int nums[] = {-1, 0, 3, 5, 9, 11, 12};
    //low index
    int low = 0; 
    //the number to be searched for 
    int target = 9; 
    //size of the input array
    int sizeOfArray = sizeof(nums)/sizeof(nums[0]);

    //the output from the binary search
    int output = binarySearchRecursion(nums, target, low, sizeOfArray -1);

    //display the result
    if(output < 0)
    cout << "Target not found" << endl;
    else{
        cout << "The index of target is " << output << "." << endl;
    }

    return 0;

}