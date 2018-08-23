#include <stdio.h>
#include <math.h>
const  long double max =1000000000000000;
 long long int t , a, b, x, n, c, d, h,m,h2,prop2;
 long double  prop1,rest;
 long long int i = 0;
 long long int s = 0;
 long long int counter = 0;
int main(){
    scanf("%lld",&t);
    while(s != t){ 
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&x,&n,&c,&d,&m);
                    h2 = (a*(x+n)+b);
                    if(h2 <= m && c>0){
                        printf("%lld\n",counter);
                        counter = 0; 
                        i = 0;
                        s = s+1;
                    continue;
                    }
                    else if(h2<= m && c == 0){
                        counter = n;
                        printf("%lld\n",counter);
                        counter = 0;
                        i = 0;
                        s = s+1;
                        continue;  
                    }
                    else if(h2 > m) {
                        prop1 = h2/m;
                        prop2 = h2/m;
                        rest = (prop1-prop2)*10;
                    while(i <= m){
                         h =(a*(x+i)+b)% m ;
                         if(h>=c && h<=d){
                        counter = counter + 1;
                    } 
                    i = i+1;
                    }
                    counter = counter * prop2; 
                    while(i <= (m+rest)){
                        h =(a*(x+i)+b)% m ;
                        if(h>=c && h<=d){
                        counter = counter + 1;
                    } 
                    i = i+1;
                    }
                    i = 0;
                    }
                     
        printf("%lld\n",counter);
        counter = 0;
        i = 0;
        s = s+1;
                }
return 0;
}
