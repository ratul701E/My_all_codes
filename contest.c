#include<stdio.h>

int main() {
    int m , n;
    while(scanf("%d %d",&m,&n) != EOF){
        int lpm;
        int flag = 0;
        for(int i = 1 ; i <= m*n; i++) {
            lpm =  ((i*m)+3);
            if(lpm % n == 4) {
                printf("%d\n",lpm);
                flag = 1;
                break;
            }
        }
        if(!flag) printf("No possible solution\n");
    }


}
/*
5 7
7 5
6 5
6 2
*/
