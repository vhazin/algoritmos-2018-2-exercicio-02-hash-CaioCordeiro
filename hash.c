#include <stdio.h>
#include <math.h>
const  long double max =1000000000000000;
 long long int t , a, b, x, n, c, d, h,m;
 long long int i = 0;
 long long int s = 0;
 long long int counter = 0;
int main(){
    scanf("%lld",&t);

    while(i != t){ 
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&x,&n,&c,&d,&m);
                while(s <= n){
                    h =((a*(x+s)+b)%m);
                    printf("%llu",h);
                    if(h>=c && h<=d){
                        counter = counter + 1;
                    } 
                    s = s+1;
        }
        printf("%lld\n",counter);
        counter = 0;
        s = 0;
        i = i+1;
                }
        i=0;
return 0;
}
