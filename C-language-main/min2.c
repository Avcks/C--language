#include <stdio.h>
int main(){
int a=12, b=13, c=14;
 if (a<b){
 	if(a<c){printf("a is small");
	 }else
	 {
	 printf("c is small");
	 }
 }else 
    if(b<c){printf("b is small");
   }else 
   {printf("c is smallest");
 }
}