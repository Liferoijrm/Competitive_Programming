 #include <stdio.h> 
    #include <string.h>
     
    int main(){
     
        long long int n, m, verdes = 0;
     
        scanf("%lld %lld", &n, &m);
 
        if (n%2 != 0){
            if(m%2 != 0){
                long long int a = ((n/2)+1);
                long long int b = ((m/2)+1);
                verdes+=a*b;
                verdes+=(n-a)*(m-b);
            }
            if(m%2 == 0){
                long long int a = ((n/2)+1);
                long long int b = (m/2);
                verdes+=a*b;
                verdes+=(n-a)*(m-b);
            }
            printf("%lld\n", verdes);
        }
        else{
            if(m%2 != 0){
                long long int a = (n/2);
                long long int b = ((m/2)+1);
                verdes+=a*b;
                verdes+=(n-a)*(m-b);
            }
            if(m%2 == 0){
                long long int a = (n/2);
                long long int b = (m/2);
                verdes+=a*b;
                verdes+=(n-a)*(m-b);
            }
            printf("%lld\n", verdes);
        }
     
        return 0;
    }