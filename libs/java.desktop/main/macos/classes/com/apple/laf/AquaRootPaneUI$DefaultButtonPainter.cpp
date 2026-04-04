#include <com/apple/laf/AquaRootPaneUI$DefaultButtonPainter.h>
#include <com/apple/laf/AquaRootPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $AquaRootPaneUI = ::com::apple::laf::AquaRootPaneUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JRootPane = ::javax::swing::JRootPane;

namespace com {
	namespace apple {
		namespace laf {

void AquaRootPaneUI$DefaultButtonPainter::init$($AquaRootPaneUI* this$0, $JRootPane* root) {
	$set(this, this$0, this$0);
	$set(this, root, root);
}

void AquaRootPaneUI$DefaultButtonPainter::actionPerformed($ActionEvent* e) {
	$var($JButton, defaultButton, $nc(this->root)->getDefaultButton());
	if ((defaultButton != nullptr) && defaultButton->isShowing()) {
		if (defaultButton->isEnabled()) {
			defaultButton->repaint();
		}
	} else {
		this->this$0->stopTimer();
	}
}

AquaRootPaneUI$DefaultButtonPainter::AquaRootPaneUI$DefaultButtonPainter() {
}

$Class* AquaRootPaneUI$DefaultButtonPainter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaRootPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaRootPaneUI$DefaultButtonPainter, this$0)},
		{"root", "Ljavax/swing/JRootPane;", nullptr, 0, $field(AquaRootPaneUI$DefaultButtonPainter, root)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaRootPaneUI;Ljavax/swing/JRootPane;)V", nullptr, $PUBLIC, $method(AquaRootPaneUI$DefaultButtonPainter, init$, void, $AquaRootPaneUI*, $JRootPane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaRootPaneUI$DefaultButtonPainter, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaRootPaneUI$DefaultButtonPainter", "com.apple.laf.AquaRootPaneUI", "DefaultButtonPainter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaRootPaneUI$DefaultButtonPainter",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaRootPaneUI"
	};
	$loadClass(AquaRootPaneUI$DefaultButtonPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaRootPaneUI$DefaultButtonPainter);
	});
	return class$;
}

$Class* AquaRootPaneUI$DefaultButtonPainter::class$ = nullptr;

		} // laf
	} // apple
} // com