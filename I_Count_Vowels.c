#include <stdio.h>
#include <string.h>
int counter(char s[],int i){
    if(s[i]=='\0') return 0;
    int c = counter(s,i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        return c+1;
    }
    else{
        return c;
    }
}
int main(){
    char str[201];
    fgets(str,201,stdin);
    int c = counter(str,0);
    printf("%d",c);
    return 0;
}