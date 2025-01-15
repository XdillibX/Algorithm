#include <stdio.h>

int main(void) {
    int f, s, t;
    scanf("%d %d %d", &f, &s, &t);
    
    int max = (f >= s ? f : s) >= t ? (f >= s ? f : s) : t;
    
    
    if (f==s && s==t) printf("%d", 10000 + f * 1000);
    else if (f==s) printf("%d", 1000 + f * 100);
    else if (f==t) printf("%d", 1000 + f * 100);
    else if (s==t) printf("%d", 1000 + s * 100);
    else printf("%d", max * 100);
    
    
    return 0;
}
