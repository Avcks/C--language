#include<stdio.h>
int main()
{
	int arr[5];
	for(int i=0; i<=5; i++){
		printf("arr[%d]:", i);
		scanf("%d",&arr[i]);
	}
		if(arr[0]>arr[1]){
			printf("%d is grater at index arr[0].", arr[0]);
		}else if(arr[1]>arr[2]){
			printf("%d is grater at index arr[1].",arr[1]);
		}else if(arr[2]>arr[3]){
			printf("%d is grater at index arr[2].",arr[2]);
		}else if(arr[3]>arr[4]){
			printf("%d is grater at index arr[3].",arr[3]);
		}else if(arr[4]>arr[5]){
			printf("%d is grater at index arr[4].",arr[4]);
		}else{
			printf("%d is grater at index arr[5].",arr[5]);
		}
}

/*
arr[0]:1213
arr[1]:234323
arr[2]:54
arr[3]:4664
arr[4]:53
arr[5]:3443
234323 is grater at index arr[1].
*/