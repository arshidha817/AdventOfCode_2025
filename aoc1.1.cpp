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
            ans=ans-(dist);
            if(ans%100 == 0)
                count++;
        }
        else{
            ans=ans+dist;
            if(ans%100==0)
                count++;
        }
        //cout <<ans<<'\n';
    }
    cout << count;
    return 0;
}