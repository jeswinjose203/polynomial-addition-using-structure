#include<stdio.h>
struct polynomials
{
int coeff[50];
int no;
};
struct polynomials p[50];
int main()
{
    int n,i,num[50],res[50],large,j,k;
    printf("enter the number of polynomials required\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number of degree of the polynomials\n");
        scanf("%d",&k);
        printf("enter the coefficients of the polynomials\n");
        for(j=0;j<k;j++)
        {
          scanf("%d",&p[i].coeff[j]);
        }
        num[i]=j;
        p[i].no=j;
    }
    large=num[0];
    i=0;
    while(i<n)
    {
    if(num[i]>large)
    {
        large=num[i];
    }
    i++;
    }
    printf("the largest coefficient is :%d\n",large);
 
   for(i=0;i<n;i++)               
    {
        j=p[i].no;
        while(j<large)
        {
           p[i].coeff[j]=0;
           j++;
        }
           
    }
    for(i=0;i<n;i++)
    {
        res[i]=0;
        for(j=0;j<large;j++)
        {
            printf("%d\t",p[i].coeff[j]);
        }printf("\n");
    }
    for(i=0;i<large;i++)
    {
        res[i]=0;
        for(j=0;j<n;j++)
        {
            res[i]=res[i]+p[j].coeff[i];
        }
    }
    for(i=0;i<large;i++)
    {
        printf("%d\t",res[i]);
    }    
    return 0;
}
