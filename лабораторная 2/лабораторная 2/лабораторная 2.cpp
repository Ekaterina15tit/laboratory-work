#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    
        int i, s = 0;
        for (i = 21; i < 100; i += 3) // создаем выражение согласно заданию
        {
            s+= i;                      // для того чтобы было наглядно видно, что именно мы складываем
            printf("%d ", i);
        }
        printf("\nS=%d\n", s); // выводим на консоль
        system("PAUSE");
        return 0;
    
}

