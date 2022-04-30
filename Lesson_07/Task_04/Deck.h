#pragma once
#include "Hand.h"
#include "GenericPlayer.h"
#include <algorithm>

class Deck :
    public Hand
{
public:
    Deck();

    void Populate();
    void Shuffle();
    void Deal(Hand& aHand);
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};
