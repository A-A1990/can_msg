// // #include <stdio.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>
// #include <stdint.h>
// #include "string.h"

// #include <stdio.h>
// #include <stdint.h>

// #include <stdio.h>
// #include <stdint.h>

// struct Inner
// {
//     uint8_t a;
//     uint8_t b;
// };

// struct Outer
// {
//     struct Inner inner[50];
// };

// int main()
// {
//     struct Outer outer;

//     // Initializing the inner structures
//     for (int i = 0; i < 50; i++)
//     {
//         outer.inner[i].a = i + 1;
//         outer.inner[i].b = i + 2;
//     }

//     // Printing the 'a' values
//     for (int i = 0; i < 50; i++)
//     {
//         printf("%d\n", outer.inner[i].a);
//     }

//     return 0;
// }