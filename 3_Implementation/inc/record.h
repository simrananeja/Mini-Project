# ifndef __RECORD_H__
# define __RECORD_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
}s[30];

void menu();

void add();

void view();

void search();

void modify();

void deleterec();

#endif
