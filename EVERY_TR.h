//EVERY_TR����һ��ת����λ��ͷ�ļ�
#ifndef EVERY_TR_H_
#define EVERY_TR_H_
//kg to g or ton
const long double LKG_TO_G_OR_T=1000;
/*����Ϊdouble��float�ṩ*/
const double KG_TO_G_OR_T=1000;
const float FKG_TO_G_OR_T=1000;
//////////////////////////////////////
// b,kb,mb,gb,tb��λת��
const double CMPT =  1024.00;
const double RTVL = 1000.00;
double kma = 0.0;
double CKiB_B = kma * CMPT;
double CiB_KiB = kma / CMPT;
double CMiB_B = kma * CMPT * CMPT;
double CiB_MiB = kma / CMPT / CMPT;
double CGiB_B = kma * CMPT * CMPT * CMPT;
double CiB_GiB = kma / CMPT / CMPT / CMPT;
double CTiB_B = kma * CMPT * CMPT * CMPT * CMPT;
double CiB_TiB = kma / CMPT / CMPT / CMPT / CMPT;
//�¶�ת��
const double WASHI = 32.00;
const double COMMON_TPREWS=1.800 ;
const double KELVENS=-273.1500 ;
#endif