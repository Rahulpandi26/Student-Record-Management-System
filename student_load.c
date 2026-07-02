#include "header.h"

void load_record(ST **hptr)
{
    FILE *fp;

    fp = fopen("student.csv", "r");

    if(fp == NULL)
    {
        return;
    }

    ST *new;

    char line[200];

    // Skip header line
    fgets(line, sizeof(line), fp);

    while(fgets(line, sizeof(line), fp))
    {
        new = (ST *)malloc(sizeof(ST));

        sscanf(line,
               "%d,%49[^,],%f",
               &new->rollno,
               new->name,
               &new->mark);

        new->next = NULL;

        if(*hptr == NULL)
        {
            *hptr = new;
        }
        else
        {
            ST *temp = *hptr;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = new;
        }
    }

    fclose(fp);
}
