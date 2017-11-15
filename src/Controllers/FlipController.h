#ifndef CONTROLLERS_FLIPCONTROLLER_H_
#define CONTROLLERS_FLIPCONTROLLER_H_

#include "ActionController.h"

namespace Controllers {

class FlipController : public virtual ActionController{
public:
	virtual Error flip() = 0;
};

} /* namespace Controller */

#endif /* CONTROLLERS_FLIPCONTROLLER_H_ */
