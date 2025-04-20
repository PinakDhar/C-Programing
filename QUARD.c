#include <stdio.h>
#include <math.h>

int main()
{
    float eldm;
    float av, kv, tz, A, as, ks, b2, b4, z, e, r0, c4, ep, dn, n;

    av = -15.505;
    kv = -1.825;
    z = 64;
    e = 1.44;
    r0 = 1.215;
    c4 = 1.297;
    dn = 4.687;

    printf("Enter the value of as :");
    scanf("%f", &as);
    printf("Enter the value of ks:");
    scanf("%f", &ks);
    printf("Enter the value of tz: ");
    scanf("%f", &tz);

    printf("Enter the value of A: ");
    scanf("%f", &A);

    printf("Enter the value of b2: ");
    scanf("%f", &b2);

    printf("Enter the value of b4: ");
    scanf("%f", &b4);

    printf("Enter the value of n: ");
    scanf("%f", &n);

    if ((int)n % 2 != 0)
        ep = dn / pow(n, 1.0 / 3.0);
    else
        ep = 0;

    eldm = (av * (1 + ((4 * kv) / pow(A, 2)) * (tz * (tz + 1))) * A) + (as * (1 + ((4 * ks) / pow(A, 2)) * (tz * (tz + 1))) * pow(A, 2.0 / 3.0)) * ((b2 * b2) + (b4 * b4)) + ((3 * pow(z, 2) * e) / (5 * r0 * pow(A, 1.0 / 3.0))) + ((c4 * z * z) / A) + ep;

    printf("eldm: %f\n", eldm);

    return 0;
}