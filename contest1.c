#include<stdio.h>
int main() {

    int n , m;
    int _count = 1;
        while(scanf("%d %d",&n,&m) != EOF) {
            printf("Test Case %d:\n",_count);
            int array[n][m];
            for(int i = 0 ; i < n ; i++) {
                for(int j = 0 ; j < m ; j++) {
                    int temp ;
                    scanf("%d",&temp);
                    array[i][j] = temp;
                }
            }
            for(int i = 0 ; i < n ; i++) {
                int min = array[i][0];
                int pos = 0;
                for(int j = 1 ; j < m ; j++) {
                    if(array[i][j] < min) {
                        min = array[i][j];
                        pos = j;
                    }
                }
               printf("Bin %d:Smallest number card - %d , position %d\n",i+1,min,pos+1);
            }
            _count++;
        }

}
