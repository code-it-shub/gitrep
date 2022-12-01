#include<iostream>
#include<algorithm>
using namespace std;
bool check_palindrom(string &s2){
    int start=0;int end=s2.length()-1;
        while(start<end){
            if(s2[start]!=s2[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
}

bool solution(string &s){
    string s2="";
    for(int i=0;i<s.length();i++){
        if((s[i]>=65 && s[i]<=89) || (s[i]>=97 && s[i]<=122)){
            s2.push_back(s[i]);
        }
    }
    return check_palindrom(s2);
}
int main(){
    string s="abcddcba";
    cout << solution(s) << endl;
    return 0;
}