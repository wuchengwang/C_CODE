#include <stdio.h>

int main(){
    long long n, m;
    while(scanf("%lld %lld", &n, &m) == 2 && n != 0){
        double num_rabbit = (m - 2*n) / 2.0;
        //printf("%lf\n", num_rabbit);
        long long check_rabbit = (m - 2*n) / 2;
        //printf("%lf\n", (double)check_rabbit);
        double num_chiken = (4*n - m) / 2.0;
        long long check_chiken = (4*n - m) / 2;
        if(num_rabbit == (double)check_rabbit && num_chiken == (double)check_chiken && num_rabbit > 0.0 && num_chiken > 0.0){
            printf("%lld %lld\n", (long long)num_chiken, (long long)num_rabbit);
        }
        else printf("Error\n");
    }
    return 0;
}