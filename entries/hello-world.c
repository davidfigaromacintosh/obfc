#include <math.h>

long long s[] = {
    -7133320546324364288,
    -7844719714781991651
};

int main() {
	*(s+0) ^= (long long)(10e17 * M_E);
	*(s+1) ^= (long long)(10e17 * M_PI);

    for (char i = 0; i < 7; i++) {
        putchar(72 + (signed)((((i < 2) ? *(s+0) : *(s+1)) >> 8 * (i - (i > 1))) & 255));
        putchar(72 + (signed)((((i < 1) ? *(s+1) : *(s+0)) >> 8 * i) & 255));
    }
}
