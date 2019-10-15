#include<stdio.h>
#include<stdlib.h>
//student structure
struct student{
    char name[30];
    int roll;
    struct student *ptr_next;
};
typedef struct student student;
student *head=NULL;
//Adds student
void add_student()
{
    student *temp1;
    student *temp=malloc(sizeof(student));
    printf("Enter the student name\n");
    fflush(stdin);
    scanf("%s",&temp->name);
    printf("Enter the roll no\n");
    scanf("%d",&temp->roll);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp1=head;
        while(temp1->ptr_next!=NULL)
        {
            temp1=temp1->ptr_next;
        }
        temp1->ptr_next=temp;
    }
}
//prints students
void print_student()
{
    student *temp;
    temp=head;
    while(1)
    {
        if(temp==NULL)
        {
            break;
        }
        printf("%s  %d \n",temp->name,temp->roll);
        temp=temp->ptr_next;
    }
}

int main()
{
    int i;
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&i);
        switch(i)
            {
            case 1:
                add_student();
                break;
            case 2:
                print_student();
            }
    }
}
