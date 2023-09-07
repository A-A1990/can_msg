// #include <stdio.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>
// #include <stdint.h>
// #include "string.h"

// struct twai_packet
// {
//     uint32_t identifier;      /**< 11 or 29 bit identifier */
//     uint8_t data_length_code; /**< Data length code */
//     uint8_t data[8];          /**< Data bytes (not relevant in RTR frame) */
// };

// void generateRandom(uint8_t *buffer, size_t size)
// {
//     for (size_t i = 0; i < size; i++)
//     {
//         buffer[i] = rand() % 256;
//     }
// }

// void print_uint8_t_array(uint8_t *array)
// {
//     int size = sizeof(array) / sizeof(array[0]);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// int main()
// {

//     int index = 0;
//     int counter = 0;
//     struct twai_packet packet;

//     index = rand() % 6;
//     int min = 0x100;
//     int max = 0x130;
//     int randomValue = (rand() % (max - min + 1)) + min;

//     uint8_t buffer2[2];
//     uint8_t buffer6[6];
//     uint8_t buffer8[8];
//     srand(time(NULL));

//     generateRandom(buffer2, sizeof(buffer2));
//     generateRandom(buffer6, sizeof(buffer6));
//     generateRandom(buffer8, sizeof(buffer8));

//     int hex_value;
//     char *text;

//    for (size_t i = 0; i < 10; i++)
//     {
//         randomValue = (rand() % (max - min + 1)) + min;
//         packet.identifier = randomValue;

//         generateRandom(buffer6, sizeof(buffer6));

//         //*packet.data = *buffer6;
//         memcpy(packet.data, buffer6, sizeof(packet.data));

//         printf("ID: 0x%x, Data: 0x%x ", packet.identifier, packet.data);
//         print_uint8_t_array(packet.data);

//         fflush(stdout);
//     }

//     // uint8_t a[] = "0x12";
//     // char b[] = "0x56";
//     // char *c;

//     // printf("1 X: %s, Y: %s\n", a, b);

//     // memcpy(b, a, sizeof(a));

//     // printf("2 X: %s, Y: %s", a, b);

//     // // b = "Ahmed";
//     // printf("3 X: %s, Y: %s", a, b);

//     return 0;
// }
