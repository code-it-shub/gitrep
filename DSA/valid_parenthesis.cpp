#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

bool solution(string &s){
    stack<char> c;
    for(int i=0;i<s.size();i++){
        if(!c.empty()){
            if((c.top()=='(' && s[i]==')') || (c.top()=='{' && s[i]=='}') || (c.top()=='[' && s[i]==']')){
                    c.pop();
                }
                else{
                    c.push(s[i]) ;
                    }          
                }

        }
        return c.empty();
    }

int main(){
    string s= "(())";
    cout << solution(s) << endl;
    return 0;
}