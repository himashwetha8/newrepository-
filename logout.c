#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char studentID[]="Clarance", password[]="123456", id[8], p[6];
    int n=1, x, y;

    do{
         printf("\nStudent_ID:");
         scanf("%s", &id);

         printf("\nPassword:");
         scanf("%s", &p);

         x=strcmp(id, studentID);
         y=strcmp(p, password);

         if(x==0 && y==0){
           printf("\nSucessfully Logged In");
         }else {
           printf("\nWrong Password, try again", 5-n);
            getch();
            n++;}

         if(n>5){
          printf("\nAccess Denied");
          getch();
          }

       }while (n<=5);

}
