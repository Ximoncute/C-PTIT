#include <stdio.h>
int main(){
	int t ;
	scanf("%d",&t);
	while (t--){
	int a,b ;
	scanf("%d %d",&a,&b);
	while(b>0){
		int d = a % b;
		a = b ;
		b = d ; 
	} 
	printf("%d\n",a);
	} 
return 0;	
}
