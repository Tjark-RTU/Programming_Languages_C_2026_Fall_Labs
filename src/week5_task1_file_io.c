// week5_task1_file_io.c
// Name: Tjark Frithjof  Surname: Janke  Student ID: 260ADM037
//
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.
//
// Build: make lab5   Run: ./bin/week5_task1_file_io

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_FILENAME "data.txt"
#define LINE_LEN 256

int main(int argc, char *argv[]) {
    FILE *fp = NULL;
    const char *filename = DEFAULT_FILENAME;
    char line[LINE_LEN];
    int line_count = 0;

    if(argc > 1)
    {
        filename = argv[1];
    }

    printf("Writing lines to %s...\n", filename);

    fp = fopen(filename, "w+");
    if(fp == NULL)
    {
        perror(filename); 
        return EXIT_FAILURE;
    }
    
    fprintf(fp, "Some text\n");
    fprintf(fp, "Some other text\n");


    fclose(fp);
    fp = fopen(filename, "r");
    printf("Reading contents:\n");
    while(fgets(line, LINE_LEN, fp)) 
    {
        line_count++;
        printf("%s", line);
    }

    fclose(fp); 

    return EXIT_SUCCESS;
}
