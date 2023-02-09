int get_inteiro(){
    int out;
    do{
        printf("Digite um numero inteiro positivo: ");
        scanf ("%d",&out);
    }while(out < 0);
    return out;
}

int hiperfatorial(int num){
    int i, hiperf=1;

    for (i=0; i <=num; i++){
        hiperf *= pow (i,i);
    }
    return hiperf;
}

void print_int(int h){
    printf ("Hiperfatorial= %d", h);
}
