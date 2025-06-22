#include <iostream>
#include <iomanip>

struct tRacional {
    int a;
    int b;
};

int mdc(int x, int y) {
    if (y == 0)
        return x;
    return mdc(y, x % y);
}

struct tRacional reduz(struct tRacional r) {
    struct tRacional result = r;
    int div = mdc(abs(result.a), abs(result.b));
    result.a /= div;
    result.b /= div;

    // if (result.b < 0) {
    //     result.a *= -1;
    //     result.b *= -1;
    // }

    return result;
}

struct tRacional negativo(struct tRacional r) {
    int a = r.a * -1;
    struct tRacional result = {a, r.b};
    return result;
}

struct tRacional mult(struct tRacional r1, struct tRacional r2) {
    struct tRacional result;
    result.a = r1.a * r2.a;
    result.b = r1.b * r2.b;
    return reduz(result);
}

struct tRacional div(struct tRacional r1, struct tRacional r2) {
    struct tRacional r2Reversed = {r2.b,r2.a};
    return mult(r1, r2Reversed);
    // struct tRacional result;
    // result.a = r1.a / r2.a;
    // result.b = r1.b / r2.b;
    // return reduz(result);
}

struct tRacional soma(struct tRacional r1, struct tRacional r2) {
    int a = (r1.a * r2.b) + (r2.a * r1.b);
    int b = r2.b* r1.b;
    struct tRacional r = {a,b};
    return reduz(r);
}

struct tRacional sub(struct tRacional r1, struct tRacional r2) {
    return soma(r1, negativo(r2));
}

int main() {
    while (!std::cin.eof()) {
        int a,b,c,d;
        char op;
        
        std::cin >> a >> b;
        struct tRacional r1 = {a,b};
        std::cin >> op;
        
        std::cin >> c >> d;
        struct tRacional r2 = {c,d};

        struct tRacional r;
        switch (op) {
            case '*':
                r = mult(r1, r2);
                break;
            case '/':
                r = div(r1, r2);
                break;
            case '+':
                r = soma(r1, r2);
                break;
            case '-':
                r = sub(r1, r2);
                break;
        }
        
        std::cout << r.a << " " << r.b << std::endl;

    }

    return 0;
}