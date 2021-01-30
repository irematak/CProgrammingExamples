#include <stdio.h>
#include <stdlib.h>
int Combination(int n,int r){
int n_fact=1,fact=1,r_fact=1,combination;
for(int i=1;i<=n;i++){
    n_fact*=i;
}
for(int j=1;j<=n-r;j++){
    fact*=j;
}
for(int k=1;k<=r;k++){
    r_fact*=k;
}
combination=n_fact/(r_fact*fact);
return combination;

}
int main()
{
    int n,r;
    printf("Enter n:");scanf("%d",&n);
    printf("Enter r:");scanf("%d",&r);
    printf("Combination(%d,%d):%d",n,r,Combination(n,r));
    return 0;
}
