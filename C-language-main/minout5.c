#include <stdio.h>
int main(){
int a=12, b=13, c=14, d=15, e=16;
 if (a<b){
 	
 	if(a<c){
 		if (a<d){
 			if (a<e){printf("a is min");
			 }else{printf("e is min");
			 }
		 }else {if (d<e){printf("d is min");
		 }else {printf("e is min");
		 }
		}
		
		
	 }else
	 
	 {if (c<d)
	 {if (c<e)
	 {printf("c is min");
	 }else {printf("e is min");}
	 }else{
	 if (b<c){
	 if (b<d){
	 	if(b<e){printf("b is min");
		 }else{
		 	printf("e is min");
		 }
	 }else{if (d<e){printf("d is min");
	               }else {printf("e is min");}
	      }
	 }else{if (c<d){
	 if (c<e){printf("c is min");
	 }else {printf("e is min");}
	 }else {if (d<e){printf("d is min");
	 }else{printf("e is min");}}
	 }
	 }
	 }
	}else{
  	if(b<c){
 		if (b<d){
		 }else {
		 }
	 }else
	 {if (c<d){
	 }else{
	 }
	}	
  }
}