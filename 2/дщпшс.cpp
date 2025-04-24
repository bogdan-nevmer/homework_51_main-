bool isPowerOf(int base, int number) {
    if (number < 1 || base < 2) {
        return false;
    }
    while (number > 1) {
        if (number % base != 0) {
            return false;
        }
        number /= base;
    }
    return true;
}