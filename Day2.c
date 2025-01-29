
//WPA NEGATIVE POSITIVE ZERO
/*#include<stdio.h>
int main(){
    float num;
    printf("Enter a number :");
    scanf("%f",&num);

    if (num>0){
        printf("positive");
    }
    else if(num<0){
        printf("negative");
    }
    else{
        printf("number is zero");
    }
    return 0;
}*/

// WPA LARGEST NUMBER
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input integer:\n");
    scanf("%d",&a);
    printf("Input integer:\n");
    scanf("%d",&b);
    printf("Input integer:\n");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("largest of three number:%d\n",a);

    }
    else if(b>=a && b>=c){
        printf("largest of three number:%d\n",b);
        }
    else{
        printf("largest of three number:%d\n",c);
    }
    return 0;
}*/


//WPA LEAP YEAR
/*
#include<stdio.h>

int main(){
    int year;
    printf("ENTER A YEAR :");
    scanf("%d",&year);

    if((year % 4==0 && year% 100 !=0)||(year % 400==0))
    {
        printf("%d is a leap year.\n",year);
    }else{
        printf("%d is not leap year.\n",year);
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    char ch; 
    printf("ENTER a character :");
    scanf("%c",&ch);

    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
{
    printf("'%c' is a vowel .\n",ch);
}else if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
    printf("'%c' is a constant.\n",ch);
}else
{

printf("'%c'is not an alphabet character.\n",ch);
}
    return 0;
}
