#include <stdio.h>
#include <string.h>

char result[101],c[101];
int j;

int string_reverse(char *a){
    int i,length,temp;
    length=strlen(a);
    for(i=0;i<length/2;i++){
        temp=a[i];
        a[i]=a[length-1-i];
        a[length-1-i]=temp;
    }
}

int add_two_numbers(char *a, char *b){
    
    int  n1,n2,max,x,y,z,carry=0;
    j=0;
    n1=strlen(a)-1;
   n2=strlen(b)-1;
   if(n1>=n2){
       while(n1!=-1){
           x=a[n1--]-'0';
           //printf("\n%d",x);
           
           if(n2>=-1){
               y=b[n2--]-'0';
           }
           if(n2<-1){
               y=0;
           }
           //printf("\n%d",y);
           z=x+y+carry;
           //printf("\n%d",z);
           if(z<=9){
               result[j]=z+'0';
               carry=0;
           }
           if(z>9){
               result[j]=z%10+'0';
               carry=z/10;
           }
           j++;
       }
       
   }
   if(n1<n2){
       while(n2!=-1){
           x=b[n2--]-'0';
           //printf("\n%d",x);
           
           if(n1>=-1){
               y=a[n1--]-'0';
           }
           if(n1<-1){
               y=0;
           }
           //printf("\n%d",y);
           z=x+y+carry;
           //printf("\n%d",z);
           if(z<=9){
               result[j]=z+'0';
               carry=0;
           }
           if(z>9){
               result[j]=z%10+'0';
               carry=z/10;
           }
           j++;
       }
       
   }
   if(carry==1){
       result[j]='1';
   }
   string_reverse(result);
   j--;
   n1=0;
    while(result[n1]!='\0'){
       c[n1]=result[n1];
       n1++;
   }
   
}




int main()
{
   char b[100];
   int n,i;
   printf("How many numbers do you want to add?\n");
   scanf("%d",&n);
   
   printf("\nEnter a Number:  ");
   scanf(" %[^\n]s",c);
   
   
   for(i=1;i<=n-1;i++){
       printf("\nEnter another Number:  ");
   scanf(" %[^\n]s",b);
   add_two_numbers(c,b);
   
   }
    
   printf("\nResult\t:\t");
   printf (" %s ", result);
   
   return 0;  
}
