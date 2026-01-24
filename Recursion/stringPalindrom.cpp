#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(int i , string &s){

    if(i >= s.size()/2) return true;// if control goes over here means all previous string are matched so that means this string is a palindrom

   if(s[i] != s[s.size() - i - 1]){
    return false;
   }

   return isPalindrom(i + 1, s);
}

int main(){
    string name = "mdam";
    cout << isPalindrom(0,name);
    return 0;
}