#include <stdio.h>
int main()
{
	int n,a[10],ans=1;
	scanf("%d",&n);
	printf("Enter the number of values to be processed: ");
	for(int i=0;i<n;i++)
	{
		printf("Enter a value: ");
		scanf("%d",&a[i]);
		ans*=a[i];
	}
	printf("Product of the %d values is %d",n,ans);

}
