 #include<string.h>
 int main(){
     char tpl[3] = "aaa";
     if(strcmp (tpl, "aaa") != 0){
 ERROR:
         goto ERROR;
     }
     return 0;
 }