 // C program to enter marks of five subjects and find percentage and grade
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
    char name[50],regNo[20];
    int MAP111,BIT116,KUC111,BIT112,MAA111;
    float totalMarks, percentage;
    printf(" KIBABII UNIVERSITY\n");
    printf(" STUDENT'S REPORT");
    printf("\n");

    //Input marks of five units from user
    printf("Marks for MAP114 :");
    scanf("%d",&MAP111);
    printf("Marks for BIT116 :");
    scanf("%d",&BIT116);
    printf("Marks for KUC111 :");
    scanf("%d",&KUC111);
    printf("Marks for MAA115 :");
    scanf("%d",&MAA111);
    printf("Marks for BIT112 :");
    scanf("%d",&BIT112);
    totalMarks = (MAA111+BIT112+BIT116+KUC111+MAP111);
    printf("totalMarks: %.2f out of 500.00\n",totalMarks); // Calculate percentage
    percentage = ((MAP111+BIT112+KUC111+BIT116+MAP111)*100)/ 500.00;//processes the average

     //Enter Student details example name and Reg number.
   printf("Name of student: ");
    scanf("%49s", name);

    printf("Registration number of student: ");
    scanf("%19s", regNo);
    printf("\n");

    printf("Name: %s\n", name);
    printf("Registration Number: %s\n", regNo);
    printf("\n");

    printf("Total Marks: %.2f\n" ,totalMarks );
    printf("Percentage: %.2f\n" ,percentage);

return 0;
}
