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
        string T;
        stringstream SS(t);
        vector<long long int> range;
        
        while(getline(SS, T, del2)){
//cout << T <<'p'<<'\n';             
            long long int TT = stoll(T);
//cout << TT << 'k' << '\n';
            range.push_back(TT);
        }
//cout<<"range[1]="<<range[1];
        for(long long int j=range[0]; j<=range[1]; j++){
            int digits = num_digits(j);
//cout <<"j="<<j<<'\n';
//cout <<"digits="<<digits<<'\n';
            //int divisor1 = pow(10, digits);
            if(digits%2 == 0){
                digits = digits/2;
                long long int divisor = pow(10, digits);
//cout <<"divisor="<<divisor<<'\n';               
                if( j%divisor == j/divisor)
                    ans += j;
//cout<<"ans="<<ans<<'\n';
            }
        }
    }
    cout << ans;
    return 0;
}