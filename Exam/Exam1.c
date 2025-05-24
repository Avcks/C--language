#include<stdio.h>
int main()
{
	char ch;
	printf("Enter Your Character: ");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a': 
		printf("Your character is Vowel.");
		break;
	case 'e': 
		printf("Your character is Vowel.");
		break;
	case 'i': 
	    printf("Your character is Vowel.");
	    break;
	case 'o': 
		printf("Your character is Vowel.");
		break;
	case 'u': 
		printf("Your character is Vowel.");
		break;
	case 'A': 
		printf("Your character is Vowel.");
		break;
	case 'E': 
		printf("Your character is Vowel.");
		break;
	case 'I': 
	    printf("Your character is Vowel.");
	    break;
	case 'O': 
		printf("Your character is Vowel.");
		break;
	case 'U': 
		printf("Your character is Vowel.");
		break;
	default:   
		printf("Your character is consonant.");
		break;
	}
}

/*
Enter Your Character: A
Your character is Vowel.
Enter Your Character: a
Your character is Vowel.
Enter Your Character: s
Your character is consonant.
Enter Your Character: S
Your character is consonant.
*/
