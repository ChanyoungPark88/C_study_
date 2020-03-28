 #include <stdio.h>

 int main()
 {
     int num1;

     scanf("%d", &num1);

     switch (num1)
     {
     case 1:
         int num2 = num1;
         printf("It is the %d\n", num2);
         break;
     case 2:
         printf("It is the 2\n");
         break;
     case 3:
         printf("It is the 3\n");
         break;
     default:
         break;
     }
     
     return 0;
 }