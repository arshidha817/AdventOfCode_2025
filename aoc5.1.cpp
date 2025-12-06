#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int main(){
    string range;
    string input;
    vector<long long int> v1;
    vector<long long int> v2;
    while(getline(cin, range) && !range.empty()){
//        cout <<"range="<<range<<'\n';
        stringstream r(range);
        char del = '-';
        string token;
        bool range_taken = false;
        string range1;
        string range2;
        while(getline(r, token, del)){
            if(range_taken){
                range2 = token;
                range_taken = false;
                cout<<"range2="<<range2<<'\n';
            }
            else{
                range1 = token;
                range_taken = true;
                cout<<"range1="<<range1<<'\n';
            }
            
            if(!range_taken){
                long long int initial = stoll(range1);
                long long int final = stoll(range2);
                v1.push_back(initial);
                v2.push_back(final);
            }
        }
    }
    int count=0;
    while(getline(cin, input)){
        cout <<"input="<<input<<'\n';
        long long int ingredient = stoll(input);
        for(int i=0; i<v1.size(); i++){
            if(ingredient>=v1[i] && ingredient<=v2[i]){
                count++;
cout<<"count="<<count<<'\n';
                break;
            }
        }
cout<<"ans="<<count<<'\n';
    }
    return 0;
}