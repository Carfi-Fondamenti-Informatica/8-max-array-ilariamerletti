#include "lib.h"
int i;
float massimo ( float B[], int dim ){
    float max=0;
    for(i=0;i<dim; i++){
        if( B[i]> max){
            max= B[i];
        }
    }
    return max;
}
