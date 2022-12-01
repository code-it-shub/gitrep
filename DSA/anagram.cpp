#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool solution(string &s1, string &s2){
    if (s1.length()!=s2.length()){
        return false;
    }
    else{
        vector<int> count(256,0);
        for (int i=0;i<s1.length();i++){
            count[s1[i]]++;
            count[s2[i]]--;
        }
        for (int i=0;i<256;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
    
}

int main(){
    string s1="tensil",s2="listen";
    cout << solution(s1,s2) << endl;
    return 0;
}