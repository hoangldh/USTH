/*  PSEUDOCODE

    function isSphenic(n):
        if n < 30:
            return 0
        
        count <- 0

        i <- 2
        while i*i <= n AND count <= 3:
            exponent <- 0
            
            while n mod i == 0:
                n <- n / i
                exponent <- exponent + 1
            
            if exponent > 1:
                return 0
            
            count <- count + 1
            i <- i + 1
        
        if n > 1:
            count <- count + 1
            n <- 1
        
        if count == 3 AND n == 1:
            return 1
        else
            return 0
    
    function main():
        read n
        if isSphenic(n):
            print "n is sphenic"
        else
            print "n is not sphenic"
*/

/*  COMPLEXITY

    for loop i*i <= n
        i <= sqrt(n)
        n / i
    time complexity: O(sqrt(n))
*/

#include <stdio.h>
#include<stdlib.h>

int isSphenic(int a) {
    int count = 0;
    int i, exponent;

    if (a < 30) { // smallest sphenic = 30
        return 0;
    }

    for (int i = 2; i*i <= a && count <= 3; i++) {
        if (a % i == 0) {
            exponent = 0;
            
            while (a % i == 0) {
                a /= i;
                exponent++;

                if (exponent > 1) {
                    return 0;
                }
            }

            count++;
        }
    }

    if (a > 1) { // last prime
        count++;
        a = 1;
    }

    if (count == 3 && a == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    printf("Enter a natural number: ");
    int n; scanf("%d", &n);

    if (isSphenic(n)) {
        printf("%d is a sphenic number.\n", n);
    }
    else {
        printf("%d is not a sphenic number.\n", n);
    }

    return 0;
}