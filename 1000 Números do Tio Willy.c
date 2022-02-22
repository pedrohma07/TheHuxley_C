#include <stdio.h>



int main(){
    int v[1000], n;
    int count = 0, countI = 0;
    do{  
        count = 0;
        countI = 0;
        for (int i = 0; i < 1000; i++) {
            scanf("%d", &v[i]);
            countI++;
            if(v[i] == -1)
                break;
        }
        if(v[countI-1] == -1)
            break;
        scanf("%d", &n);
        for (int i = 0; i < countI; i++) {
            if(v[i] == n)
                count++;
        }
        printf("%d appeared %d times\n", n, count);
        if(v[countI-1] == -1)
            break;
    }while(v[countI -1 ] != -1);
    return 0;
}
