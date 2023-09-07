#ifndef GLOBAL_H
#define GLOBAL_H

#define daisy_chain_addres 0x100
#define performance_monitoring_addres 0x101
#define current_sensing_addres 0x102
#define pack_voltage_addres 0x103
#define cell_voltages_min_max_mean_addres 0x104
#define cell_temps_min_max_mean_addres 0x105
#define slave_0_cell_voltage_0_1_2_addres 0x106
#define slave_0_cell_voltage_3_4_5_addres 0x107
#define slave_0_cell_voltage_6_7_8_addres 0x108
#define slave_1_cell_voltage_0_1_2_addres 0x10A
#define slave_1_cell_voltage_3_4_5_addres 0x10B
#define slave_1_cell_voltage_6_7_8_addres 0x10C
#define slave_2_cell_voltage_0_1_2_addres 0x10E
#define slave_2_cell_voltage_3_4_5_addres 0x10F
#define slave_2_cell_voltage_6_7_8_addres 0x110
#define slave_3_cell_voltage_0_1_2_addres 0x112
#define slave_3_cell_voltage_3_4_5_addres 0x113
#define slave_3_cell_voltage_6_7_8_addres 0x114
#define slave_4_cell_voltage_0_1_2_addres 0x116
#define slave_4_cell_voltage_3_4_5_addres 0x117
#define slave_4_cell_voltage_6_7_8_addres 0x118
#define slave_0_cell_temp_0_1_2_addres 0x11A
#define slave_0_cell_temp_3_4_5_addres 0x11B
#define slave_0_cell_temp_6_7_8_addres 0x11C
#define slave_1_cell_temp_0_1_2_addres 0x11E
#define slave_1_cell_temp_3_4_5_addres 0x11F
#define slave_1_cell_temp_6_7_8_addres 0x120
#define slave_2_cell_temp_0_1_2_addres 0x122
#define slave_2_cell_temp_3_4_5_addres 0x123
#define slave_2_cell_temp_6_7_8_addres 0x124
#define slave_3_cell_temp_0_1_2_addres 0x126
#define slave_3_cell_temp_3_4_5_addres 0x127
#define slave_3_cell_temp_6_7_8_addres 0x128
#define slave_4_cell_temp_0_1_2_addres 0x12A
#define slave_4_cell_temp_3_4_5_addres 0x12B
#define slave_4_cell_temp_6_7_8_addres 0x12C

struct can_data_8B
{
    uint16_t addres;
    uint8_t data[8];
};
struct can_data_7B
{
    uint16_t addres;
    uint8_t data[7];
};
struct can_data_6B
{
    uint16_t addres;
    uint8_t data[6];
};
struct can_data_4B
{
    uint16_t addres;
    uint8_t data[4];
};
struct can_data_2B
{
    uint16_t addres;
    uint8_t data[2];
};
struct can_data_1B
{
    uint16_t addres;
    uint8_t data[1];
};

struct twai_packet
{
    uint32_t identifier;      /**< 11 or 29 bit identifier */
    uint8_t data_length_code; /**< Data length code */
    uint8_t data[8];          /**< Data bytes (not relevant in RTR frame) */
};

struct BMS_critical_msg
{

    struct can_data_2B daisy_chain;
    struct can_data_8B performance_monitoring;
    struct can_data_6B current_sensing;
    struct can_data_6B pack_voltage;
    struct can_data_8B cell_voltages_min_max_mean;
    struct can_data_8B cell_temps_min_max_mean;

    struct can_data_8B slave_0_cell_voltage_0_1_2;
    struct can_data_8B slave_0_cell_voltage_3_4_5;
    struct can_data_8B slave_0_cell_voltage_6_7_8;

    struct can_data_8B slave_1_cell_voltage_0_1_2;
    struct can_data_8B slave_1_cell_voltage_3_4_5;
    struct can_data_8B slave_1_cell_voltage_6_7_8;

    struct can_data_8B slave_2_cell_voltage_0_1_2;
    struct can_data_8B slave_2_cell_voltage_3_4_5;
    struct can_data_8B slave_2_cell_voltage_6_7_8;

    struct can_data_8B slave_3_cell_voltage_0_1_2;
    struct can_data_8B slave_3_cell_voltage_3_4_5;
    struct can_data_8B slave_3_cell_voltage_6_7_8;

    struct can_data_8B slave_4_cell_voltage_0_1_2;
    struct can_data_8B slave_4_cell_voltage_3_4_5;
    struct can_data_8B slave_4_cell_voltage_6_7_8;

    struct can_data_8B slave_0_cell_temp_0_1_2;
    struct can_data_8B slave_0_cell_temp_3_4_5;
    struct can_data_8B slave_0_cell_temp_6_7_8;

    struct can_data_8B slave_1_cell_temp_0_1_2;
    struct can_data_8B slave_1_cell_temp_3_4_5;
    struct can_data_8B slave_1_cell_temp_6_7_8;

    struct can_data_8B slave_2_cell_temp_0_1_2;
    struct can_data_8B slave_2_cell_temp_3_4_5;
    struct can_data_8B slave_2_cell_temp_6_7_8;

    struct can_data_8B slave_3_cell_temp_0_1_2;
    struct can_data_8B slave_3_cell_temp_3_4_5;
    struct can_data_8B slave_3_cell_temp_6_7_8;

    struct can_data_8B slave_4_cell_temp_0_1_2;
    struct can_data_8B slave_4_cell_temp_3_4_5;
    struct can_data_8B slave_4_cell_temp_6_7_8;
};

struct json_payload_t
{
    char data[100];
    uint8_t len;
};
#endif