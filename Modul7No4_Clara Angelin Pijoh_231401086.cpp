// program kalkulator dengan void +,-,/,* yang memiliki parameter berupa pointer
#include<iostream>
using namespace std;

void aritmatika(int *a, int *b){
	cout<<"Hasil +: "<<(*a+*b)<<endl;
	cout<<"Hasil -: "<<(*a-*b)<<endl;
	cout<<"Hasil *: "<<(*a)*(*b)<<endl;
	cout<<"Hasil /: "<<(*a)/(*b)<<endl;	
}


int main() {
	int x, y;
	cout<<"Input bil 1: ";
	cin>>x;
	cout<<"Input bil 2: ";
	cin>>y;
	aritmatika(&x,&y);
	return 0;
}
