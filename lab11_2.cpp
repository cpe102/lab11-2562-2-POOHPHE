#include<iostream>

using namespace std;

//Write function prototype here
long long gcd(long long a,long long b);
int main(){
	cout << gcd(25,15) << "\n";
	cout << gcd(144,60) << "\n";
	cout << gcd(60,144) << "\n";
	cout << gcd(1,69) << "\n";
	cout << gcd(17,19) << "\n";
	cout << gcd(51,255) << "\n";
	
	return 0;
}

//Write function definition here
/*
??? gcd(???){

}
*/

long long gcd(long long a,long long b){
	if(a%b==0){
		return b;
	}else{
		return gcd(b,a%b);
	}
}
