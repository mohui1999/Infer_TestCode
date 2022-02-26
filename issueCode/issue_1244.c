void myfun(int i) {
    int j;
    for (; j = i * 2+ 1, j < 10; i = j) { j++; }
    return;
}

/*
issue_1244.c:3: error: UNINITIALIZED_VALUE
  The value read from j was never initialized.
  1.   void myfun(int i) {
  2.       int j;
  3. >     for (; j = i * 2+ 1, j < 10; i = j) { j++; }
  4.       return;
  */