#ifndef CONTROLLERS_INITIALGAMEDECITIONCONTROLLER_H_
#define CONTROLLERS_INITIALGAMEDECITIONCONTROLLER_H_

#include "OperationController.h"
#include "InitialGameDecition.h"

namespace Controllers {

class InitialGameDecitionController : public virtual OperationController{
public:
	virtual void makeDecition(InitialGameDecition initialGameDecition) = 0;
};

} /* namespace Controllers */

#endif /* CONTROLLERS_INITIALGAMEDECITIONCONTROLLER_H_ */
