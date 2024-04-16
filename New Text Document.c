#include <math.h>
#include <stdio.h>

main(){
    int i,j,n,ct=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%1!=0) ct++;
    }
    if(ct>2)printf("np");
    else printf("p");

}
