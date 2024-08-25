#include <stdlib.h>

typedef struct {
    size_t num;
    int data[];
} widget;

void *func(size_t array_size){
    widget *p = (widget *)malloc(sizeof(widget)+sizeof(int)*array_size);
    
    if (p== NULL){
        return NULL;
    }

    p->num = array_size;
    for (size_t i=0;i<p->num;++i){
        p->data[i] = 17;
    }
    return p;
}


int main() {
    size_t size = 10;
    widget *w = (widget *)func(size);
    
    if (w != NULL) {
        free(w);
    }

    return 0;
}