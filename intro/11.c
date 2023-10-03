void increment(int *p) {
    (*p)++;
}

int main() {
    int x = 42;
    int *p = &x;
    increment(p);
    printf("%d\n", x); // prints 43
    return 0;
}