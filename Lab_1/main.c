#include <stdio.h>

//Program 1 Function
void SizeOfVariables(void) {
	char c;
	short s;
	int i;
	unsigned int ui;
	unsigned long int ul;
	float f;
	double d;
	long double ld;
	void *ptr;

	printf("Size of char: %d bytes\n", sizeof(c));
	printf("Size of short: %d bytes\n", sizeof(s));
	printf("Size of int : %d bytes\n", sizeof(i));
	printf("Size of unsigned int: %d byte\n", sizeof(ui));
	printf("Size of unsigned long int : %d bytes\n", sizeof(ul));
	printf("Size of float: %d bytes\n", sizeof(f));
	printf("Size of double: %d bytes\n", sizeof(d));
	printf("Size of long double: %d byte\n", sizeof(ld));
	printf("size of ponter : %d byte\n",sizeof(*ptr));

}

//Program 2 Function
 int IsLeapYear(int aYear ){
	if (aYear < 1752) {
		return 0;
	}
	else if (aYear % 400 == 0){
		return 1;
	}
	else if (aYear % 100 == 0){
		return 0;
	}
	else if (aYear % 4 == 0){
		return 1;
	}
	else return 0;
}

//Program 3 Function
int IsVowel( char aLetter ){
	
	if((int)(aLetter)>90) {
		aLetter = (char)((int)aLetter - 32);
	}
    if(aLetter=='A' || aLetter=='E' || aLetter=='I' || aLetter=='O' || aLetter=='U') {
		return 1;
	}
	else if((int)aLetter>=65 && (int)aLetter<=90){
		return 0;
	}
	else
		printf("ERROR!!!\n");
	return 0;
}

//Program 4 Function
void ReverseNumber(long aNumber) {
	int value;
	int temp;
	long reverse = 0;
	if (aNumber <= 0) {
		value = -aNumber;
	}
	else {
		value = aNumber;
	}
	
	while(value >= 9) {
		temp = value % 10;
		reverse = reverse + temp;
		reverse = reverse * 10;
        
		value = value / 10;
	}
	reverse = reverse + value;
 
	printf("Original number = %d\n",aNumber);
    
	if(aNumber < 0) {
		printf("Reverse number = %d\n",-reverse);
	} else {
		printf("Reverse number = %d\n",reverse);
	}
}

//Main Function
int main() {
	//Test for Program 1
	printf("\n\nProgram 1:\n\n");
	SizeOfVariables();
	
	//Test for Program 2
	printf("\n\nProgram 2:\n");
	
	int year;
	int i;
	for(i=1;i<=10;i++)
	{
	printf("\nEnter a year\n");
	scanf(" %d", &year);
	printf("%d\n", IsLeapYear(year));
	}
	
	//Test for Program 3
	printf("\n\nProgram 3:\n");
	int letter;
	int x;
	for(x=1;x<=5;x++)
	{
	printf("\nEnter a letter\n");
	scanf(" %c", &letter);
	printf("%d\n", IsVowel(letter));
	}
	
		//Test for Program 4
	printf("\n\nProgram 4:\n");
	int num;
	int y;
	for(y=1;y<=5;y++)
	{
	printf("\nEnter a number\n");
	scanf(" %d", &num);
	ReverseNumber(num);
	}
    return 0;
}