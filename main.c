#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void multiplication_table(int limit,int number);

void print_usage(const char *prog_name) {
	printf("Usage: %s [Options] [Number]\n", prog_name);
	printf("\nNumber:\n  a number of the table to be printed \n");
	printf("\nOptions (all are optional):\n");
	printf("  -l,   Manaly give limit of table to be printed \n");
	printf("  -h, --help   Show this help message\n");
	// Add more options here as needed
}


int main(int argcount,char *argvalues[]){


	// value declration
	int limit=10;

	// check if any value is given
	if(1==argcount){
		printf("No option or value provided.\n\n");

		print_usage(argvalues[0]);
		return 0;
	}

	if(argcount==2){

		multiplication_table(limit, atoi(argvalues[1]));	
		return 0;
	}



	if(0==strcmp(argvalues[1],"-h")||0==strcmp(argvalues[1],"--help") ){

		print_usage(argvalues[0]);
		return 0;

	}

	if(0==strcmp(argvalues[1],"-l")){

		if(3==argcount){
			fprintf(stderr, "%s: fatal error: no input files\n\n Should be in \"%s %s [number] [number]\"\n\nTerminated successfully!!!  \n",argvalues[0],argvalues[0],argvalues[1]);

			return 1;
		}	
		multiplication_table(atoi(argvalues[2]), atoi(argvalues[3]));	
		return 0;
	}
		multiplication_table(limit, atoi(argvalues[1]));	
	return 0;
}

void multiplication_table(int limit,int number){

	printf("Multiplication table of %d is:\n*******************\n",number);
	for(int i=1;i<=limit;i++){
		printf("%02d x %02d = %02d\n",i,number,i*number);
	}

}
