#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	char b='A';
	char &c=b;
	int *x=&a;
	char*y=&b;
	int **z=&x;
	
	cout<<"Address a ="<<" "<<&a<<" "<<"a = "<<a<<"\n";
	cout<<"Address b ="<<" "<<(void *)&b<<" "<<"b = "<<b<<"\n";
	cout<<"Address c ="<<" "<<(void *)&c<<" "<<"c = "<<c<<"\n";
	cout<<"Address x ="<<" "<<&x<<" "<<"x = "<<x<<"\n";
	cout<<"Address y ="<<" "<<(void *)&y<<" "<<"y ="<<y<<"\n";
	cout<<"Address z ="<<" "<<&z<<" "<<"z ="<<z<<"\n";
	
    c='F';
    cout<<"\na = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n";
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<(void*)y<<"\n";
    cout<<"z = "<<z<<"\n";
	
	*y='W';
	cout<<"\na = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n";
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<(void*)y<<"\n";
    cout<<"z = "<<z<<"\n";
    
    *x=6;
    cout<<"\na = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n";
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<(void*)y<<"\n";
    cout<<"z = "<<z<<"\n";
    
    **z=7;
	cout<<"\na = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n";
    cout<<"x = "<<x<<"\n";
    cout<<"y = "<<(void*)y<<"\n";
    cout<<"z = "<<z<<"\n";
	
	return 0;
}
