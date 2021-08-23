#include <stdio.h>

//Function(Read_Mode) to read the content of the file and print it
void Read_Mode(char *Sample[])
{
	
//Opening the file by writing its path
    FILE *fp;
	fp= fopen ("C:/Users/SOAQ COMPUTER/Desktop/SIC 1/CPL/Task 6/Task 6.txt", "r");
    printf("File openes successfully\n");
	printf("String input from file:\n");
    while(!feof(fp))
    {
        fgets(Sample, 100, fp);
        puts(Sample);
    }
}


//Function(Reverse_Mode) to reverse the content of the file 
void Reverse_Mode(char Sample[])
{

//Calling the function(Read_mode)
    Read_Mode(Sample);
    int i;
    printf("Reversed string:\n");
    for(i=10;i>=0 ; i--)
    {
       printf("%c",Sample[i]);
    }
}


//Function(Writing_Mode) to print the reverse of the content of the file
void Writing_Mode(char Sample[])
{
	
//Calling the function(Reverse_mode)
    Reverse_Mode(Sample);
    
//Opening the file by writing its path
    FILE *fp;
	fp= fopen ("C:/Users/SOAQ COMPUTER/Desktop/SIC 1/CPL/Task 6/Task 6.txt", "w");
    int i;
    for(i =0; i<=10 ;i++)
    {
      fprintf(fp, "%c", Sample[i]);
    }

    for(i =10; i>=0 ;i--)
    {
      fprintf(fp, "%c",Sample[i]);
    }
    printf("\nthe reversing string is added to the file successfully\n");
}

int main()
{
	
//Opening the file by writing its path
    FILE *fp;
	fp= fopen ("C:/Users/SOAQ COMPUTER/Desktop/SIC 1/CPL/Task 6/Task 6.txt", "r");
    char *Sample[10] = {0};

//Calling Functions(Read_Mode, Reverse_Mode and Writing_Mode)
    Writing_Mode(Sample);

//Closing the file
    fclose(fp);
    return 0;
}



