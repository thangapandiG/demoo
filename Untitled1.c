/*#include<stdio.h>
int main()
{
    int a=10;
    char b='$';
    float c=12.22f;
    printf("%d \n %c \n %0.2f",a,b,c);
}*/
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("addition value:%d\n",c);
    c=a-b;
    printf("subraction value :%d",c);
    return 0;}

*/
/*
#include<stdio.h>
int main (){
     float bs,da,hr,grs;
     printf("enter basic salary:");
     scanf("%f",&bs);
     da=bs*0.4;
     hr=bs*0.2;
     grs=bs+da+hr;
     printf("enter the DA:%0.2f\n",da);
     printf("enter the HR:%0.2f\n",hr);
     printf("enter the GRS:%0.2f\n",grs);
     return 0;
}
*/
/*
#include<stdio.h>
int main (){
 float km,m,cm,i,ft;
 printf("enter the kilomter:");
 scanf("%f",&km);
 m=1000*km;
 cm=100*m;
 i=cm/2.54;
 ft=i/12;
 printf("KM:%0.2f\n",km);
 printf("M:%0.2f\n",m);
 printf("CM:%0.2f\n",cm);
 printf("I:%0.2f\n",i);
 printf("FT:%0.2f",ft);
 return 0;
}*/


/*
#include<stdio.h>
int areaOfRect(int length,int breadth)
{
    int area;
    area=length * breadth;
    return area;
}
 int main()
  {
     int l=10,b=7;
      int area=areaOfRect(l,b);
      printf("AREA=%d\n",area);

      l=100,b=100;
      area=areaOfRect(l,b);
      printf("AREA=%d",area);
  }*/

/*
  #include <stdio.h>
  float milesToKm(float miles){
  return miles*1.60934;
  }

  int main(){
  float miles,km;
  printf("enter the miles:");
  scanf("%d")



  }
  */
  //assingnment operator
 /*
  #include<stdio.h>
  int main (){
    int a=10,b=5;
    a+=10;
    printf("A=%d\n",a);
    a-=10;
    printf("A=%d",a);
    return 0;
  }
*/
//relational operator
/*
#include<stdio.h>
int main ()
{
    int a=10,b=10;

    printf("greater than or equal to:%d\n",a>=b);
    printf("less than               :%d",a<b);
}
*/
//logical operator
/*
#include<stdio.h>
int main ()
 {


  int a=85;

    printf("obtined is :%d\n",(a>=35&&a<=100));
    printf("obtined is :%d\n",(a>=35||a<=100));
    printf("obtined is :%d",!(a>=35));
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char name []="thangapandi";
    int len=0;
    while (name[len]!='\0'){
    len++;
    }
    printf("%d",len);
    return 0;

}
*/
/*
#include<stdio.h>
int main ()
{
    char name[]="thangapandi";
    int len=0;
    while (name[len]!='\0')
    {
        len++;
    }
      printf("%d",len);
#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[]="Thanga Pandi";
char copy_name[100];
int i=0;
while(name[i]!='\0')
{
copy_name[i]=name[i];
i++;
}
copy_name[i]='\0';
printf("Copy Name is %s",copy_name);
return 0;
}
     return 0;

}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
char name[]="Thanga Pandi";
char copy_name[100];
int i=0;
while(name[i]!='\0')
{
copy_name[i]=name[i];
i++;
}
copy_name[i]='\0';
printf("Copy Name is %s",copy_name);

}
*/
/*
#include<stdio.h>
#include
int main()
{
    char name[]="thangapandi";
    int end=0;
    int start=0;

    while(name[end]='\0'){

        end++;
    }
        end--,
        while(start<end){
            char to=name[start]
            name[start]=name[end]
            name[end]=to
        }
}
*/
/*
#include <stdio.h>

float calculateAverage() {
    int n, i;
    float sum = 0.0;


    printf("Enter the number of values: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Number of values must be greater than 0.\n");
        return 0.0;
    }


    float numbers[n];


    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }


    return sum / n;
}

int main() {

    float average = calculateAverage();
    if (average != 0.0) {
        printf("The average is: %.2f\n", average);
    }

    return 0;
}*/
/*
#include<stdio.h>
int n,fact;
int factorial(int n)
{
    if (n==1)
        return 1;
     else
     return n * factorial(n-1);
}
int main ()
{
    printf("enter the num:");
    scanf("%d",&n);
    fact=factorial(n),
    printf("%d",fact);
}
*/
/*
#include<stdio.h>
int main()
{
    int a=15,b=10;
    printf("bitwise operator of and :%d\n",a&b);
    printf("bitwise operator of or  :%d\n",a|b);
    printf("bitwise operator of xor :%d\n",a^b);
    printf("bitwise operator of not :%d\n",~a);
    printf("bitwise operator of les:%d\n",a<<=3);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a=-10,b=-15,c=-10;
    if (a>0 && b>0){
        printf("both a and b are positive.\n");
    }
    else {
        printf("its is negative .\n");
    }

    if (a>0 || b>0){
        printf("either a and b are positive.\n");
    }
    else{
        printf("both are negative.\n");
    }
    if (!(c>0)){
        printf("c is not a positive number.\n");
    }
    else{
        printf("c is a positive number.");
    }
    return 0;
    }
*/
// if state ment
/*
#include<stdio.h>
int main ()
{
    int age;
    printf("enter your age:\n");
    scanf("%d",&age);
    if(age>=18)
{


        printf("you are eligible for voting.");
    }
return 0;


}*/
/*

#include<stdio.h>
int main ()
{
    int a;
    printf("enter the value of A:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive value.",a);
    }
    else if(a==0)
    {
        printf("%d is 0.",a);
    }
    else if(a<0)
    {
        printf("%d is negative value.",a);
    }
}
*/
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if()
    {
        if(400)
    }
}















































































