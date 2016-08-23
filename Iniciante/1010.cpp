#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	float a,b,c,valor=0;
	cin>>a>>b>>c;
	valor += b*c;
	cin>>a>>b>>c;
	valor += b*c;
	printf("VALOR A PAGAR: R$ %.2f\n",valor);
	return 0;
}