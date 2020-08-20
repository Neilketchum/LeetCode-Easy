#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int id=0;

int count_token(char str[200][200],int sz){
    int c=0;char* ret;
    for (int i=0;i<sz;i++){
        if (strstr(str[i],"int")!=NULL){
          ret=strstr(str[i],"int");
          
          if (*(ret+3)==' '){
            c++;
            printf("int\t <id%d>\t Keyword\n",id);
            id++;
            if (strstr(str[i],"main")==NULL){
              for (char* j=(ret+4);*j!=';';j++){
                if (*j=='='){
                  while(*j!=','){
                    if (*j=='='){
                      printf("%c\t <id%d>\t Operator\n",*j,id);
                      id++;     
                    }
                    else{
                      printf("%c",*j);
                    }
                    j++;
                  }
                  printf("\t ");printf("<id%d>\t INT\n",id);
                  id++;
                  c=c+1;
                }
                else{
                  c++;
                  printf("%c\t <id%d>\t Identifier\n",*j,id);
                  id++;
                }
                c++;
                // printf("%c",*j);
              }
            }
          }
        }
        if (strstr(str[i],"printf")!=NULL){
            c++;
            printf("printf\t <id%d>\t Keyword\n",id);
            id++;
            int count=0,j=6;
            for ( j=7;count!=2;j++){
              if (str[i][j]=='"'){
                count++;
              }
              printf("%c",str[i][j]);
            }
            printf("\t <id%d>\t String\n",id);
            id++;
            while(str[i][j]!=')'){
              if (str[i][j]!=','){
                printf("%c\t <id%d>\t Identifier\n",str[i][j],id);
                id++;
              }
              j++;
            }
        }
        if (strstr(str[i],"main")!=NULL){
            c++;
            printf("main\t <id%d>\t Keyword\n",id);
            id++;
        }
        if (strstr(str[i],",")!=NULL){
            c++;
            printf(",\t <id%d>\t STC\n",id);
            id++;
        }
        if (strstr(str[i],")")!=NULL){
            c++;
            printf(")\t <id%d>\t STC\n",id);
            id++;
        }
        if (strstr(str[i],"(")!=NULL){
            c++;
            printf("(\t <id%d>\t STC\n",id);
            id++;
        }
        if (strstr(str[i],"{")!=NULL){
            c++;
            printf("{\t <id%d>\t STC\n",id);
            id++;
        }
        if (strstr(str[i],";")!=NULL){
            c++;
            printf(";\t <id%d>\t STC\n",id);
            id++;
        }
        if (strstr(str[i],"return")!=NULL){
            c++;
            printf("return\t <id%d>\t Keyword\n",id);
            id++;
        }
        if (strstr(str[i],"}")!=NULL){
            c++;
            printf("}\t <id%d>\t STC\n",id);
            id++;
        }
        if (strstr(str[i],"+")!=NULL){
            ret=strstr(str[i],"+");
            c++;
            printf("+\t <id%d>\t Operator\n",id);
            id++;
            //for y
            printf("y\t <id%d>\t Identifier\n",id);
            id++; 
            c++;
            for (char* j=(ret+1);*j!='0';j++){
              c++;
              printf("%c00\t <id%d>\t INT\n",*j,id);
              id++;
              // printf("%c",*j);
            }
            for (char* k=(ret-1);*k!='y';k--){
              c++;
              // printf("%c",*(k));
              if (*k=='='){
                printf("%c\t <id%d>\t Operator\n",*k,id);
                id++;  
              }
              else{
                printf("%c\t <id%d>\t Identifier\n",*k,id);
                id++;  
              }
            }
            // for x
            printf("x\t <id%d>\t Identifier\n",id);
            id++;
            c++;

        }
    }
    return c;
}


int main(int argc, char const *argv[])
{
    char str[200][200],in[100];
    gets(in);
    int i=0;
    while(strcmp(in,"}")!=0){
        if (in[0]!='#'){
            strcpy(str[i],in);
        }
        i++;
        gets(in);
    }
    i=i+1;strcpy(str[i],"}");
    printf("Lexemes\t Token\t Token Class\n");
    int count=count_token(str,i);
    printf("}\t <id%d>\t STC\n",id);
    id++;
    printf("%d",count);
    return 0;
}