// #include <stdio.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>
// #include <stdint.h>
// #include "string.h"
// #include "sys/time.h"
// #include "global.h"

// uint16_t BMS_addresses[] =
//     {
//         0x101, 0x102, 0x103, 0x104,
//         0x106, 0x107, 0x108, 0x10A, 0x10B, 0x10C, 0x10E, 0x10F, 0x110, 0x112, 0x113, 0x114, 0x116, 0x117, 0x118,
//         0x11A, 0x11B, 0x11C, 0x11E, 0x11F, 0x120, 0x122, 0x123, 0x124, 0x126, 0x127, 0x128, 0x12A, 0x12B, 0x12C

// };

// char *checking_bms_msg(uint32_t hex_value, uint8_t *buffer, struct BMS_critical_msg *bms)
// {
//     //
//     char *text;
//     switch (hex_value)
//     {
//     case daisy_chain_addres:
//         text = "daisy_chain_addres";
//         bms->daisy_chain.addres = daisy_chain_addres;
//         memcpy(bms->daisy_chain.data, buffer, sizeof(bms->daisy_chain.data));
//         break;
//     case performance_monitoring_addres:
//         text = "performance_monitoring_addres";
//         bms->performance_monitoring.addres = performance_monitoring_addres;
//         memcpy(bms->performance_monitoring.data, buffer, sizeof(bms->performance_monitoring.data));

//         break;
//     case current_sensing_addres:
//         text = "current_sensing_addres";
//         bms->current_sensing.addres = current_sensing_addres;
//         memcpy(bms->current_sensing.data, buffer, sizeof(bms->current_sensing.data));

//         break;
//     case pack_voltage_addres:
//         text = "pack_voltage_addres";
//         bms->pack_voltage.addres = pack_voltage_addres;
//         memcpy(bms->pack_voltage.data, buffer, sizeof(bms->pack_voltage.data));

//         break;
//     case cell_voltages_min_max_mean_addres:
//         text = "cell_voltages_min_max_mean_addres";
//         bms->cell_voltages_min_max_mean.addres = cell_voltages_min_max_mean_addres;
//         memcpy(bms->cell_voltages_min_max_mean.data, buffer, sizeof(bms->cell_voltages_min_max_mean.data));

//         break;
//     case cell_temps_min_max_mean_addres:
//         text = "cell_temps_min_max_mean_addres";
//         bms->cell_temps_min_max_mean.addres = cell_temps_min_max_mean_addres;
//         memcpy(bms->cell_temps_min_max_mean.data, buffer, sizeof(bms->cell_temps_min_max_mean.data));

//         break;
//     case slave_0_cell_voltage_0_1_2_addres:
//         text = "slave_0_cell_voltage_0_1_2_addres";
//         bms->slave_0_cell_voltage_0_1_2.addres = slave_0_cell_voltage_0_1_2_addres;
//         memcpy(bms->slave_0_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_0_cell_voltage_0_1_2.data));

//         break;
//     case slave_0_cell_voltage_3_4_5_addres:
//         text = "slave_0_cell_voltage_3_4_5_addres";
//         bms->slave_0_cell_voltage_3_4_5.addres = slave_0_cell_voltage_3_4_5_addres;
//         memcpy(bms->slave_0_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_0_cell_voltage_3_4_5.data));

//         break;
//     case slave_0_cell_voltage_6_7_8_addres:
//         text = "slave_0_cell_voltage_6_7_8_addres";
//         bms->slave_0_cell_voltage_6_7_8.addres = slave_0_cell_voltage_6_7_8_addres;
//         memcpy(bms->slave_0_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_0_cell_voltage_6_7_8.data));

//         break;
//     case slave_1_cell_voltage_0_1_2_addres:
//         text = "slave_1_cell_voltage_0_1_2_addres";
//         bms->slave_1_cell_voltage_0_1_2.addres = slave_1_cell_voltage_0_1_2_addres;
//         memcpy(bms->slave_1_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_1_cell_voltage_0_1_2.data));

//         break;
//     case slave_1_cell_voltage_3_4_5_addres:
//         text = "slave_1_cell_voltage_3_4_5_addres";
//         bms->slave_1_cell_voltage_3_4_5.addres = slave_1_cell_voltage_3_4_5_addres;
//         memcpy(bms->slave_1_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_1_cell_voltage_3_4_5.data));

//         break;
//     case slave_1_cell_voltage_6_7_8_addres:
//         text = "slave_1_cell_voltage_6_7_8_addres";
//         bms->slave_1_cell_voltage_6_7_8.addres = slave_1_cell_voltage_6_7_8_addres;
//         memcpy(bms->slave_1_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_1_cell_voltage_6_7_8.data));

