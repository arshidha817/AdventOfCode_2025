#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

int num_digits(long long int number){
    int digits=0;
    while(number){
        number /= 10;
        digits ++;
    }
    return(digits);
}

int main(){
    string line;
    getline(cin, line);
    long long int ans=0;

    stringstream ss(line);
    string t;
    char del1 = ',';
    char del2 = '-';

    while(getline(ss, t, del1)){
//cout << t <<'\n';        
        string TT;
        stringstream SS(t);
        long long int range1 =0;
        long long int range2 =0;
        vector<string> r ;
        while(getline(SS, TT, del2)){
//cout << TT <<'p'<<'\n';
                if(range1 == 0){
                    range1=stoll(TT);
                    continue;
                }
                else
                    range2=stoll(TT);
//cout <<"range1"<<range1<<'\n';
//cout <<"range2"<<range2<<'\n';
            for(long long int i=range1; i<=range2; i++){

            string T= to_string(i);
            
            int digits = T.length(); 
                for(int d=1; d<=digits/2; d++){
                    if(digits%d != 0)
                        continue;
                    else{
                        string TT = T.substr(0, d);
                        int k = digits/d;
                        string rebuilt;
//cout <<"k="<<k<<'\n';
                        for(int j=1; j<=k; j++){
                            rebuilt += TT;
//cout <<"j="<<j<<'\n';
//cout << "rebuilt"<<rebuilt<<'\n';
                        }
                        if(rebuilt==T){
                            ans += i;
                            break;
                        }
                    }   
                }
            }
        }        
    }       
    cout << ans;
    return 0;
}