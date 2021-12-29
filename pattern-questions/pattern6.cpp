#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;
    int i=1;
    char c;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            c='A'+(i+j-2);
            cout<<(c)<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}