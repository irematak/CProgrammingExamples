#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int permute(int n,int r){
int n_fact=1,fact=1;
for(int i=1;i<=n;i++){
    n_fact*=i;
}
for(int j=1;j<=(n-r);j++){
    fact*=j;
}
int permutation=n_fact/fact;
return permutation;
}


int main()
{int n,r;
printf("Enter n:");scanf("%d",&n);
printf("Enter r:");scanf("%d",&r);
printf("permutation(%d,%d):%d",n,r,permute(n,r));
    return 0;
}
