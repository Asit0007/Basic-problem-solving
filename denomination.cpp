#include <iostream>
using namespace std;

int main() {
    int n,ch=0;
    cout<<"\nenter the amount : ";
    cin>>n;
    while(n>0) {
        int count=0;
        switch(ch) {
            case 0: 
                count=n/100;
                n=n%100;
                ch++;
                if(count>0) {
                    cout<<count<<" no of 100$ notes, "; 
                }
                break;
            case 1:
                count=n/50;
                n=n%50;
                ch++;
                if (count>0) {
                    cout<<count<<" no of 50$ notes, ";
                }
                break;
            case 2:
                count=n/20;
                n=n%20;
                ch++;
                if (count>0) {
                    cout<<count<<" no of 20$ notes, ";
                }
                break;
            case 3:
                count=n/1;
                n=n%1;
                ch++;
                if (count>0) {
                    cout<<count<<" no of 1$ notes ";
                }
                break;
        }

    }
}