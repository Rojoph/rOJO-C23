#include <iostream>
using namespace std;

int main(){

int N, num, x=1, product=1  ;

cout << "Give a positive number? " ;
cin >> N ;


while (x<=N){

	product = product * x;
	x=x + 1;
}
cout << "The factorial of the number is  ";
cout <<  product ;

return 0;
}