//         break;
//     case slave_2_cell_voltage_0_1_2_addres:
//         text = "slave_2_cell_voltage_0_1_2_addres";
//         bms->slave_2_cell_voltage_0_1_2.addres = slave_2_cell_voltage_0_1_2_addres;
//         memcpy(bms->slave_2_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_2_cell_voltage_0_1_2.data));

//         break;
//     case slave_2_cell_voltage_3_4_5_addres:
//         text = "slave_2_cell_voltage_3_4_5_addres";
//         bms->slave_2_cell_voltage_3_4_5.addres = slave_2_cell_voltage_3_4_5_addres;
//         memcpy(bms->slave_2_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_2_cell_voltage_3_4_5.data));

//         break;
//     case slave_2_cell_voltage_6_7_8_addres:
//         text = "slave_2_cell_voltage_6_7_8_addres";
//         bms->slave_2_cell_voltage_6_7_8.addres = slave_2_cell_voltage_6_7_8_addres;
//         memcpy(bms->slave_2_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_2_cell_voltage_6_7_8.data));

//         break;
//     case slave_3_cell_voltage_0_1_2_addres:
//         text = "slave_3_cell_voltage_0_1_2_addres";
//         bms->slave_3_cell_voltage_0_1_2.addres = slave_3_cell_voltage_0_1_2_addres;
//         memcpy(bms->slave_3_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_3_cell_voltage_0_1_2.data));

//         break;
//     case slave_3_cell_voltage_3_4_5_addres:
//         text = "slave_3_cell_voltage_3_4_5_addres";
//         bms->slave_3_cell_voltage_3_4_5.addres = slave_3_cell_voltage_3_4_5_addres;
//         memcpy(bms->slave_3_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_3_cell_voltage_3_4_5.data));

//         break;
//     case slave_3_cell_voltage_6_7_8_addres:
//         text = "slave_3_cell_voltage_6_7_8_addres";
//         bms->slave_3_cell_voltage_6_7_8.addres = slave_3_cell_voltage_6_7_8_addres;
//         memcpy(bms->slave_3_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_3_cell_voltage_6_7_8.data));

//         break;
//     case slave_4_cell_voltage_0_1_2_addres:
//         text = "slave_4_cell_voltage_0_1_2_addres";
//         bms->slave_4_cell_voltage_0_1_2.addres = slave_4_cell_voltage_0_1_2_addres;
//         memcpy(bms->slave_4_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_4_cell_voltage_0_1_2.data));

//         break;
//     case slave_4_cell_voltage_3_4_5_addres:
//         text = "slave_4_cell_voltage_3_4_5_addres";
//         bms->slave_4_cell_voltage_3_4_5.addres = slave_4_cell_voltage_3_4_5_addres;
//         memcpy(bms->slave_4_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_4_cell_voltage_3_4_5.data));

//         break;
//     case slave_4_cell_voltage_6_7_8_addres:
//         text = "slave_4_cell_voltage_6_7_8_addres";
//         bms->slave_4_cell_voltage_6_7_8.addres = slave_4_cell_voltage_6_7_8_addres;
//         memcpy(bms->slave_4_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_4_cell_voltage_6_7_8.data));

//         break;
//     case slave_0_cell_temp_0_1_2_addres:
//         text = "slave_0_cell_temp_0_1_2_addres";
//         bms->slave_0_cell_temp_0_1_2.addres = slave_0_cell_temp_0_1_2_addres;
//         memcpy(bms->slave_0_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_0_cell_temp_0_1_2.data));

//         break;
//     case slave_0_cell_temp_3_4_5_addres:
//         text = "slave_0_cell_temp_3_4_5_addres";
//         bms->slave_0_cell_temp_3_4_5.addres = slave_0_cell_temp_3_4_5_addres;
//         memcpy(bms->slave_0_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_0_cell_temp_3_4_5.data));

//         break;
//     case slave_0_cell_temp_6_7_8_addres:
//         text = "slave_0_cell_temp_6_7_8_addres";
//         bms->slave_0_cell_temp_6_7_8.addres = slave_0_cell_temp_6_7_8_addres;
//         memcpy(bms->slave_0_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_0_cell_temp_6_7_8.data));

//         break;
//     case slave_1_cell_temp_0_1_2_addres:
//         text = "slave_1_cell_temp_0_1_2_addres";
//         bms->slave_1_cell_temp_0_1_2.addres = slave_1_cell_temp_0_1_2_addres;
//         memcpy(bms->slave_1_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_1_cell_temp_0_1_2.data));

