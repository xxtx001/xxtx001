#include <stdio.h>
#include <time.h>
#include <string.h>

#include "tst1.c" 
#include "tst0329.cpp"
#include "tst0330.cpp"
#include "tst0402.cpp"

void main()
{	
//	testTuesday();
/*	
	FILE *fp = fopen("file.txt","r");
	if (fp==NULL)
	{
		_p("\n\nthe file does not exist!\n");
	}
	else
	{
		char filegets[200];
		int linenum = 0;
		printf("below is the file contents:\n");
		while (!feof(fp))
		{
			memset(filegets,0,sizeof(char)*200);
			fgets(filegets,100,fp);
			printf("Line%2d: %s\n",++linenum, filegets);
		}	
	}
	

	//tstSunday();
	//tst0329();
	//tst0330();
	//tst0402();	
	
	
	FILE *fp1 = fopen("data.txt","w");
	if (fp1==NULL)
	{
		_p("\n\nthe file does not exist!\n");
	}
	else
	{
		int linenum = -40;
		printf("below is the file contents:\n");
		while (linenum<=40)
		{
			fprintf(fp1,"=COUNTIF(($A$1:$C$251),\"=%d\")\n",linenum++);
		}	
	}
	
*/
	printf("hello, world!\n");
	printf("the result is %d\n",!(1 & 0));
	sleep(3);
	
	
}
