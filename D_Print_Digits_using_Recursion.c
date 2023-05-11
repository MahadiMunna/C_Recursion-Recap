#include <stdio.h>
void spaceFun(int n){
    if(n==0) return;
    int d=n%10;
    spaceFun(n/10);
    printf("%d ",d);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a==0){
            printf("0\n");
        }else{
        spaceFun(a);
        printf("\n");
        }
    }
    return 0;
}