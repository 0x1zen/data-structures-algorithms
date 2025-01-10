// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<string>
using namespace std;
bool found(string a,string b){
    unordered_map<char,int>freq;
    for(char c:a){
        freq[c]++;
    }
    for(char c:b){
        if(freq[c]<=0){
            return false;
        }
        freq[c]--;
      }
    return true;
}
vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    vector<string>ans;
    for(int i=0;i<words1.size();i++){
        int foundCount=0;
        for(int j=0;j<words2.size();j++){
            if(found(words1[i],words2[j])){
                foundCount++;
            }
        }
        if(foundCount==words2.size()){
            ans.push_back(words1[i]);
        }
    }
    return ans;
}
int main() {
    vector<string>words1={"amazon","apple","facebook","google","leetcode"};
    vector<string>words2={"l","e"};
    vector<string>ans=wordSubsets(words1,words2);
    for(string s:ans){
        cout<<s<<" ";
    }
    return 0;
}