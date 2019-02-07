#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct tnode {        /* The tree node */
  char *word;         /* pointer to the text */
  int count;          /* number of occurrnces */
  struct tnode *left;  /* pointer to the left child */
  struct tnode *right; /* pointer to the right child */
};

struct tnode *addtree(struct tnode *, char *);
int getword(char *, int);

int main(int argc, char *argv[]){
  
  
  return 0;
}

/* getword: get the next word or character from imput */
int getword(char *word, int lim)
{
  int c, getch(void);
  void ungetch(int);
  char *w = word;
  
  return 0;
}