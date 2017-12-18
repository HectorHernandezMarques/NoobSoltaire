#include "PutCardInFoundationView.h"

namespace Views {
namespace Console {

PutCardInFoundationView::PutCardInFoundationView() {
}

PutCardInFoundationView::~PutCardInFoundationView() {
}

void PutCardInFoundationView::interact(Controllers::PutCardController &putCardInFoundationController) {
	assert(&putCardInFoundationController);

	LimitedIntDialogView targetFoundationLimitedIntDialogView(
			*(new Utils::LimitedIntDialog("Enter the Foundation where you want to insert your card(s)", 1,
					putCardInFoundationController.getSuitNumberMax())));
	targetFoundationLimitedIntDialogView.write();
	int choosenTargetTableauIndex = targetFoundationLimitedIntDialogView.read() - 1;
	putCardInFoundationController.setTargetChoice(choosenTargetTableauIndex);
}

} /* namespace Console */
} /* namespace Views */
