#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    FILE *fh_output;

    fh_output = fopen("io.text", "w");

    /*
    
    fputs("\nabc", fh_output);
    fputs("123\n", fh_output);
    fputs("A string\n", fh_output);


    int data = 5;
    fprintf(fh_output, "data: %d\n", data);
    

    //for(int i = 0; i < 10; i++)
    //    fprintf(fh_output, "%d\n", i);
    */
    int input = 0;
    while (true)
    {
        printf("Enter # (-1 quits): ");
        scanf("%d", &input);
        if(input == -1) 
            break;
        else 
            fprintf(fh_output, "%d\n", input);
    }
    

    fclose(fh_output);

    FILE *fh_input;
    fh_input = fopen("io.text", "r");

    int finput = 0;
    int lines = 0;
    int numbers[100];

    while (fscanf(fh_input, "%d", &finput) != EOF)
    {
        numbers[lines] = finput;
        printf("file lines: %d: %d\n", lines+1, finput);
        lines++;
    }

    int total = 0;
    for (int i = 0; i < lines; i++)
    {
            total += numbers[i];
    }
    printf("The average is: %d\n", total / lines);
    
   
    fclose(fh_input);

    fh_input = fopen("in.txt", "r");

    char buffer[256];

    fgets(buffer, 256, fh_input);
    printf("Buffer: %s\n", buffer);
    
    
    
    fclose(fh_input);

    return 0;
}