#include <stdio.h>
int main() {
    int arr[3][4] = {{1,1,1,0},{1,0,0,1},{1,1,1,1}};
    int maxCount = 0;
    int maxidx =-1;
    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; j < 4; j++) {
            if(arr[i][j]==1) count++;
        }
        if(maxCount<count){
            maxCount = count;
            maxidx = i;
        }
       printf ("\n");
    }
         printf("maximumxcount is %d and their index number is %d",maxCount,maxidx);
    return 0;
}
