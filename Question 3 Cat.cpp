#include <iostream>
using namespace std;
//137307 Michael Ndigi
int main(){
	int gross_salary = 10000;
    float net_salary, tax_ded;
	float tax= .25;
	tax_ded = gross_salary*tax;
	net_salary = gross_salary - tax_ded;
	cout<<"The net salary is : " << net_salary <<endl;
	cout<<"The tax payable is : " << tax_ded <<endl;
	
	
	
	
	
	
	return 0;
}
