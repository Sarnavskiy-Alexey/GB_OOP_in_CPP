#pragma once
#include <conio.h>
#include "GenericPlayer.h"
class Player :
    public GenericPlayer
{
private:

public:
    Player(std::string name = "");
    virtual bool IsHitting() const;
    void Win() const;
    void Lose() const;
    void Push() const;
};

