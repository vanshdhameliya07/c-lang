#include<stdio.h>
main(){
	
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=i-1;k<=4;k++){
			printf("");
		}
	    for(j=5;j>=i;j--)
		{
			
			printf("%d ",j);	
		}
		printf("\n");
	}
	
	
	
	

	
}
