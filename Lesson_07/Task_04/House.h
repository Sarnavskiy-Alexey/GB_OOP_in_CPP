#pragma once
#include "GenericPlayer.h"
class House :
    public GenericPlayer
{
public:
    House(std::string name = "Дилер");
    virtual bool IsHitting() const;
    void FlipFirstCard();
};
