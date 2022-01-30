#include <stdio.h>
#include <string.h>
int main(void) {
  int a;
 scanf("%d",&a);
  char b[a][1000];
 for(int i=0;i<a;i++){
   scanf("%s",b[i]);
 }
 for(int i=0;i<a;i++){
   if(strlen(b[i])>10){
    printf("%c%d%c\n",b[i][0],(int )strlen(b[i])-2,b[i][strlen(b[i])-1]);
   }
   else{
   printf("%s\n",b[i]);
 }
 }
}
