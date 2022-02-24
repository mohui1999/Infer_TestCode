/*
* source: https://github.com/facebook/infer/issues/1104
* excepted result: none issue
* tool result: Dead Store(DEAD_STORE): 1
*/

int f(int *arr2)
{
    // The lines that trigger the bug
    const int x = 10;
    int arr[x];  // x被使用，但是报x未被使用

    // Junk that does not reference `x`
    int i; for(i=0;i<10;i++) { arr2[i] = arr[i] = i; }
}