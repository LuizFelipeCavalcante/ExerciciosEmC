# include <stdio.h>

int consoante(char *str){
 
    if(str != '\0'){
        if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u'){
        return consoante(*str++);
    }else{
        
        return consoante(*str++)+1;
    }
    }
}


int main(){
    char str[100];
    scanf("s", str);
    printf("%d", consoante(*str));

    return 0;
}