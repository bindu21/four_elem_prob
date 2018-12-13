#include <stdio.h>
#include<stdlib.h>
int call_func(int arr_size,int value,int arr[100])
{
    int i=0,j=0,k=0,l=0;
    int choice=0;
    for(i=0;i<arr_size-3;i++)
    {
        for(j=i+1;j<arr_size-2;j++)
        {
            for(k=j+1;k<arr_size-1;k++)
            {
                for(l=k+1;l<arr_size;l++)
                {
                    if((arr[i]+arr[j]+arr[k]+arr[l]) == value)
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main() {
	int test_case = 0;
	int arr_size = 0;
	int arr[100];
	memset(arr,0,100);
	int value = 0;
	int output = 0;
	int i=0,j=0,k=0;
	scanf("%d",&test_case);
	for(i=0;i<test_case;i++)
	{
	    scanf("%d",&arr_size);
	    for(j=0;j<arr_size;j++)
	    scanf("%d",&arr[j]);
	    scanf("%d",&value);
	    output = call_func(arr_size,value,arr);
	    printf("%d",output);
	    printf("\n");
	}
	return 0;
}