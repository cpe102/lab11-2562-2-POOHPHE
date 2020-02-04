#include<iostream>

using namespace std;

//Write prototype of function fibonacci() here
unsigned long long int fibonacci(unsigned long long int a);
int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}


//Write definition of function fibonacci() here
/*
??? fibonacci(???){
  
}*/
unsigned long long int fibonacci(unsigned long long int a){
	if(a==0){
		return 0;
	}else if(a==1){
		return 1;
	}else{
		return fibonacci(a-1)+fibonacci(a-2);
	}
	
}



