long leaf(long y) {
    return y + 2;
}

long top(long x) {
    return leaf(x - 5) * 2;
}

long main() {
    return top(100);
}

