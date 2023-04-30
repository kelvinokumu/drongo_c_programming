#include <stdio.h>

void main()
{
    // for(int i = 0; i < 5; i++){
    //     printf("Hello %i \n", i);
    // }

    int odd = 0, even = 0;
    int arr[5] = {99, 88, 73, 234, 15};
    for (int j = 0; j < 5; j++)
    {
        // printf("Arrays %i \n", arr[3]);
        if (arr[j] % 2 == 0)
        {
            even = even + 1;
        } else {
            odd = odd + 1;
        }
    }
    printf("odd are %i \n",odd );
    printf("even are %i \n",even );
}