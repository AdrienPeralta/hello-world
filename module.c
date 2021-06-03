#include <stdio.h>

int addone(int x){
    return x+1;
}

int fibonacci(int n){
    
    int fb0 = 0;
    int fb1 = 1;
    int fbtot;
    for (int i=2; i<11; i++ ){
        fbtot = fb0 + fb1;
        fb0 = fb1;
        fb1 = fbtot;
    }

    return fbtot;
}

int pairs(int t[],int len) {
    for (int i = 0; i<len; i+=2){
        t[i/2] = i;
    }
}
char print_tableau(int t[], int len){
    for (int i = 0; i<len/2; i++){
        printf("%d-ème élément = %d\n",i,t[i]);
    }
}

int array_sum(int t1[], int t2[], int len){
    for (int i = 0; i<len; i++){
        t1[i] = t1 [i] + t2[i];
    }
}

int mylen(char s[]){
    int res = 0;
    while (s[res] != '\0'){
        res++;
    }
    return res;
}

