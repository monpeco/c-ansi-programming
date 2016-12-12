#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while((len = getLine(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
        }
    }
    
    
    return 0;
}

int getLine(char s[], int limit){
    int c, i;
    for(i=0; i<limit-1 && (c=getchar()) != EOF && c != '\n'; ++i )
        s[i] = c;
        
    if (c == '\n'){
        s[i] = c,
        ++i;
    }
    
    s[i] = '\0';
    
    return i;
}