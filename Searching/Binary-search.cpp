//Binary search only works on sorted arrays

#include <iostream>
using namespace std;

int bSearch(int array[], int size, int key) {
    
    //Initializing 2 pointers for our 2 pointer aproach
    int start =0;
    int end =size-1;
    //Initializing the mid point
    int mid =start+(end-start)/2;
    while (start<=end) {
        if( key == array[mid] ) {
            return mid;
        }
        //ignoring the left side of midpoint
        if( key>array[mid] ) {
            start=mid+1;
        }
        //ignoring the right side of the midpoint
        if ( key<array[mid] ) {
            end = mid-1;
        }
        //reinitializing the midpoint
        mid =start+(end-start)/2;

    }
    return -1;


}

int main() {
    //Initializing the array and calling the search function
    int even[] = {2,4,6,8,10};
    int key, size=5;
    cout<<"\n enter a key to search: ";
    cin>>key;
    cout<<"\n the position of "<<key<<" is "<<bSearch(even, size, key);
    cout<<endl;
    
}
