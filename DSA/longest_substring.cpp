#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int solution(string s){
    set<char> s2;
    int maxi=0,start=0,end=0;
    while(start<s.length()){
        set<char> :: iterator it =s2.find(s[start]);
        if(it==s2.end()){
            if (start-end-1>maxi){
                maxi=start-end+1;
            }
            s2.insert(s[start]);
            start++;
        }
        else{
            s2.erase(s[end]);
            end++;   
        }
    }
    return maxi;
}

int main(){
    string s="pwwkew";
    cout << solution(s) << endl;
    return 0;
}