#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int main()
{
    int casos;
    scanf("%d", &casos);

    while (casos--) 
    {
        char str1[MAX_LEN+1], str2[MAX_LEN+1];
        scanf("%s%s", str1, str2);

        int len1 = strlen(str1), len2 = strlen(str2);
        int max_len = (len1 > len2) ? len1 : len2;

        /*
        	if(aux1 > aux2)
		{
			max = aux1;
		}else{
			max = aux2;
		}
        */

        for (int i = 0; i < max_len; i++) {
            if (i < len1) {
                putchar(str1[i]);
            }
            if (i < len2) {
                putchar(str2[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}