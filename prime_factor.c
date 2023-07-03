#include<stdio.h>
#include<conio.h>
void main()
{
	
	int x,i;
	printf("Enter a number : ");
    scanf("%d",&x);
    for(i=2;i>1;i++)
    {
    	while(x%i==0)
    	{
    		printf("%d ",i);
    		x=x/i;
	}

}
getch();
}

