#include<stdio.h>
#include<stdlib.h>
#include<strings.h>


	/* Our structure */
	struct rec
	{
		int x;
		char ques[1000];
		char option[]
	};

	int main()
	{
		int counter;
		FILE *ptr_myfile;
		struct rec my_record;

		ptr_myfile=fopen("test.bin","rb");
		if (!ptr_myfile)
		{
			printf("Unable to open file!");
			return 1;
		}
		for ( counter=1; counter <= 10; counter++)
		{
			fread(&my_record,sizeof(struct rec),1,ptr_myfile);
			printf("%d\n",my_record.x);
		}
		fclose(ptr_myfile);
		return 0;
	}
