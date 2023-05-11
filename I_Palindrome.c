#include <stdio.h>
#include <string.h>

int main(){
    char s1[1001];
    scanf("%s",&s1);
    char s2[1001];
    strcpy(s2,s1);
    strrev(s2);
    if(strcmp(s1,s2)==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}