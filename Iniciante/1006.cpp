#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	double a,b,c,media;
	cin>>a>>b>>c;
	media = ((a*0.2)+(b*0.3)+(c*0.5))/1.0;
	printf("MEDIA = %.1f\n",media);
	return 0;
}