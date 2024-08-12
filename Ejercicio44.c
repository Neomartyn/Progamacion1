#include<stdio.h>
int natural=0;
int main(){
    do{
        printf("%d\n",natural);
        natural=++natural;
    }while (natural<101);
return 0;
    
}