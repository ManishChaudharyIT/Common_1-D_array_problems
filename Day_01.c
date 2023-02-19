/* Here are some common problems
0. Print all element form an array
1. Find sum of all element which is present in an array
2. Find odd and even number from an array
3. Find sum of even and Odd number from an array
4. Print odd and even element from an array
5. Sort the array using selection sort in ascending order
6. Reverse the array
7. Find max and min form an array
8. Print alternate element from an array
9. count the frequency of element or duplicate 
 */
#include<stdio.h>
//0
void all_element()
{
int a[5],i;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        }
printf("this is all element of your array\n");
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}

//1
void sum_element()
{
int a[5],i,sum=0;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        }
printf("Sum of all element of your array\n");
for(i=0;i<5;i++)
{
    sum=sum+a[i];
}
printf("%d\n",a[i]);
}
//2
void odd_even(){
int a[5],i,even=0,odd=0;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
printf("\n**********Here are present How many odd and even element in your array**********\n");
for(i=0;i<5;i++)
if(a[i]%2==0)
{
even++;
printf(" Even %d\n",a[i]);}
else
odd++;
printf("Then total number of  even element are ::%d\n",even);
printf("All odd  element are::%d\n",odd);
}
//3
void sum_of_odd_even()
{
int a[5],i,even=0,odd=0;
printf(" \nEnter the element of array:");
for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
printf("\n**********Sum of Even and Odd**********\n");
for(i=0;i<5;i++)
if(a[i]%2==0)
{
even=even+a[i];}
else{
odd=odd+a[i];
}

printf("Total Even Number Sum is =%d ",even);
printf("\n Total Odd Number Sum is =%d",odd);
}
//4
void  even_odd_element()
{
int a[5],i,even=0,odd=0;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
printf("\n**********Here are present How many odd and even element in your array**********\n");
printf("These elemen are even\n");
for(i=0;i<5;i++)
{
    if(a[i]%2==0)
        printf("%d\n",a[i]);
}
printf("These are odd elements\n");
for(i=0;i<5;i++)
{
    if(a[i]%2 !=0)
    printf("%d\n",a[i]);
}
}
//  5/a
void sorting_array_descending_order()
{
int a[5],i,j,swap;
printf(" \nEnter the element of array:");
for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
    if(a[i]>a[j])
    {
    swap=a[i];
    a[i]=a[j];
    a[j]=swap;
}
}
printf("\n Array After Sorting in descending order ::");
for(i=0;i<5;i++)
printf("\n %d",a[i]);

}// 5/b
void sorting_array_ascending_order()
{
int a[5],i,j,swap;
printf(" \nEnter the element of array:");
for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<5;i++)
for(j=0;j<5;j++)
{
    if(a[i]<a[j])
    {
    swap=a[i];
    a[i]=a[j];
    a[j]=swap;
}
}
printf("\n Array After Sorting in ascending order ::");
for(i=0;i<5;i++)
printf("\n %d",a[i]);
}

//6 Reverse Order Array
void reverse_array()
{
int a[5],i;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        }
printf("this is all element of your array after revers\n");
for(i=4;i>=0;i--){
printf("%d\n",a[i]);}
}

//7. Max and Min
void Max_min()
{
int a[5],i,max,min;
printf(" \nEnter the element of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
printf("\n Here is Max and Min Value of your array \n");
max=a[0];
for(i=1;i<5;i++)
{
if(a[i]>max)
{
    max=a[i];
    
}
}
printf("\n%d is the max value of your array",max);

min=a[0];
for(i=1;i<5;i++)
{
if(a[i]<min)
{
    min=a[i];
    
}
}
printf("\n%d is the min value of your array",min);

}
//8 alternate element form an array
void alternate_element()
{
int a[5],i;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        }
printf("this is all element of your array\n");
for(i=0;i<5;i=i+2)
printf("%d\n",a[i]);
}

//9 frequency or number of duplicate 

void duplicate()
{
  int a[5],key,freq=0,i;
printf(" \nEnter the element of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        }
printf("\n Enter the value for chekcing this number is repeted or not\n");
scanf("%d",&key); 
for(i=0;i<5;i++)
{
    if(a[i]==key)
    {freq++;

}}
printf("\n Frequency of %d is %d",key,freq);}

int main()
{
    //all_element();
    //sum_element();
    //odd_even();
    //sum_of_odd_even();
    //even_odd_element(); 
    //sorting_array_deceding_order();
    //sorting_array_ascending_order();
    //reverse_array();
    //Max_min();
    //alternate_element();
    duplicate();
return 0;
}

