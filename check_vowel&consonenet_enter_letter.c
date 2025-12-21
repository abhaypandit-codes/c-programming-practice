//vowel and consonants check 
#include<stdio.h>
int main (){
    char lowercase;
    printf("enter lowercase letters=");
    scanf("%c",&lowercase);
    if(lowercase==97||lowercase==117||lowercase==101||lowercase==105||lowercase==111){
    printf("vowel");
    }
    else{
    printf("consonants");
    }
    return 0;
}