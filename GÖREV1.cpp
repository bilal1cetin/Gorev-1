#include <iostream>
using namespace std;

int main(){
	float G = 9.80665;
	#define MET(g,t) 0.5*g*t*t;
	float T;
	cout << "zamaný giriniz: ";
	cin >> T;
	
	cout << MET(G,T);
	
	
	return 0;
}



