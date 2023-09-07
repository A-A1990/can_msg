// #include <stdio.h>
#include <stdint.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdint.h>
#include "string.h"
#include "global.h"
#include "sys/time.h"

#include <stdio.h>
#include <stdint.h>

#include <stdio.h>
#include <stdint.h>

char *checking_bms_msg(uint32_t hex_value, uint8_t *buffer, struct BMS_critical_msg *bms)
{
    //
    char *text;
    switch (hex_value)
    {
    case daisy_chain_addres:
        text = "daisy_chain_addres";
        bms->daisy_chain.addres = daisy_chain_addres;
        memcpy(bms->daisy_chain.data, buffer, sizeof(bms->daisy_chain.data));
        break;
    case performance_monitoring_addres:
        text = "performance_monitoring_addres";
        bms->performance_monitoring.addres = performance_monitoring_addres;
        memcpy(bms->performance_monitoring.data, buffer, sizeof(bms->performance_monitoring.data));

        break;
    case current_sensing_addres:
        text = "current_sensing_addres";
        bms->current_sensing.addres = current_sensing_addres;
        memcpy(bms->current_sensing.data, buffer, sizeof(bms->current_sensing.data));

        break;
    case pack_voltage_addres:
        text = "pack_voltage_addres";
        bms->pack_voltage.addres = pack_voltage_addres;
        memcpy(bms->pack_voltage.data, buffer, sizeof(bms->pack_voltage.data));

        break;
    case cell_voltages_min_max_mean_addres:
        text = "cell_voltages_min_max_mean_addres";
        bms->cell_voltages_min_max_mean.addres = cell_voltages_min_max_mean_addres;
        memcpy(bms->cell_voltages_min_max_mean.data, buffer, sizeof(bms->cell_voltages_min_max_mean.data));

        break;
    case cell_temps_min_max_mean_addres:
        text = "cell_temps_min_max_mean_addres";
        bms->cell_temps_min_max_mean.addres = cell_temps_min_max_mean_addres;
        memcpy(bms->cell_temps_min_max_mean.data, buffer, sizeof(bms->cell_temps_min_max_mean.data));

        break;
    case slave_0_cell_voltage_0_1_2_addres:
        text = "slave_0_cell_voltage_0_1_2_addres";
        bms->slave_0_cell_voltage_0_1_2.addres = slave_0_cell_voltage_0_1_2_addres;
        memcpy(bms->slave_0_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_0_cell_voltage_0_1_2.data));

        break;
    case slave_0_cell_voltage_3_4_5_addres:
        text = "slave_0_cell_voltage_3_4_5_addres";
        bms->slave_0_cell_voltage_3_4_5.addres = slave_0_cell_voltage_3_4_5_addres;
        memcpy(bms->slave_0_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_0_cell_voltage_3_4_5.data));

        break;
    case slave_0_cell_voltage_6_7_8_addres:
        text = "slave_0_cell_voltage_6_7_8_addres";
        bms->slave_0_cell_voltage_6_7_8.addres = slave_0_cell_voltage_6_7_8_addres;
        memcpy(bms->slave_0_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_0_cell_voltage_6_7_8.data));

        break;
    case slave_1_cell_voltage_0_1_2_addres:
        text = "slave_1_cell_voltage_0_1_2_addres";
        bms->slave_1_cell_voltage_0_1_2.addres = slave_1_cell_voltage_0_1_2_addres;
        memcpy(bms->slave_1_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_1_cell_voltage_0_1_2.data));

        break;
    case slave_1_cell_voltage_3_4_5_addres:
        text = "slave_1_cell_voltage_3_4_5_addres";
        bms->slave_1_cell_voltage_3_4_5.addres = slave_1_cell_voltage_3_4_5_addres;
        memcpy(bms->slave_1_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_1_cell_voltage_3_4_5.data));

        break;
    case slave_1_cell_voltage_6_7_8_addres:
        text = "slave_1_cell_voltage_6_7_8_addres";
        bms->slave_1_cell_voltage_6_7_8.addres = slave_1_cell_voltage_6_7_8_addres;
        memcpy(bms->slave_1_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_1_cell_voltage_6_7_8.data));

        break;
    case slave_2_cell_voltage_0_1_2_addres:
        text = "slave_2_cell_voltage_0_1_2_addres";
        bms->slave_2_cell_voltage_0_1_2.addres = slave_2_cell_voltage_0_1_2_addres;
        memcpy(bms->slave_2_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_2_cell_voltage_0_1_2.data));

        break;
    case slave_2_cell_voltage_3_4_5_addres:
        text = "slave_2_cell_voltage_3_4_5_addres";
        bms->slave_2_cell_voltage_3_4_5.addres = slave_2_cell_voltage_3_4_5_addres;
        memcpy(bms->slave_2_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_2_cell_voltage_3_4_5.data));

        break;
    case slave_2_cell_voltage_6_7_8_addres:
        text = "slave_2_cell_voltage_6_7_8_addres";
        bms->slave_2_cell_voltage_6_7_8.addres = slave_2_cell_voltage_6_7_8_addres;
        memcpy(bms->slave_2_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_2_cell_voltage_6_7_8.data));

        break;
    case slave_3_cell_voltage_0_1_2_addres:
        text = "slave_3_cell_voltage_0_1_2_addres";
        bms->slave_3_cell_voltage_0_1_2.addres = slave_3_cell_voltage_0_1_2_addres;
        memcpy(bms->slave_3_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_3_cell_voltage_0_1_2.data));

        break;
    case slave_3_cell_voltage_3_4_5_addres:
        text = "slave_3_cell_voltage_3_4_5_addres";
        bms->slave_3_cell_voltage_3_4_5.addres = slave_3_cell_voltage_3_4_5_addres;
        memcpy(bms->slave_3_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_3_cell_voltage_3_4_5.data));

        break;
    case slave_3_cell_voltage_6_7_8_addres:
        text = "slave_3_cell_voltage_6_7_8_addres";
        bms->slave_3_cell_voltage_6_7_8.addres = slave_3_cell_voltage_6_7_8_addres;
        memcpy(bms->slave_3_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_3_cell_voltage_6_7_8.data));

        break;
    case slave_4_cell_voltage_0_1_2_addres:
        text = "slave_4_cell_voltage_0_1_2_addres";
        bms->slave_4_cell_voltage_0_1_2.addres = slave_4_cell_voltage_0_1_2_addres;
        memcpy(bms->slave_4_cell_voltage_0_1_2.data, buffer, sizeof(bms->slave_4_cell_voltage_0_1_2.data));

        break;
    case slave_4_cell_voltage_3_4_5_addres:
        text = "slave_4_cell_voltage_3_4_5_addres";
        bms->slave_4_cell_voltage_3_4_5.addres = slave_4_cell_voltage_3_4_5_addres;
        memcpy(bms->slave_4_cell_voltage_3_4_5.data, buffer, sizeof(bms->slave_4_cell_voltage_3_4_5.data));

        break;
    case slave_4_cell_voltage_6_7_8_addres:
        text = "slave_4_cell_voltage_6_7_8_addres";
        bms->slave_4_cell_voltage_6_7_8.addres = slave_4_cell_voltage_6_7_8_addres;
        memcpy(bms->slave_4_cell_voltage_6_7_8.data, buffer, sizeof(bms->slave_4_cell_voltage_6_7_8.data));

        break;
    case slave_0_cell_temp_0_1_2_addres:
        text = "slave_0_cell_temp_0_1_2_addres";
        bms->slave_0_cell_temp_0_1_2.addres = slave_0_cell_temp_0_1_2_addres;
        memcpy(bms->slave_0_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_0_cell_temp_0_1_2.data));

        break;
    case slave_0_cell_temp_3_4_5_addres:
        text = "slave_0_cell_temp_3_4_5_addres";
        bms->slave_0_cell_temp_3_4_5.addres = slave_0_cell_temp_3_4_5_addres;
        memcpy(bms->slave_0_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_0_cell_temp_3_4_5.data));

        break;
    case slave_0_cell_temp_6_7_8_addres:
        text = "slave_0_cell_temp_6_7_8_addres";
        bms->slave_0_cell_temp_6_7_8.addres = slave_0_cell_temp_6_7_8_addres;
        memcpy(bms->slave_0_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_0_cell_temp_6_7_8.data));

        break;
    case slave_1_cell_temp_0_1_2_addres:
        text = "slave_1_cell_temp_0_1_2_addres";
        bms->slave_1_cell_temp_0_1_2.addres = slave_1_cell_temp_0_1_2_addres;
        memcpy(bms->slave_1_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_1_cell_temp_0_1_2.data));

        break;
    case slave_1_cell_temp_3_4_5_addres:
        text = "slave_1_cell_temp_3_4_5_addres";
        bms->slave_1_cell_temp_3_4_5.addres = slave_1_cell_temp_3_4_5_addres;
        memcpy(bms->slave_1_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_1_cell_temp_3_4_5.data));

        break;
    case slave_1_cell_temp_6_7_8_addres:
        text = "slave_1_cell_temp_6_7_8_addres";
        bms->slave_1_cell_temp_6_7_8.addres = slave_1_cell_temp_6_7_8_addres;
        memcpy(bms->slave_1_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_1_cell_temp_6_7_8.data));

        break;
    case slave_2_cell_temp_0_1_2_addres:
        text = "slave_2_cell_temp_0_1_2_addres";
        bms->slave_2_cell_temp_0_1_2.addres = slave_2_cell_temp_0_1_2_addres;
        memcpy(bms->slave_2_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_2_cell_temp_0_1_2.data));

        break;
    case slave_2_cell_temp_3_4_5_addres:
        text = "slave_2_cell_temp_3_4_5_addres";
        bms->slave_2_cell_temp_3_4_5.addres = slave_2_cell_temp_3_4_5_addres;
        memcpy(bms->slave_2_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_2_cell_temp_3_4_5.data));

        break;
    case slave_2_cell_temp_6_7_8_addres:
        text = "slave_2_cell_temp_6_7_8_addres";
        bms->slave_2_cell_temp_6_7_8.addres = slave_2_cell_temp_6_7_8_addres;
        memcpy(bms->slave_2_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_2_cell_temp_6_7_8.data));

        break;
    case slave_3_cell_temp_0_1_2_addres:
        text = "slave_3_cell_temp_0_1_2_addres";
        bms->slave_3_cell_temp_0_1_2.addres = slave_3_cell_temp_0_1_2_addres;
        memcpy(bms->slave_3_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_3_cell_temp_0_1_2.data));

        break;
    case slave_3_cell_temp_3_4_5_addres:
        text = "slave_3_cell_temp_3_4_5_addres";
        bms->slave_3_cell_temp_3_4_5.addres = slave_3_cell_temp_3_4_5_addres;
        memcpy(bms->slave_3_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_3_cell_temp_3_4_5.data));

        break;
    case slave_3_cell_temp_6_7_8_addres:
        text = "slave_3_cell_temp_6_7_8_addres";
        bms->slave_3_cell_temp_6_7_8.addres = slave_3_cell_temp_6_7_8_addres;
        memcpy(bms->slave_3_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_3_cell_temp_6_7_8.data));

        break;
    case slave_4_cell_temp_0_1_2_addres:
        text = "slave_4_cell_temp_0_1_2_addres";
        bms->slave_4_cell_temp_0_1_2.addres = slave_4_cell_temp_0_1_2_addres;
        memcpy(bms->slave_4_cell_temp_0_1_2.data, buffer, sizeof(bms->slave_4_cell_temp_0_1_2.data));

        break;
    case slave_4_cell_temp_3_4_5_addres:
        text = "slave_4_cell_temp_3_4_5_addres";
        bms->slave_4_cell_temp_3_4_5.addres = slave_4_cell_temp_3_4_5_addres;
        memcpy(bms->slave_4_cell_temp_3_4_5.data, buffer, sizeof(bms->slave_4_cell_temp_3_4_5.data));

        break;
    case slave_4_cell_temp_6_7_8_addres:
        text = "slave_4_cell_temp_6_7_8_addres";
        bms->slave_4_cell_temp_6_7_8.addres = slave_4_cell_temp_6_7_8_addres;
        memcpy(bms->slave_4_cell_temp_6_7_8.data, buffer, sizeof(bms->slave_4_cell_temp_6_7_8.data));

    default:
        text = "Unknown address";
        break;
    }
    return text;
}

