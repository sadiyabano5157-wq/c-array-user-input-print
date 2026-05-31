#include<stdio.h>
int main()
{
	int arr[5];
    
	for(int i=0;i<5;i++)
	{
		
        printf("Eneter a 5 Elimet :%d\n",i+1);
    
		scanf("%d",&arr[i]);
    }
    
     printf("array element are:\n");
     
    for(int i=0;i<5;i++)
    {
    	
    	printf("%d\n",arr[i]);
	}
	return 0;
}
