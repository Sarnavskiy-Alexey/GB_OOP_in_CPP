#pragma once
#include "GenericPlayer.h"
class House :
    public GenericPlayer
{
public:
    House(std::string name = "�����");
    virtual bool IsHitting() const;
    void FlipFirstCard();
};
