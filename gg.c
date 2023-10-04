#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{ 
    char a[]={"45637338292735647683e8854374359643761234546578961890543321345515612457832"};
    char *p;
    int *q,n;
    n=strlen(a);
     printf("\n %d\n",n);
    p=(char*)malloc(n*sizeof(char));

    for(int i=0;i<n;i++)
      p[i]=a[i];

 
  
    int m;
    printf("\n enter the span no=");
    scanf("%d",&m);

    q=(int*)malloc((n-m+1)*sizeof(int));
    
    int j,k,prod;
    for(j=0;j<=n-m+1;j++)
   {     
           prod=1;  
         for(k=j;k<m+j;k++)
           prod*=p[k];

         q[j]=prod;
    }

    int large=q[0];
       for(int i=1;i<=n-m+1;i++)
          if(large<q[i])
             large=q[i];

    printf("\n %d is the largest",large);
    return 0;

}
