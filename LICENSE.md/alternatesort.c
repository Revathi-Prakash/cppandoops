//alternate sort
#include <stdio.h>

int sortarray(int a[],int n)
{
    int i,j,t,p,index,f=0;
    
    for(i=0;i<n-1;i++)
    {
        p=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {   
            if(a[j]>p && f==0)
            {
                index=j;
                p=a[j];
             
            }
            else  if(a[j]<p && f==1)
            {
                index=j;
                p=a[j];

            }
        }
        f=!f;
        
        t=a[index];
        a[index]=a[i];
        a[i]=t;
       
    }
    display(a,n);
    return 0;
}

int display(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

int main()
{
    int i,n;
    printf("Enter the array size");
    scanf("%d",&n);
   int a[100];
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sortarray(a,n);
    return 0;
}
