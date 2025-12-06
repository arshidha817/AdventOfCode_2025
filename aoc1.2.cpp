#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int ans=50;
    int count=0;
    string line;
    vector<string> all_lines;

    while(getline(cin, line)){
        all_lines.push_back(line);
    }

    for(string p:all_lines){
        //cout<<p;
        char dirn=p[0];
        int dist=stoi(p.substr(1));
        //cout << dirn<<' '<<dist<<'\n';
        if(dirn=='L'){
            for(int i=0; i<dist; i++){
                ans=ans-1;
                if(ans%100 == 0){
                    count++;
                }
            }
        }
        else{
            for(int i=0; i<dist; i++){
                ans=ans+1;
                if(ans%100 == 0){
                    count++;
                }
            }  
        }
        //cout <<ans<<'\n';
        //cout<<"count="<<count<<'\n';
    }
    cout << count;
    return 0;
}