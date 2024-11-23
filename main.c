struct xinxi
{
    int number;
    int grade;
};
#include<stdio.h>
int main()
{
struct xinxi score[5];
for(int i=0;i<5;i++)
{
    scanf("%d",&score[i].number);
    scanf("%d",&score[i].grade);
}
int max=score[0].grade,m=0;
for(int i=1;i<5;i++)
{
   if(max<score[i].grade)
   {
       max=score[i].grade;
       m=i;
   }
}
printf("%d %d",max,score[m].number);
return 0;
}