//         break;
//     case slave_1_cell_temp_3_4_5_addres:
//         text = "slave_1_cell_temp_3_4_5_addres";
//         bms->slave_1_cell_temp_3_4_5.addres = slave_1_cell_temp_3_4_5_addres;
//         memcpy(bms->slave_1_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_1_cell_temp_3_4_5.data));

//         break;
//     case slave_1_cell_temp_6_7_8_addres:
//         text = "slave_1_cell_temp_6_7_8_addres";
//         bms->slave_1_cell_temp_6_7_8.addres = slave_1_cell_temp_6_7_8_addres;
//         memcpy(bms->slave_1_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_1_cell_temp_6_7_8.data));

//         break;
//     case slave_2_cell_temp_0_1_2_addres:
//         text = "slave_2_cell_temp_0_1_2_addres";
//         bms->slave_2_cell_temp_0_1_2.addres = slave_2_cell_temp_0_1_2_addres;
//         memcpy(bms->slave_2_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_2_cell_temp_0_1_2.data));

//         break;
//     case slave_2_cell_temp_3_4_5_addres:
//         text = "slave_2_cell_temp_3_4_5_addres";
//         bms->slave_2_cell_temp_3_4_5.addres = slave_2_cell_temp_3_4_5_addres;
//         memcpy(bms->slave_2_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_2_cell_temp_3_4_5.data));

//         break;
//     case slave_2_cell_temp_6_7_8_addres:
//         text = "slave_2_cell_temp_6_7_8_addres";
//         bms->slave_2_cell_temp_6_7_8.addres = slave_2_cell_temp_6_7_8_addres;
//         memcpy(bms->slave_2_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_2_cell_temp_6_7_8.data));

//         break;
//     case slave_3_cell_temp_0_1_2_addres:
//         text = "slave_3_cell_temp_0_1_2_addres";
//         bms->slave_3_cell_temp_0_1_2.addres = slave_3_cell_temp_0_1_2_addres;
//         memcpy(bms->slave_3_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_3_cell_temp_0_1_2.data));

//         break;
//     case slave_3_cell_temp_3_4_5_addres:
//         text = "slave_3_cell_temp_3_4_5_addres";
//         bms->slave_3_cell_temp_3_4_5.addres = slave_3_cell_temp_3_4_5_addres;
//         memcpy(bms->slave_3_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_3_cell_temp_3_4_5.data));

//         break;
//     case slave_3_cell_temp_6_7_8_addres:
//         text = "slave_3_cell_temp_6_7_8_addres";
//         bms->slave_3_cell_temp_6_7_8.addres = slave_3_cell_temp_6_7_8_addres;
//         memcpy(bms->slave_3_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_3_cell_temp_6_7_8.data));

//         break;
//     case slave_4_cell_temp_0_1_2_addres:
//         text = "slave_4_cell_temp_0_1_2_addres";
//         bms->slave_4_cell_temp_0_1_2.addres = slave_4_cell_temp_0_1_2_addres;
//         memcpy(bms->slave_4_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_4_cell_temp_0_1_2.data));

//         break;
//     case slave_4_cell_temp_3_4_5_addres:
//         text = "slave_4_cell_temp_3_4_5_addres";
//         bms->slave_4_cell_temp_3_4_5.addres = slave_4_cell_temp_3_4_5_addres;
//         memcpy(bms->slave_4_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_4_cell_temp_3_4_5.data));

//         break;
//     case slave_4_cell_temp_6_7_8_addres:
//         text = "slave_4_cell_temp_6_7_8_addres";
//         bms->slave_4_cell_temp_6_7_8.addres = slave_4_cell_temp_6_7_8_addres;
//         memcpy(bms->slave_4_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_4_cell_temp_6_7_8.data));

//     default:
//         text = "Unknown address";
//         break;
//     }
//     return text;
// }

// // void printing2()
// // {
// //     for (int i = 0; i < sizeof(struct BMS_critical_msg) / sizeof(uint8_t); i++)
// //     {
// //         uint8_t *ptr = (uint8_t *)&bms + i;
// //         printf("Address %x,  %d", BMS_addresses[i], *ptr);
// //         printf("\n");
// //     }
// // }

// void generateRandom(uint8_t *buffer, size_t size)
// {
//     for (size_t i = 0; i < size; i++)
//     {
//         buffer[i] = rand() % 256;
//     }
// }

// void print_uint_t_array(uint8_t *array, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }

//     printf("\n");
// }

