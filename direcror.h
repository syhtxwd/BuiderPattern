#ifndef DIRECROR_H
#define DIRECROR_H

#include "ibuilder.h"

// ָ����
class Direcror
{
public:
    void Create(IBuilder *builder) {
        builder->BuildCpu();
        builder->BuildMainboard();
        builder->BuildRam();
        builder->BuildVideoCard();
    }
};

#endif // DIRECROR_H
