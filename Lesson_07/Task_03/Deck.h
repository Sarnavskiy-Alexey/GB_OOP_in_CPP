#pragma once
#include "Hand.h"
#include "GenericPlayer.h"
#include <algorithm>

class Deck :
    public Hand
{
protected:
    void Deal(Hand& aHand);

public:
    Deck();

    void Populate();
    void Shuffle();
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};
