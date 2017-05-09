#ifndef _DRSFILTER_H
#define _DRSFFILTER_H

/*
 * ������� �������, ����� �� �������� 10 ���.
 */

void DRSFilterInitialize(int history_capacity, int size);
void DRSFilter(unsigned char* src, unsigned char* dst, int data_delta, unsigned int history_scan_depth);
void DRSFilterDestruct();

#endif