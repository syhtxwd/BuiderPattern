#include <QCoreApplication>
#include "concreate_builder.h"
#include "direcror.h"
#include <string.h>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p) = NULL;}}
#endif
int main(int argc, char *argv[])
{
    Direcror *pDirecror = new Direcror();
    ThinkPadBuilder *pTPBuilder = new ThinkPadBuilder();
    YogaBuilder *pYogaBuilder = new YogaBuilder();

    // 组装 ThinkPad、Yoga
    pDirecror->Create(pTPBuilder);
    pDirecror->Create(pYogaBuilder);

    // 获取组装后的电脑
    Computer *pThinkPadComputer = pTPBuilder->GetResult();
    Computer *pYogaComputer = pYogaBuilder->GetResult();

    // 测试输出
    cout << "-----ThinkPad-----" << endl;
    cout << "CPU: " << pThinkPadComputer->GetCPU() << endl;
    cout << "Mainboard: " << pThinkPadComputer->GetMainboard() << endl;
    cout << "Ram: " << pThinkPadComputer->GetRam() << endl;
    cout << "VideoCard: " << pThinkPadComputer->GetVideoCard() << endl;

    cout << "-----Yoga-----" << endl;
    cout << "CPU: " << pYogaComputer->GetCPU() << endl;
    cout << "Mainboard: " << pYogaComputer->GetMainboard() << endl;
    cout << "Ram: " << pYogaComputer->GetRam() << endl;
    cout << "VideoCard: " << pYogaComputer->GetVideoCard() << endl;

    SAFE_DELETE(pThinkPadComputer);
    SAFE_DELETE(pYogaComputer);
    SAFE_DELETE(pTPBuilder);
    SAFE_DELETE(pYogaBuilder);
    SAFE_DELETE(pDirecror);

    getchar();
    return 0;
}
