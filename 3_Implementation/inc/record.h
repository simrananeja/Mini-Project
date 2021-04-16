# ifndef __RECORD_H__
# define __RECORD_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
}s[30];

void menu(struct student s[]);

void add(struct student s[]);

void view(struct student s[]);

void search(struct student s[]);

void modify(struct student s[]);

void deleterec(struct student s[]);

#endif
