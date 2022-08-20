/* pattern 3
===================================
           1  2  3  4  5
           1  2  3  4  5
           1  2  3  4  5
           1  2  3  4  5
           1  2  3  4  5
===================================
*/
#include <stdio.h>
int main() {
    for(int i=1;i<=5;i++){
        int t=1;
        for(int j=1;j<=5;j++){
            printf("%d\t",t);
            t++;
        }
        printf("\n");
    }

    return 0;
}