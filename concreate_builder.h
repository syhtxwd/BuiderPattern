#ifndef CONCREATE_BUILDER_H
#define CONCREATE_BUILDER_H

#include "ibuilder.h"
class ThinkPadBuilder:public IBuilder
{
public:
    ThinkPadBuilder()
    {
        m_pComputer = new Computer;
    }
    void BuildCpu()
    {
       m_pComputer->SetmCpu("i5-6200U");
    }
    void BuildMainboard()
    {
        m_pComputer->SetMainboard("Intel DH57DD");
    }
    void BuildRam()
    {
        m_pComputer->SetRam("DDR4");
    }
    void BuildVideoCard()
    {
        m_pComputer->SetVideoCard("NVIDIA Geforce 920MX");
    }
    Computer * GetResult()
    {
        return m_pComputer;
    }
private:
    Computer * m_pComputer;
};


// Yoga о╣ап
class YogaBuilder : public IBuilder
{
public:
    YogaBuilder() { m_pComputer = new Computer(); }
    void BuildCpu() { m_pComputer->SetmCpu("i7-7500U"); }
    void BuildMainboard() { m_pComputer->SetMainboard("Intel DP55KG"); }
    void BuildRam() { m_pComputer->SetRam("DDR5"); }
    void BuildVideoCard()  { m_pComputer->SetVideoCard("NVIDIA GeForce 940MX"); }
    Computer* GetResult() { return m_pComputer; }

private:
    Computer *m_pComputer;
};

#endif // CONCREATE_BUILDER_H
