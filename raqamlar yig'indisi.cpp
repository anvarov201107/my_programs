#include <iostream>
#include <string>
using namespace std;
int main(){
	string n;
	cin>>n;
	int m=0;
	for(char c:n){
	m+=(c-'0');
		}
	cout<<m;
	main();
}