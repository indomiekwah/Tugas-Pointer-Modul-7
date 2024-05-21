// program yang menampilkan bil ganjil 1-20 dan alamat memori

#include<iostream>
using namespace std;

int main() {
	for(int i=1;i<=20;i++) {
		if ((i%2)==1) 
		cout<<"Bil: "<<i<<", dengan alamat: "<<&i<<endl;
	}
	return 0;
}
