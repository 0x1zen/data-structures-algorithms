#include <iostream>
#include<vector>
#include<string>
using namespace std;
bool containsPref(string mainString,string subString){
    if(mainString.starts_with(subString)){
        return true;
    }
    return false;
}
int prefixCount(vector<string>& words, string pref) {
    int count=0;
    for(int i=0;i<words.size();i++){
        if(containsPref(words[i],pref)){
            count++;
        }
    }
    return count;
}

int main() {
    vector<string>words={"leetcode","win","loops","success"};
    string pref="code";
    cout<<prefixCount(words,pref);

    return 0;
}