# include <stdio.h>
int main()
{    
    char ch;
    int first = 1, k, n; 

    scanf("%d\n", &n);
    for(k = 1; k <= n; k++){
       ch = getchar();
       if  (first ==1){
             putchar(ch); 
             first=0;
        }else{
             putchar('-');
             putchar(ch);
    }
	}

    return 0;
}
