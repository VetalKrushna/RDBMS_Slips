/*A Write a C program to create structure employee (id, name, salary). Accept 
details of n employees and perform the following operations:
a. Display all employees.
b. Display details of all employees having salary > .*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
   struct emp
  {
    int eno;
    char ename[10];
    float sal;
   }e[1000];
   
    int n,i,ch;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++);
     {
        printf("Enter Eno name salary:");
        scanf("%d%s%f",&e[i].eno,&e[i].ename,&e[i].sal);
     }
  do{
    printf("\n1-Display all employees.\n2-Display details of all employees having salary >1000\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1: for(i=0;i<n;i++)
                 {
                  printf("\nEmp no=%d",e[i].eno);
                  printf("\nEmp Name=%s",e[i].ename);
                   printf("\nEmp salary=%.2f",e[i].sal);
                }
             break;
        case 2:printf("\n Employees having salary >1000\n");
                    for(i=0;i<n;i++)
                    {
                        if(e[i].sal>1000)
                        {
                             printf("\nEmp no=%d",e[i].eno);
                             printf("\nEmp Name=%s",e[i].ename);
                             printf("\nEmp salary=%.2f",e[i].sal);
                        }
                    }
                break;
        case 3:exit(0);            
    }

  }while(ch!=3);
}
 