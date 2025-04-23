#include <stdio.h>
int main(){
int a=12, b=13, c=14, d=15;
 if (a>b){
 	if(a>c){
 		if (a>d){printf("a is max");
		 }else {printf("d is max");
		 }
	 }else
	 {if (c>d){printf("c is max");
	 }else{printf("d is max");
	 }
	}	
  }else{
  	if(b>c){
 		if (b>d){printf("a is max");
		 }else {printf("d is max");
		 }
	 }else
	 {if (c>d){printf("c is max");
	 }else{printf("d is max");
	 }
	}	
  }
}