#include <stdio.h>
#include<string.h>
int main() {
    char ch[100];
    fgets(ch,100,stdin);
    int countv=0,countc=0;
    for(int i=0;i<strlen(ch);i++){
        if( ch[i]=='a'|| ch[i]=='e' || ch[i]=='o'|| ch[i]=='i'|| ch[i]=='u'|| 
             ch[i]=='A'|| ch[i]=='E'|| ch[i]=='O'|| ch[i]=='I'|| ch[i]=='U'){
                countv++;
             }
             else{
                countc++;
             }
    }
    printf("vowel %d\n",countv);
    printf("consonant %d",countc);
    
    return 0;
}