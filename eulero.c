#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* eulero per oa 2020 10 03 */

int main(){

    double x0, v0, dt, omega2, x, v, T, t;
    int i, n;

    x0 = 1.0;
    v0 = 2.0;
    omega2 = 3.0;
    dt = 0.01;
    T = 20.0;
    t = 0.0;

    n = (int) (T/dt);
    printf("#T %lf omega2 %lf dt %lf n %d x0 %lf v0 %lf\n",
           T, omega2, dt, n, x0, v0);
    x = x0;
    v = v0;
    printf("%lf %lf %lf\n", t, x, v);

    for(i=0; i<n; i++){
        double vs;
        vs = v - omega2 * x * dt;
        x = x + v * dt;
        t += dt;
        v = vs;
        printf("%lf %lf %lf\n", t, x, v);
    }

    return 1;
}
