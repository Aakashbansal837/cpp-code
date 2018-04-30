#include<stdio.h>
void check(char *str,int arr[])
{
//	int size=(sizeof(arr)/sizeof(int));
//	printf("%d",size);
int i;
for(i=0;str[i]!='\0';i++)
{
	arr[str[i]-97]++;
}
}
void main()
{
	char str[100];
	int i;
	int arr[26]={0};
	gets(str);
	check(str,arr);
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		printf(" tha char %c is %d\n",i+97,arr[i]);
    }

}
