#include <iostream>
#include <string>

using namespace std;


char lower(char ch) {
    if(ch>64 && ch<91) {
        ch=ch+32;
    }
    return ch;
}

bool checkPalindrome(string s)
{	
    int st=0;
    int e=s.size()-1;
    while (st<e) {
        if ( s[st]<48 && s[st]>57 && s[st]<65 && s[st]>90 && s[st]<97 && s[st]>122) {
            st++;
        }
        if ( s[e]<48 && s[e]>57 && s[e]<65 && s[e]>90 && s[e]<97 && s[e]>122) {
            e--;
        }
        if ( lower(s[st]) != lower(s[e]) ) {
            return 0;
        }
        st++;
        e--;
    }
    return 1;
}
int main() {
    string s;
    cout<<"\nEnter a string : ";
    cin>>s;
    if(checkPalindrome(s)) {
        cout<<"\npalindrome";
    }
    else {
        cout<<"\nnot a palindrome";
    }

}

/*

Sapmple input:
noon
3443

Expected output:
Palindrome
Palindrome

*/
