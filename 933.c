
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
    int request_cnt;
    

} RecentCounter;


RecentCounter* recentCounterCreate() {
    
    return NULL;
}

int recentCounterPing(RecentCounter* obj, int t) {
    
    return 0;
}

void recentCounterFree(RecentCounter* obj) {
    if(obj)
    {
        free(obj);
        obj = NULL;
    }
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/

int main(int argc, char *argv[]) {

    return 0;
}