void generateRandom(uint8_t *buffer, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        buffer[i] = rand() % 256;
    }
}

struct BMS_critical_msg init_addresses()
{
    struct BMS_critical_msg bms =
        {
            .daisy_chain.addres = daisy_chain_addres,
            .performance_monitoring.addres = performance_monitoring_addres,
            .current_sensing.addres = current_sensing_addres,
            .pack_voltage.addres = pack_voltage_addres,
            .cell_voltages_min_max_mean.addres = cell_voltages_min_max_mean_addres,
            .cell_temps_min_max_mean.addres = cell_temps_min_max_mean_addres,
            .slave_0_cell_voltage_0_1_2.addres = slave_0_cell_voltage_0_1_2_addres,
            .slave_0_cell_voltage_3_4_5.addres = slave_0_cell_voltage_3_4_5_addres,
            .slave_0_cell_voltage_6_7_8.addres = slave_0_cell_voltage_6_7_8_addres,
            .slave_1_cell_voltage_0_1_2.addres = slave_1_cell_voltage_0_1_2_addres,
            .slave_1_cell_voltage_3_4_5.addres = slave_1_cell_voltage_3_4_5_addres,
            .slave_1_cell_voltage_6_7_8.addres = slave_1_cell_voltage_6_7_8_addres,
            .slave_2_cell_voltage_0_1_2.addres = slave_2_cell_voltage_0_1_2_addres,
            .slave_2_cell_voltage_3_4_5.addres = slave_2_cell_voltage_3_4_5_addres,
            .slave_2_cell_voltage_6_7_8.addres = slave_2_cell_voltage_6_7_8_addres,
            .slave_3_cell_voltage_0_1_2.addres = slave_3_cell_voltage_0_1_2_addres,
            .slave_3_cell_voltage_3_4_5.addres = slave_3_cell_voltage_3_4_5_addres,
            .slave_3_cell_voltage_6_7_8.addres = slave_3_cell_voltage_6_7_8_addres,
            .slave_4_cell_voltage_0_1_2.addres = slave_4_cell_voltage_0_1_2_addres,
            .slave_4_cell_voltage_3_4_5.addres = slave_4_cell_voltage_3_4_5_addres,
            .slave_4_cell_voltage_6_7_8.addres = slave_4_cell_voltage_6_7_8_addres,
            .slave_0_cell_temp_0_1_2.addres = slave_0_cell_temp_0_1_2_addres,
            .slave_0_cell_temp_3_4_5.addres = slave_0_cell_temp_3_4_5_addres,
            .slave_0_cell_temp_6_7_8.addres = slave_0_cell_temp_6_7_8_addres,
            .slave_1_cell_temp_0_1_2.addres = slave_1_cell_temp_0_1_2_addres,
            .slave_1_cell_temp_3_4_5.addres = slave_1_cell_temp_3_4_5_addres,
            .slave_1_cell_temp_6_7_8.addres = slave_1_cell_temp_6_7_8_addres,
            .slave_2_cell_temp_0_1_2.addres = slave_2_cell_temp_0_1_2_addres,
            .slave_2_cell_temp_3_4_5.addres = slave_2_cell_temp_3_4_5_addres,
            .slave_2_cell_temp_6_7_8.addres = slave_2_cell_temp_6_7_8_addres,
            .slave_3_cell_temp_0_1_2.addres = slave_3_cell_temp_0_1_2_addres,
            .slave_3_cell_temp_3_4_5.addres = slave_3_cell_temp_3_4_5_addres,
            .slave_3_cell_temp_6_7_8.addres = slave_3_cell_temp_6_7_8_addres,
            .slave_4_cell_temp_0_1_2.addres = slave_4_cell_temp_0_1_2_addres,
            .slave_4_cell_temp_3_4_5.addres = slave_4_cell_temp_3_4_5_addres,
            .slave_4_cell_temp_6_7_8.addres = slave_4_cell_temp_6_7_8_addres};

