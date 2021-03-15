#include<stdio.h> 
#include<string.h> 
static int i =0; 
static int j; 
void reverser(char* k) 
{ 
    char c; 
    if(k[i]!='\0') 
    { 
        i++; 
        reverser(k); 
        printf("%c",k[j]); 
        j--; 
    } 
} 
int main() 
{ 
    char s[100]; 
    printf("\nEnter the string"); 
    scanf("%s", &s); 
    j=strlen(s); 
    j=j-1; 
    reverser(s); 
} 