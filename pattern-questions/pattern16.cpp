#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    int count=n;

    while(i<=n) {

        int j=1;
        char c='*';
        

        while(j<=n) {
            if (j>=count) {
                cout<<i;
            }
            
            else {
                cout<<" ";
            }
            
            j++;
        }
        count--;
        cout<<"\n";
        i++;
    }
}
