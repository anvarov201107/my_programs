#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"hafta kuni tartib raqamini kiriting--> "<<endl;
	cin >> n;
	switch(n){
		case 1: cout << "dushanba";break;
		case 2: cout << "seshanba";break;
		case 3: cout << "chorshanba";break;
		case 4: cout << "payshanba";break;
		case 5: cout << "juma";break;
		case 6: cout << "shanba";break;
		case 7: cout << "yakshanba";break;
		default: cout << "bunday sondagi hafta kuni yo'q\n";
	}
}
