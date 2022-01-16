int main(){
     volatile char str[10]__attribute__((aligned(128)));
     if(((long) str & 127L)){
 ERROR:
         goto ERROR;
     }
     return 0;
 }