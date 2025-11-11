#include <avz.h>
using namespace AvZ;
void Script()
{
    OpenMultipleEffective();
    SetZombies({PJ_0, TT_4, WW_8, QS_11, BC_12, XC_15, KG_17, HT_14, CG_3, BY_23, HY_32});
    SelectCards({HBG_14, KFD_35, M_HBG_14, HMG_15, DXG_13, YTZD_2, XPG_8, YGG_9, HP_33, YZBHS_37});
    SetTime(-600, 1);
    pao_operator.resetPaoList({{1, 5}, {2, 5}, {3, 1}, {4, 1}, {3, 3}, {4, 3}, {3, 5}, {4, 5}, {3, 7}, {4, 7}, {5, 5}, {6, 5}});
    for (auto wave : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}) {
        SetTime(-95, wave);
        pao_operator.pao({{2, 9}, {5, 9}});
    }
    SetTime(-95 + 373 - 100, 10);
    Card(YTZD_2, 2, 9);
    for (auto wave : {9, 19, 20}) {
        SetTime(-95 + 373, wave);
        pao_operator.recoverPao({{2, 9}, {5, 9}, {2, 9}, {5, 9}});
    }
    SetTime(-150, 20);
    pao_operator.pao(4, 7);
}