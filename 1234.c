#include <stdio.h>


// 1 задание
/*


int main (void)
{
    unsigned int orig_num;
    scanf ("%d",&orig_num);
    unsigned int in_num;
    scanf("%d",&in_num);
    char * pt = &orig_num;
    printf ("Do:%d :: hex: 0x%.8X",orig_num,orig_num);
    *(pt+1) = in_num;
    printf ("\nPosle:%d :: hex: 0x%.8X",orig_num,orig_num);
}

*/


//2 задание

/*

int main(void)
{
 float x = 5.0;
 printf("x = %f, ", x);
 float y = 6.0;
 printf("y = %f\n", y);
 float *xp = &y;
 float *yp = &y;
 printf("Result: %f\n", *xp + *yp);
}
*/

//3 задание

#define n 10
/*
int main (void)
{
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0;i < n;i++)
        printf ("%d ",*(a+i));

}
*/

//4 задание
/*
int main (void)
{
   int string_size = 20;
   char a[10];
   char b[10];
   printf("Enter string:")
   scanf ("%s",a);
   printf("Enter substring:")
   scanf ("%s",b);
   int flag = 1;
   int a_s = strlen(a),b_s = strlen (b);
   for (int i = 0;i<(a_s-b_s);i++)
     {
      flag = 1;
      for (int j = 0;j < b_s;j++)
      {
        printf ("%c:%c\n",*(a+i+j),b[j]);
        if (*(a+i+j) != b[j])
        flag = 0;
      }
      if (flag == 1)
        break;
     }
     switch (flag)
     case 0:
      printf ("substring was not found");
     case 1:
      printf ("substring was found");

}
*/