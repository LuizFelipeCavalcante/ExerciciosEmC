#include <stdio.h>

int main(){
    
    int p_A, m1, p_B, m2, c_A, m3, c_B, m4;
    int dur = 0;
    int dif = 0;
    scanf("%d:%d", &p_A, &m1);
    scanf("%d:%d", &c_B, &m2);
    scanf("%d:%d", &p_B, &m3);
    scanf("%d:%d", &c_A, &m4);


    dur = ((c_B - p_A) + (c_A - p_B))/2;
    dif = (c_B - dur) - p_A;
    dur = dur*60;
    printf("%d ", dur);
    printf("%d", dif);

    return 0;
}