#include <stdio.h>
#include <stdlib.h>

//the rule of encryption is as follows-
//the 1st no. is swapped with the 3rd and 2nd no. is swapped with 4th ,
//and all the nos. are changed using this formula;
//new no.=(old no.+7)%10.

encryption(int *,int *,int *,int *);
decryption(int *,int *,int *,int *);
int main()
{
int a,th,thr,hund,hundr,tens,ones;
printf("enter the 4 digit number u want to encrypt ");
scanf("%d",&a);
if ((a/1000>9) || (a/1000==0))
{
printf("please try again and enter a valid no.\n");
main();
}
else
{
th=a/1000;
thr=a%1000;
hund=thr/100;
hundr=thr%100;
tens=hundr/10;
ones=hundr%10;
encryption(&th,&hund,&tens,&ones);
printf("%d%d%d%d\n",tens,ones,th,hund);
main2();
}
}
//now decryptiopn starts
int main2()
{
int a,th,thr,hund,hundr,tens,ones;
printf("enter the 4 digit no. u want to decrypt ");
scanf("%d",&a);
if ((a/1000>9) || (a/1000==0))
{
printf("please try again and enter a valid no.\n");
main2();
}
else
{
th=a/1000;
thr=a%1000;
hund=thr/100;
hundr=thr%100;
tens=hundr/10;
ones=hundr%10;
decryption(&th,&hund,&tens,&ones);
printf("%d%d%d%d\n",tens,ones,th,hund);
}
}


int encryption(int *a,int *b,int *c,int *d)
{
*a=(*a+7)%10;
*b=(*b+7)%10;
*c=(*c+7)%10;
*d=(*d+7)%10;
}
int decryption(int *a,int *b,int *c,int *d)
{
*a=(*a+3)%10;
*b=(*b+3)%10;
*c=(*c+3)%10;
*d=(*d+3)%10;
}

