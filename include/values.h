#ifndef VALUES_H
#define VALUES_H

struct _TOGGLES
{
    bool SW1_T1 = 0;
    bool SW1_T2 = 0;
    bool SW2_T1 = 0;
    bool SW3_T1 = 0;
    bool SW4_T1 = 0;
    bool SW5_T1 = 0;
    bool SW6_T1 = 0;
    bool SW7_T1 = 0;
    bool SW7_T2 = 0;
    bool SW8_T1 = 0;
    bool SW8_T2 = 0;
    bool SW9_T1 = 0;
    bool SW9_T2 = 0;
    bool SW10_T1 = 0;
    bool SW10_T2 = 0;
    bool SW11_T1 = 0;
    bool SW11_T2 = 0;
};

typedef struct _TOGGLES _TOGGLES;
extern _TOGGLES TOGGLES;

struct _TOGGLES_PREV
{
    bool SW1_T1_P = TOGGLES.SW1_T1;
    bool SW1_T2_P = TOGGLES.SW1_T2;
    bool SW2_T1_P = TOGGLES.SW2_T1;
    bool SW3_T1_P = TOGGLES.SW3_T1;
    bool SW4_T1_P = TOGGLES.SW4_T1;
    bool SW5_T1_P = TOGGLES.SW5_T1;
    bool SW6_T1_P = TOGGLES.SW6_T1;
    bool SW7_T1_P = TOGGLES.SW7_T1;
    bool SW7_T2_P = TOGGLES.SW7_T2;
    bool SW8_T1_P = TOGGLES.SW8_T1;
    bool SW8_T2_P = TOGGLES.SW8_T2;
    bool SW9_T1_P = TOGGLES.SW9_T1;
    bool SW9_T2_P = TOGGLES.SW9_T2;
    bool SW10_T1_P = TOGGLES.SW10_T1;
    bool SW10_T2_P = TOGGLES.SW10_T2;
    bool SW11_T1_P = TOGGLES.SW11_T1;
    bool SW11_T2_P = TOGGLES.SW11_T2;
};

typedef struct _TOGGLES_PREV _TOGGLES_PREV;
extern _TOGGLES_PREV TOGGLES_PREV;

void save_prev(void);
void read_values(void);
void setPinModes(void);

#endif