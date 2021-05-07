## 第十一周正課

```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void *p1,const void *p2)
{
    int d1=*(int*)p1;
    int d2=*(int*)p2;
    if(d1 >  d2)return 1;
    if(d1 == d2)return 0;
    if(d1 <  d2)return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

```
![week11-1](https://user-images.githubusercontent.com/71545492/117387417-78c3ae80-af1b-11eb-9caa-ffffc6a6d881.png)


```c
#include <stdio.h>
#include <stdlib.h>//qsort()
#include <string.h>//strcmp()
char line[2000][80];
char others[80];//
int compare(const void *p1,const void *p2)
{
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;
	
	int result = strcmp(s1,s2);
	if(result >  0)return  1;
	if(result == 0)return  0;
	if(result <  0)return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
		gets(others);
	}
	
	qsort(line,n,80,compare);
	
	printf("%s",line[0]);
	int ans=1;
	for(int i=0;i<n-1;i++)
	{
		if(strcmp(line[i],line[i+1])==0)
		{
			ans++;
		}
		else
		{
			printf(" %d\n",ans);
			printf("%s ",line[i+1]);
			ans=1;
		}
	}
	printf("%d\n",ans);
}
```
![week11-2](https://user-images.githubusercontent.com/71545492/117387424-7bbe9f00-af1b-11eb-9aec-899774c62446.png)