    return bms;
}
// struct json_payload_t print_Json_BMS_payload()
// {
//     struct timeval current_time;
//     struct json_payload_t to_printt;
//     bzero(to_printt.data, sizeof(to_printt.data));
//     gettimeofday(&current_time, NULL);
//     sprintf(to_printt.data, "{t:%lld", current_time.tv_sec);
//     sprintf(
//         to_printt.data,
//         "%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x ",
//     );
//     sprintf(to_printt.data + strlen(to_printt.data), "]}");
//     return to_printt;
// }

void random(struct BMS_critical_msg *bms)
{

    int index = rand() % 6;
    int min = 0x100;
    int max = 0x12a;
    uint32_t randomValue = (rand() % (max - min + 1)) + min;
    struct twai_packet twai_packet;
    char *text;
    uint8_t buffer2[2];
    uint8_t buffer6[6];
    uint8_t buffer8[8];
    randomValue = (rand() % (max - min + 1)) + min;
    twai_packet.identifier = randomValue;

    if (twai_packet.identifier == 0x100)
    {
        generateRandom(buffer2, sizeof(buffer2));
        // *twai_packet.data = buffer2;
        // printf("ID: 0x%x, Data:  ", twai_packet.identifier);
        // print_uint_t_array(twai_packet.data, sizeof(buffer2));
        text = checking_bms_msg(twai_packet.identifier, buffer2, &bms);
    }
    else if (twai_packet.identifier == 0x102 || twai_packet.identifier == 0x103)
    {
        generateRandom(buffer6, sizeof(buffer6));
        // printf("ID: 0x%x, Data:  ", twai_packet.identifier);
        // print_uint_t_array(twai_packet.data, sizeof(buffer6));
        text = checking_bms_msg(twai_packet.identifier, buffer6, &bms);
    }
    else
    {
        generateRandom(buffer8, sizeof(buffer8));
        // printf("ID: 0x%x, Data:  ", twai_packet.identifier);
        // print_uint_t_array(twai_packet.data, sizeof(buffer8));
        text = checking_bms_msg(twai_packet.identifier, buffer8, &bms);
    }

    printf("Text is %s\n", text);
    // printf("size of bms is: %d out of %d ,  at counter : %d \n", sizeof(bms), sizeof(struct BMS_critical_msg), counter);
}

