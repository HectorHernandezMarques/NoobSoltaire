#include "./ClosedIntervalView.h"

namespace Views {
namespace Console {
namespace ModelsViews {

ClosedIntervalView::ClosedIntervalView(Utils::ClosedInterval &closedInterval) :
		closedInterval(closedInterval) {
	assert(&closedInterval);
}

ClosedIntervalView::~ClosedIntervalView() {
}

void ClosedIntervalView::write() {
	Utils::IO &io = Utils::IO::getInstance();

	io.writeln("[" + std::to_string(this->closedInterval.getMin()) + "," + std::to_string(this->closedInterval.getMax()) + "]");
}

} /* namespace ModelsViews */
} /* namespace Console */
} /* namespace Views */
