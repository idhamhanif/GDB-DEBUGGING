/* Grammar syntax :

s -> +ss

s -> -ss

s-> 0, 1, 2, 3


*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void s();
void match (char);
char next();
char lookahead;
char str[20];

void s()
{
	if (lookahead == '+')
	{
		match('+');
		s();
		s();
	}
	else if (lookahead == '-')
	{
		match('-');
		s();
		s();	
	}
	else if (lookahead == '1')
	{
		match('1');
	}
		else if (lookahead == '2')
	{
		match('2');
	}
		else if (lookahead == '3')
	{
		match('3');
	}
		else if (lookahead == '0')
	{
		match('0');
	}
	else 
	{
		printf ("syntax error\n\n");
	}
}

void match (char t)
{
	if (t == lookahead)
	{
		next ();
	}
	else {
		printf ("syntax error \n\n");
		exit(2);
	}
}

char next()
{
	static int i = 0;
	lookahead = str[i++];
	return lookahead;
}

int main ()
{
	printf ("\n enter string :");
	scanf ("%s",str);
	next();
	s();
	
	if (lookahead == '\0')
	printf ("syntax benar");
	else 
	printf ("syntax error\n\n");
	_getch();
	return 0 ;
}




