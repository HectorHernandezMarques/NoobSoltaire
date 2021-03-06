#ifndef VIEWS_CONSOLE_CONTROLLERS_PUTCARDINFOUNDATIONVIEW_H_
#define VIEWS_CONSOLE_CONTROLLERS_PUTCARDINFOUNDATIONVIEW_H_

#include "./PutCardView.h"
#include "../../../Controllers/PutCardController.h"

namespace Views {
namespace Console {
namespace ControllersViews {

class PutCardInFoundationView : public virtual PutCardView{
public:
	PutCardInFoundationView();
	virtual ~PutCardInFoundationView();

	void interact(Controllers::PutCardController &putCardInFoundationController);
};

} /* namespace ControllersViews */
} /* namespace Console */
} /* namespace Views */

#endif /* VIEWS_CONSOLE_CONTROLLERS_PUTCARDINFOUNDATIONVIEW_H_ */
