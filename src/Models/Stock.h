#ifndef STOCK_H_
#define STOCK_H_

#include "Stack.h"

namespace Models {

class Stock: public Stack {
private:
	int visibleCardsMax;
	int hiddenCardsNumber;
	int visibleCardsNumber;

	Utils::Stack<Cards::Card>& remove(int index);

public:
	Stock(int visibleCardsMax);
	Stock(Utils::Stack<Cards::Card> &cards, int visibleCardsMax);
	virtual ~Stock();

	bool canFlip();
	void flip();
	bool canRemove(Cards::Card &card);
	bool canRemoveRelativeCards();

	Utils::Stack<Cards::Card>& getRelativeCards();
	Utils::Stack<Cards::Card>& getVisibleCards();
	int getVisibleCardsMax();
	int getHiddenCardsNumber();
	int getVisibleCardsNumber();
	void setHiddenCardsNumber(int hiddenCardsNumber);
};

} /* namespace Models */

#endif /* STOCK_H_ */
