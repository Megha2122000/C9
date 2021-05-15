#include<stdio.h>
main()
{
	FILE *fp1 , * fp2;
	char ch;
	fp1 = fopen("a.txt" , "r");
	fp2 = fopen("b.txt" , "w");
	while((ch = getc(fp1)) != EOF)
	putc(ch , fp2);
	fclose(fp1);
	fclose(fp2);
	getch();
}
