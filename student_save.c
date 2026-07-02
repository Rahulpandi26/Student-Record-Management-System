#include "header.h"

void save_record(ST *hptr)
{
    if(hptr == 0)
    {
        printf("No record available to save\n");
        return;
    }

    FILE *fp;

    // Open CSV file
    fp = fopen("student.csv", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return;
    }

    // CSV Header
    fprintf(fp, "RollNo,Name,Percentage\n");

    // Save data
    while(hptr != 0)
    {
        fprintf(fp, "%d,%s,%.2f\n",
                hptr->rollno,
                hptr->name,
                hptr->mark);

        hptr = hptr->next;
    }

    fclose(fp);

    printf("Student records saved successfully in student.csv\n");
}
