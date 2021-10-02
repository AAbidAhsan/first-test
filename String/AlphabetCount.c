#include <stdio.h>

int main()
{
    char ch[100];
    char temp;
    int i=0,n,j=0,count;
    scanf("%[^\n]s",ch);
    while(ch[++i]!='\0'){
        
    }
    i--;
    for(n=0;n<=i;n++){
        count=0;
        if((ch[n]>='A' && ch[n]<='Z') || (ch[n]>='a' && ch[n]<='z')){
            if(ch[n]!='$'){
            temp=ch[n];
            for(j=0;j<=i;j++){
                
                if(temp==ch[j]){
                    count++;
                    ch[j]='$';
                }
            }
            
            printf("%c comes %d times\n",temp,count);
        }
        }
    }
    

    return 0;
}
