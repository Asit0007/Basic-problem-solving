#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start=0;
    int end= size-1 ;
    while(start<end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int size) {
    cout<<"\n";
    for(int i=0; i<size; i++) {
        
        cout<<arr[i]<<" ";
    }

}

int main() {
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {9,7,3,5,0};
    
    //printing orignal array
    printArr(arr1, 6);
    //reversing the array
    reverse(arr1, 6);
    //printing reversed array
    printArr(arr1, 6);
    
    //printing orignal array
    printArr(arr2, 5);
    //reversing the array
    reverse(arr2, 5);
    //printing reversed array
    printArr(arr2, 5);
}

/*

Sample input:
[1,2,3,4,5,6]
[9,7,3,5,0]

expected output:
1 2 3 4 5 6 
6 5 4 3 2 1
9 7 3 5 0
0 5 3 7 9

*/
