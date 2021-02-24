#include <stdio.h>
#include <string.h>
char * reverseVowels(char * s){
    char t;
    int i,j=strlen(s)-1;
    while(i<j)
    {
        if((s[i]=='a' || s[i]=='e' || s[i]=='o'|| s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='O'|| s[i]=='U' || s[i]=='I') &&(s[j]=='a' || s[j]=='e' || s[j]=='o'|| s[j]=='u' || s[j]=='i' || s[j]=='A' || s[j]=='E' || s[j]=='O'|| s[j]=='U' || s[j]=='I'))
        {
           t=s[i];
            s[i]=s[j];
            s[j]=t;
            j-=1;
            i+=1;
        }
    else  if (s[i]=='a' || s[i]=='e' || s[i]=='o'|| s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='O'|| s[i]=='U' || s[i]=='I')
        j-=1;
else if (s[j]=='a' || s[j]=='e' || s[j]=='o'|| s[j]=='u' || s[j]=='i' || s[j]=='A' || s[j]=='E' || s[j]=='O'|| s[j]=='U' || s[j]=='I')
    i+=1;
else
{
    i+=1;
    j-=1;
}
           
        
            
    }
    
    return s;

}
int main()
{   char s[1000];
    scanf("%s",s);
    printf("%s",reverseVowels(s));
return 0;
}
