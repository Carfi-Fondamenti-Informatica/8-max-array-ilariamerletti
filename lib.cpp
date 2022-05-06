int i;
float massimo( float a[], int dim ){
    float max= a[0];
    for(i=0;i<dim; i++){
        if( a[i]> max){
            max= a[i];
        }
    }
    return max;
}