int main()
{
    struct BMS_critical_msg bms;
    struct BMS_critical_msg *ptr = &bms;

    memset(&bms, 0, sizeof(struct BMS_critical_msg));
    for (size_t i = 0; i < 15; i++)
    {
        random(&bms);
    }

    for (size_t i = 0; i < sizeof(bms); i++)
    {
        printf("S ,%02x, %d, %p \n", ptr + i, ptr + i, *ptr);
    }

    printf("BMS,%02x, %d \n", &bms, &bms + sizeof(bms));

    printf("daisy_chain_data, %02x, %d \n", *bms.daisy_chain.data, *bms.daisy_chain.data);
    printf("daisy_chain_addres, %02x, %d \n", bms.daisy_chain.addres, bms.daisy_chain.addres);
    printf("performance_monitoring_data, %02x, %d \n", bms.performance_monitoring.data, bms.performance_monitoring.data);
    printf("performance_monitoring_addres, %02x, %d \n", bms.performance_monitoring.addres, bms.performance_monitoring.addres);
    printf("current_sensing_data, %02x, %d \n", bms.current_sensing.data, bms.current_sensing.data);
    printf("current_sensing_addres, %02x, %d \n", bms.current_sensing.addres, bms.current_sensing.addres);
    printf("pack_voltage_data, %02x, %d \n", bms.pack_voltage.data, bms.pack_voltage.data);
    printf("pack_voltage_addres, %02x, %d \n", bms.pack_voltage.addres, bms.pack_voltage.addres);
    printf("cell_voltages_min_max_mean_data, %02x, %d \n", bms.cell_voltages_min_max_mean.data, bms.cell_voltages_min_max_mean.data);
    printf("cell_voltages_min_max_mean_addres, %02x, %d \n", bms.cell_voltages_min_max_mean.addres, bms.cell_voltages_min_max_mean.addres);
    printf("cell_temps_min_max_mean_data, %02x, %d \n", bms.cell_temps_min_max_mean.data, bms.cell_temps_min_max_mean.data);
    printf("cell_temps_min_max_mean_addres, %02x, %d \n", bms.cell_temps_min_max_mean.addres, bms.cell_temps_min_max_mean.addres);
    printf("slave_0_cell_voltage_0_1_2_data, %02x, %d \n", bms.slave_0_cell_voltage_0_1_2.data, bms.slave_0_cell_voltage_0_1_2.data);
    printf("slave_0_cell_voltage_0_1_2_addres, %02x, %d \n", bms.slave_0_cell_voltage_0_1_2.addres, bms.slave_0_cell_voltage_0_1_2.addres);
    printf("slave_0_cell_voltage_3_4_5_data, %02x, %d \n", bms.slave_0_cell_voltage_3_4_5.data, bms.slave_0_cell_voltage_3_4_5.data);
    printf("slave_0_cell_voltage_3_4_5_addres, %02x, %d \n", bms.slave_0_cell_voltage_3_4_5.addres, bms.slave_0_cell_voltage_3_4_5.addres);
    printf("slave_0_cell_voltage_6_7_8_data, %02x, %d \n", bms.slave_0_cell_voltage_6_7_8.data, bms.slave_0_cell_voltage_6_7_8.data);
    printf("slave_0_cell_voltage_6_7_8_addres, %02x, %d \n", bms.slave_0_cell_voltage_6_7_8.addres, bms.slave_0_cell_voltage_6_7_8.addres);
    printf("slave_1_cell_voltage_0_1_2_data, %02x, %d \n", bms.slave_1_cell_voltage_0_1_2.data, bms.slave_1_cell_voltage_0_1_2.data);
    printf("slave_1_cell_voltage_0_1_2_addres, %02x, %d \n", bms.slave_1_cell_voltage_0_1_2.addres, bms.slave_1_cell_voltage_0_1_2.addres);
    printf("slave_1_cell_voltage_3_4_5_data, %02x, %d \n", bms.slave_1_cell_voltage_3_4_5.data, bms.slave_1_cell_voltage_3_4_5.data);
    printf("slave_1_cell_voltage_3_4_5_addres, %02x, %d \n", bms.slave_1_cell_voltage_3_4_5.addres, bms.slave_1_cell_voltage_3_4_5.addres);
    printf("slave_1_cell_voltage_6_7_8_data, %02x, %d \n", bms.slave_1_cell_voltage_6_7_8.data, bms.slave_1_cell_voltage_6_7_8.data);
    printf("slave_1_cell_voltage_6_7_8_addres, %02x, %d \n", bms.slave_1_cell_voltage_6_7_8.addres, bms.slave_1_cell_voltage_6_7_8.addres);
    printf("slave_2_cell_voltage_0_1_2_data, %02x, %d \n", bms.slave_2_cell_voltage_0_1_2.data, bms.slave_2_cell_voltage_0_1_2.data);
    printf("slave_2_cell_voltage_0_1_2_addres, %02x, %d \n", bms.slave_2_cell_voltage_0_1_2.addres, bms.slave_2_cell_voltage_0_1_2.addres);
    printf("slave_2_cell_voltage_3_4_5_data, %02x, %d \n", bms.slave_2_cell_voltage_3_4_5.data, bms.slave_2_cell_voltage_3_4_5.data);
    printf("slave_2_cell_voltage_3_4_5_addres, %02x, %d \n", bms.slave_2_cell_voltage_3_4_5.addres, bms.slave_2_cell_voltage_3_4_5.addres);
    printf("slave_2_cell_voltage_6_7_8_data, %02x, %d \n", bms.slave_2_cell_voltage_6_7_8.data, bms.slave_2_cell_voltage_6_7_8.data);
    printf("slave_2_cell_voltage_6_7_8_addres, %02x, %d \n", bms.slave_2_cell_voltage_6_7_8.addres, bms.slave_2_cell_voltage_6_7_8.addres);
    printf("slave_3_cell_voltage_0_1_2_data, %02x, %d \n", bms.slave_3_cell_voltage_0_1_2.data, bms.slave_3_cell_voltage_0_1_2.data);
    printf("slave_3_cell_voltage_0_1_2_addres, %02x, %d \n", bms.slave_3_cell_voltage_0_1_2.addres, bms.slave_3_cell_voltage_0_1_2.addres);
    printf("slave_3_cell_voltage_3_4_5_data, %02x, %d \n", bms.slave_3_cell_voltage_3_4_5.data, bms.slave_3_cell_voltage_3_4_5.data);
    printf("slave_3_cell_voltage_3_4_5_addres, %02x, %d \n", bms.slave_3_cell_voltage_3_4_5.addres, bms.slave_3_cell_voltage_3_4_5.addres);
    printf("slave_3_cell_voltage_6_7_8_data, %02x, %d \n", bms.slave_3_cell_voltage_6_7_8.data, bms.slave_3_cell_voltage_6_7_8.data);
    printf("slave_3_cell_voltage_6_7_8_addres, %02x, %d \n", bms.slave_3_cell_voltage_6_7_8.addres, bms.slave_3_cell_voltage_6_7_8.addres);
    printf("slave_4_cell_voltage_0_1_2_data, %02x, %d \n", bms.slave_4_cell_voltage_0_1_2.data, bms.slave_4_cell_voltage_0_1_2.data);
    printf("slave_4_cell_voltage_0_1_2_addres, %02x, %d \n", bms.slave_4_cell_voltage_0_1_2.addres, bms.slave_4_cell_voltage_0_1_2.addres);
    printf("slave_4_cell_voltage_3_4_5_data, %02x, %d \n", bms.slave_4_cell_voltage_3_4_5.data, bms.slave_4_cell_voltage_3_4_5.data);
    printf("slave_4_cell_voltage_3_4_5_addres, %02x, %d \n", bms.slave_4_cell_voltage_3_4_5.addres, bms.slave_4_cell_voltage_3_4_5.addres);
    printf("slave_4_cell_voltage_6_7_8_data, %02x, %d \n", bms.slave_4_cell_voltage_6_7_8.data, bms.slave_4_cell_voltage_6_7_8.data);
    printf("slave_4_cell_voltage_6_7_8_addres, %02x, %d \n", bms.slave_4_cell_voltage_6_7_8.addres, bms.slave_4_cell_voltage_6_7_8.addres);
    printf("slave_0_cell_temp_0_1_2_data, %02x, %d \n", bms.slave_0_cell_temp_0_1_2.data, bms.slave_0_cell_temp_0_1_2.data);
    printf("slave_0_cell_temp_0_1_2_addres, %02x, %d \n", bms.slave_0_cell_temp_0_1_2.addres, bms.slave_0_cell_temp_0_1_2.addres);
    printf("slave_0_cell_temp_3_4_5_data, %02x, %d \n", bms.slave_0_cell_temp_3_4_5.data, bms.slave_0_cell_temp_3_4_5.data);
    printf("slave_0_cell_temp_3_4_5_addres, %02x, %d \n", bms.slave_0_cell_temp_3_4_5.addres, bms.slave_0_cell_temp_3_4_5.addres);
    printf("slave_0_cell_temp_6_7_8_data, %02x, %d \n", bms.slave_0_cell_temp_6_7_8.data, bms.slave_0_cell_temp_6_7_8.data);
    printf("slave_0_cell_temp_6_7_8_addres, %02x, %d \n", bms.slave_0_cell_temp_6_7_8.addres, bms.slave_0_cell_temp_6_7_8.addres);
    printf("slave_1_cell_temp_0_1_2_data, %02x, %d \n", bms.slave_1_cell_temp_0_1_2.data, bms.slave_1_cell_temp_0_1_2.data);
    printf("slave_1_cell_temp_0_1_2_addres, %02x, %d \n", bms.slave_1_cell_temp_0_1_2.addres, bms.slave_1_cell_temp_0_1_2.addres);
    printf("slave_1_cell_temp_3_4_5_data, %02x, %d \n", bms.slave_1_cell_temp_3_4_5.data, bms.slave_1_cell_temp_3_4_5.data);
    printf("slave_1_cell_temp_3_4_5_addres, %02x, %d \n", bms.slave_1_cell_temp_3_4_5.addres, bms.slave_1_cell_temp_3_4_5.addres);
    printf("slave_1_cell_temp_6_7_8_data, %02x, %d \n", bms.slave_1_cell_temp_6_7_8.data, bms.slave_1_cell_temp_6_7_8.data);
    printf("slave_1_cell_temp_6_7_8_addres, %02x, %d \n", bms.slave_1_cell_temp_6_7_8.addres, bms.slave_1_cell_temp_6_7_8.addres);
    printf("slave_2_cell_temp_0_1_2_data, %02x, %d \n", bms.slave_2_cell_temp_0_1_2.data, bms.slave_2_cell_temp_0_1_2.data);
    printf("slave_2_cell_temp_0_1_2_addres, %02x, %d \n", bms.slave_2_cell_temp_0_1_2.addres, bms.slave_2_cell_temp_0_1_2.addres);
    printf("slave_2_cell_temp_3_4_5_data, %02x, %d \n", bms.slave_2_cell_temp_3_4_5.data, bms.slave_2_cell_temp_3_4_5.data);
    printf("slave_2_cell_temp_3_4_5_addres, %02x, %d \n", bms.slave_2_cell_temp_3_4_5.addres, bms.slave_2_cell_temp_3_4_5.addres);
    printf("slave_2_cell_temp_6_7_8_data, %02x, %d \n", bms.slave_2_cell_temp_6_7_8.data, bms.slave_2_cell_temp_6_7_8.data);
    printf("slave_2_cell_temp_6_7_8_addres, %02x, %d \n", bms.slave_2_cell_temp_6_7_8.addres, bms.slave_2_cell_temp_6_7_8.addres);
    printf("slave_3_cell_temp_0_1_2_data, %02x, %d \n", bms.slave_3_cell_temp_0_1_2.data, bms.slave_3_cell_temp_0_1_2.data);
    printf("slave_3_cell_temp_0_1_2_addres, %02x, %d \n", bms.slave_3_cell_temp_0_1_2.addres, bms.slave_3_cell_temp_0_1_2.addres);
    printf("slave_3_cell_temp_3_4_5_data, %02x, %d \n", bms.slave_3_cell_temp_3_4_5.data, bms.slave_3_cell_temp_3_4_5.data);
    printf("slave_3_cell_temp_3_4_5_addres, %02x, %d \n", bms.slave_3_cell_temp_3_4_5.addres, bms.slave_3_cell_temp_3_4_5.addres);
    printf("slave_3_cell_temp_6_7_8_data, %02x, %d \n", bms.slave_3_cell_temp_6_7_8.data, bms.slave_3_cell_temp_6_7_8.data);
    printf("slave_3_cell_temp_6_7_8_addres, %02x, %d \n", bms.slave_3_cell_temp_6_7_8.addres, bms.slave_3_cell_temp_6_7_8.addres);
    printf("slave_4_cell_temp_0_1_2_data, %02x, %d \n", bms.slave_4_cell_temp_0_1_2.data, bms.slave_4_cell_temp_0_1_2.data);
    printf("slave_4_cell_temp_0_1_2_addres, %02x, %d \n", bms.slave_4_cell_temp_0_1_2.addres, bms.slave_4_cell_temp_0_1_2.addres);
    printf("slave_4_cell_temp_3_4_5_data, %02x, %d \n", bms.slave_4_cell_temp_3_4_5.data, bms.slave_4_cell_temp_3_4_5.data);
    printf("slave_4_cell_temp_3_4_5_addres, %02x, %d \n", bms.slave_4_cell_temp_3_4_5.addres, bms.slave_4_cell_temp_3_4_5.addres);
    printf("slave_4_cell_temp_6_7_8_data, %02x, %d \n", bms.slave_4_cell_temp_6_7_8.data, bms.slave_4_cell_temp_6_7_8.data);
    printf("slave_4_cell_temp_6_7_8_addres, %02x, %d \n", bms.slave_4_cell_temp_6_7_8.addres, bms.slave_4_cell_temp_6_7_8.addres);
    fflush(stdout);
    for (size_t i = 0; i < 100000000; i++)
    {
        /* code */
    }

    memset(&bms, 0, sizeof(struct BMS_critical_msg));

    return 0;
}