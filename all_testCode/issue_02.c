void main()
{
  int i = 0;
  while (1) {
    if(i>0){
    ERROR:
        goto ERROR;
    }
    if (i == 0)
      *(&i) = *(&i) + 1;
  }
}