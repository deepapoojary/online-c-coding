#include <stdio.h>

int checkArmstrong(int num){
	int tempNumber,rem,sum;
	tempNumber=num;

	sum=0;
	while(tempNumber!=0)
	{
		rem=tempNumber%10;
		sum=sum + (rem*rem*rem);
		tempNumber/=10;
	}  
  if(sum==num)  
      return 1;
  else
      return 0;
}
void main()
{
	int i, n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("All Armstrong numbers from 1 to %d:\n",n);
	for(i=1;i<=n;i++)
	{
		if(checkArmstrong(i))
			printf("%d  ",i);
	}
	printf("\n");
}
