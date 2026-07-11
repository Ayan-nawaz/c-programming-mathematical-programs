#include<stdio.h>
int main (){
    int n;
    printf("enter anumber:");
    scanf("%d",&n);
    int r;
    printf("enter anumber:");
    scanf("%d",&r);

    int nfact=1;
    int rfact=1;
    int nrfact=1;

    for(int i=2; i<=n; i++){
        nfact=nfact*i;
    }
    for(int i=2; i<=r; i++){
        rfact=rfact*i;
    }
    for(int i=2; i<=n-r; i++){
        nrfact=nrfact*i;
    }
    int ncr=nfact/(nfact*nrfact);
    printf("%d",ncr);
    return 0;
}
