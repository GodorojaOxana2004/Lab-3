//int hello(int x) {
//    return x + 1;
// }
//будет ошибка, поскольку копмпилятор не увидит обозначение функции (undefined reference to hello(int))

static int hello(int x) {
    return x + 1;
}
