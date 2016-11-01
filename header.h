
#ifndef HEADER_H_
#define HEADER_H_

#include "template.h"

using namespace std;

int Outer();

int Inner();

void Status(bool stat);

void GetInfo(int& a);

void GetInfo(double& a);

void GetInfo(string& a);

void Empty(bool a);

void Full(bool a);

void PrintHeader(string asName, char asType, int asNum);

#endif /* HEADER_H_ */
