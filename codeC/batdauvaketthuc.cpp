#include <stdio.h>
int main (){
	int t ;
	scanf("%d",&t) ;
	while(t--){
		int n ;
		scanf("%d",&n) ;
		int cuoi = n % 10;
        while (n > 10)
            n /= 10;
        if (n == cuoi)
            printf("YES\n");
        else
            printf("NO\n"); 
	} 
} 
