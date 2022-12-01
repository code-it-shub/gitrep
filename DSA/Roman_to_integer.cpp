#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int solution(string s) {
        map<char,int> v;
        v.insert(make_pair('I',1));
        v.insert(make_pair('V',5));
        v.insert(make_pair('X',10));
        v.insert(make_pair('L',50));
        v.insert(make_pair('C',100));
        v.insert(make_pair('D',500));
        v.insert(make_pair('M',1000));
        int i=s.length()-2;
        int sum=v[s.back()];
        while(i>=0){
            if (v[s[i]]<v[s[i+1]]){
                sum-=v[s[i]];
                i=i-1;
            }   
            else{
                sum+=v[s[i]];
                i--;
            }
        }
        return sum;
}
int main(){
    string s="V";
    cout << solution(s) << endl;
    return 0;
}