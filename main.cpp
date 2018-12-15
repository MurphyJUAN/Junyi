#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;


void Reverseword(void)//第一題的(a)小題
{
    string word;
    cin>>word;
    reverse(word.begin(),word.end());
    cout<<word<<endl;
}


void ReverseSentence(void)//第一題的(b)小題
{
    string word;
    vector<string> res;
    getline(cin,word);

    string result;

    stringstream input(word);

    while(input>>result)
        res.push_back(result);

    for(int i=0;i<res.size();i++){
        reverse(res[i].begin(),res[i].end());
        cout<<res[i]<<" ";
    }
}

void CountNumber(void)//第二題
{
    int num,count=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        if((i%3==0||i%5==0)&&(i%15!=0)){

        }
        else{
            
            count++;
        }
    }
    cout<<count;
}


int main(){



    ReverseSentence();
    Reverseword();
    CountNumber();



    return 0;
}