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
    long long int count=0;
    while(getline(cin, range)){
        if(range.empty()){
            break;
        }
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
//                cout<<"range2="<<range2<<'\n';
            }
            else{
                range1 = token;
                range_taken = true;
//                cout<<"range1="<<range1<<'\n';
            }
            
            if(!range_taken){
                long long int initial = stoll(range1);
                long long int final = stoll(range2);
                v1.push_back(initial);
                v2.push_back(final);
            }
        }
        
    }
    long long int temp1;
    long long int temp2;
    for(int j=v1.size()-1; j>=0; j--)
    for(int i=0; i<v1.size()-1; i++){
        if(v1[i]>v1[i+1]){
            temp1=v1[i];
            temp2=v2[i];
            v1[i]=v1[i+1];
            v2[i]=v2[i+1];
            v1[i+1]=temp1;
            v2[i+1]=temp2;
        }
        else if(v1[i]==v1[i+1]){
            if(v2[i]>v2[i+1]){
                temp2=v2[i];
                v2[i]=v2[i+1];
                v2[i+1]=temp2;
            }
        }    
    }

//    for(int i=0; i<v1.size(); i++){
//        cout<<"v1[i]="<<v1[i]<<'\n';
//        cout<<"v2[i]="<<v2[i]<<'\n';
//    }
    vector<long long int> merged_v1;
    vector<long long int> merged_v2;
    long long int current_start = v1[0];
    long long int current_end = v2[0];

    for(int i=1; i<v1.size(); i++){
        long long int next_start = v1[i];
        long long int next_end = v2[i];
        if(current_end>=next_start){     //if there is an overlap
            if(current_end<next_end){
                current_end = next_end;
            }
        }
        else{
            merged_v1.push_back(current_start);
            merged_v2.push_back(current_end);

            current_start = next_start;
            current_end = next_end;
        }    
    }
    merged_v1.push_back(current_start);
    merged_v2.push_back(current_end);

    for(int i=0; i<merged_v1.size(); i++){
//        cout<<"merged_v1[i]="<<merged_v1[i]<<'\n';
//        cout<<"merged_v2[i]="<<merged_v2[i]<<'\n';
        long long int difference = merged_v2[i]-merged_v1[i];
        count += difference+1;
    }
    cout<<"count="<<count<<'\n';  
    return 0;
}