#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
using namespace std;

class Computer
{
public:
    void SetmCpu(string cpu)
    {
        m_strCpu = cpu;
    }
    void SetMainboard(string mainboard)
    {
        m_strMainboard = mainboard;
    }
    void SetRam(string ram)
    {
        m_strRam = ram;
    }
    void SetVideoCard(string videoCard)
    {
        m_strVideoCard = videoCard;
    }
    Computer();
    string GetCPU(){return m_strCpu;}
    string GetMainboard(){return m_strMainboard;}
    string GetRam(){return m_strRam;}
    string GetVideoCard(){return  m_strCpu;}

private:
    string m_strCpu; //CPU
    string m_strMainboard; //Ö÷°å
    string m_strRam;   //ÄÚ´æ
    string m_strVideoCard; //ÏÔ¿¨
};

#endif // COMPUTER_H
