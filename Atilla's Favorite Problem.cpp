#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

int t, n;
cin>>t;
char mc;

while(t--){
	cin>>n;
	string s;
	cin>>s;

    sort(s.begin(), s.end());

    int max = s[n-1]-'a';

    cout<<max+1<<endl;

}
}
