#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	float a,b;
	double media;
	cin>>a>>b;
	// cout<<a*0.35<<endl;
	// cout<<b*0.75<<endl;
	media = ((a*0.35)+(b*0.75))/1.1;
	if(media > 10)
		cout<<"MEDIA = 10\n";
	else	
		printf("MEDIA = %.5f\n",media);
	return 0;
}