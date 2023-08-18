template <typename T, typename U> void foo(T, U) { }
template <typename T, typename U> void foo(T*, U*) { }
template <> void foo<int*, int*>(int*, int*) { }

int main() {
    int x;
    foo(&x, &x);
}