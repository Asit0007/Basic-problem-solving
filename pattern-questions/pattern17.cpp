#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n) {

        int j=1;

        while(j<=n) {
            if (j>=count) {
                cout<<j;
            }
            
            else {
                cout<<" ";
            }
            
            j++;
        }
        count++;
        cout<<"\n";
        i++;
    }
}
