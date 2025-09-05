#include <string>
#include <iostream>
using namespace std;
 
bool isPalindrome (string str){
    int n = str.length();
    for (int i = 0; i < n/2; i++){
        if (str[i] != str[n - i - 1]){
            return false;
        }
    }
    return true;
}
 
string biggestPalindrome(string str){
    string strL, strR;
    int l = 0, r = str.length() - 1;
 
    while(l <= r){
        if(str[l] == str[r] && isPalindrome(str.substr(l, r-l+1))){
            strL = str.substr(l, r-l+1);
            break;
        }
        r--;
    }
 
    l = 0, r = str.length() - 1;
 
    while(l <= r){
        if(str[l] == str[r] && isPalindrome(str.substr(l, r-l+1))){
            strR = str.substr(l, r-l+1);
            break;
        }
        l++;
    }
 
    if (strR.length() > strL.length()){
        return strR;
    }
    return strL;
}
 
int main (){
 
    int n;
 
    cin >> n;
 
    for(int k = 0; k < n; k++){
 
        string str, substring, finalString;
 
        cin >> str;
 
        int l = 0, r = str.length() - 1;
 
        while (l < r && str[l] == str[r]){
 
            finalString.insert(l, 1, str[l]);
            finalString.insert((l+1), 1, str[r]);
            l++;
            r--;
        }
 
        if (l == r) finalString.insert(l, 1, str[l]);
 
        if (l < r){
            substring = str.substr(l, r-l+1);
 
            substring = biggestPalindrome(substring);
            finalString.insert(l, substring);
        }
 
        cout << finalString << endl;
 
        finalString.clear();
    }
 
    return 0;
}