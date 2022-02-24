int foo(void) {
        int i;
        for (;;) {
                i = 4;
                if (i == 4)
                        break;
        }

        return i;
}