#include <string.h>
 int main(){
     static char XXX[10];
     static char YYY[10];
     static char ZZZ[10];
     memset(XXX, 0, 10);
     memset(YYY, 0, 10);
     memset(ZZZ, 0, 10);
     int res = YYY[1];
     res += XXX[1]+ZZZ[1];
     if(res != 0){
 ERROR:
         goto ERROR;
     }
     return res;
 }