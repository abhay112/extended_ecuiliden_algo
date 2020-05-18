#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if( b == 0)
		return a;
	return gcd(b,a%b);
}
int x,y,GCD;
int extended_euciliden(int a, int b){
	if(b == 0){
		x = 1;
		y = 0;
		GCD = a;
		return 0;
	}
	extended_euciliden(b,a%b);
	int Cx = y;
	int Cy = x - (a/b)*y;
	cout << Cx <<','<<Cy << endl;
	x = Cx;
	y = Cy;

}
int main(){
	int a = 5; // 18x+30y = 6;
	int b = 10;
	cout << gcd(a,b) << endl;
	extended_euciliden(a,b); 
	cout << x << ',' << y;


}