// // void printing_bms_packet()
// // {
// //     for (int i = 0; i < sizeof(struct BMS_critical_msg) / sizeof(uint8_t); i++)
// //     {
// //         uint8_t *ptr = (uint8_t *)&bms + i;
// //         printf("%d", *ptr);
// //         printf("\n");
// //     }
// // }

// int main()
// {
//     int index = 0;
//     int counter = 0;

//     struct json_payload_t json_payload;
//     struct twai_packet twai_packet;
//     struct BMS_critical_msg bms;
//     struct timeval current_time;

//     index = rand() % 6;
//     int min = 0x100;
//     int max = 0x12a;
//     uint32_t randomValue = (rand() % (max - min + 1)) + min;

//     uint8_t buffer2[2];
//     uint8_t buffer6[6];
//     uint8_t buffer8[8];

//     srand(time(NULL));

//     generateRandom(buffer2, sizeof(buffer2));
//     generateRandom(buffer6, sizeof(buffer6));
//     generateRandom(buffer8, sizeof(buffer8));

//     int msec = 0, ssec = 0, sending_data = 5000, reciving_data = 1000;
//     clock_t sending_timer = clock(), reciving_timer = clock();
//     int hex_value;
//     char *text;

//     do
//     {
//         clock_t sending_difference = clock() - sending_timer;
//         msec = sending_difference * 1000 / CLOCKS_PER_SEC;

//         clock_t reciving_difference = clock() - reciving_timer;
//         ssec = reciving_difference * 1000 / CLOCKS_PER_SEC;

//         if (ssec >= reciving_data)
//         {
//             printf("Begining size of bms is: %d out of %d ,  at counter : %d \n", sizeof(bms), sizeof(struct BMS_critical_msg), counter);

//             randomValue = (rand() % (max - min + 1)) + min;
//             twai_packet.identifier = randomValue;

//             if (twai_packet.identifier == 0x100)
//             {
//                 generateRandom(buffer2, sizeof(buffer2));
//                 // *twai_packet.data = buffer2;
//                 // printf("ID: 0x%x, Data:  ", twai_packet.identifier);
//                 // print_uint_t_array(twai_packet.data, sizeof(buffer2));
//                 text = checking_bms_msg(twai_packet.identifier, buffer2, &bms);
//             }
//             else if (twai_packet.identifier == 0x102 || twai_packet.identifier == 0x103)
//             {
//                 generateRandom(buffer6, sizeof(buffer6));
//                 // printf("ID: 0x%x, Data:  ", twai_packet.identifier);
//                 // print_uint_t_array(twai_packet.data, sizeof(buffer6));
//                 text = checking_bms_msg(twai_packet.identifier, buffer6, &bms);
//             }
//             else
//             {
//                 generateRandom(buffer8, sizeof(buffer8));
//                 // printf("ID: 0x%x, Data:  ", twai_packet.identifier);
//                 // print_uint_t_array(twai_packet.data, sizeof(buffer8));
//                 text = checking_bms_msg(twai_packet.identifier, buffer8, &bms);
//             }

//             printf("Text is %s\n", text);
//             // printf("size of bms is: %d out of %d ,  at counter : %d \n", sizeof(bms), sizeof(struct BMS_critical_msg), counter);

//             // printf("REcived\n");
//             reciving_timer = clock();
//             counter++;
//         }

//         // if (msec >= sending_data)
//         if (counter >= 5)
//         {

//             // printf("Hex value is 0x%x: %s\n", twai_packet.identifier, text);
//             // printing_bms_packet();
//             printf("Done\n");
//             printf("Last size of bms is: %d out of %d ,  at counter : %d \n", sizeof(bms), sizeof(struct BMS_critical_msg), counter);

//             bzero(json_payload.data, sizeof(json_payload.data));
//             gettimeofday(&current_time, NULL);

//             sprintf(json_payload.data, "{t:%lld", current_time.tv_sec);
//             for (int i = 0; i < sizeof(bms); i++)
//             {
//                 sprintf(json_payload.data + strlen(json_payload.data), ",%02X", twai_packet.data[i]);
//             }

//             sprintf(json_payload.data + strlen(json_payload.data), "]}");
//             json_payload.len = strlen(json_payload.data);

//             // printing2();
//             memset(&bms, 0, sizeof(struct BMS_critical_msg));
//             sending_timer = clock();
//             counter = 0;
//             fflush(stdout);
//         }

//     } while (1);

//     // for (hex_value = 0x100; hex_value <= 0x130; hex_value++)

//     // {
//     // text = checking_bms_msg(hex_value);
//     // printf("Hex value is 0x%x: %s\n", hex_value, text);
//     // fflush(stdout);
//     // }
// }
