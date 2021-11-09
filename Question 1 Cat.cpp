#include <iostream>
using namespace std;
//137307 Michael Ndigi
int main(){
	float height, radius, area_cylinder, volume;
	float p = 3.141592;
	cout<<"Please Type the value of height\n";
	cin>>height;
	cout<<"Please Type the value of the radius\n";
	cin>>radius;
	area_cylinder=2*p*radius*height+2*p*radius*height;
	volume=p*radius*radius*height;
	cout<<"Area of a cylinder : " << area_cylinder <<endl;
	cout<<"Volume : " << volume <<endl;
	
	return 0;
}
