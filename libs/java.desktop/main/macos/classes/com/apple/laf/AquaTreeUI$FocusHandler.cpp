#include <com/apple/laf/AquaTreeUI$FocusHandler.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaTreeUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$FocusHandler.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI$FocusHandler = ::javax::swing::plaf::basic::BasicTreeUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaTreeUI$FocusHandler::init$($AquaTreeUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTreeUI$FocusHandler::init$(this$0);
}

void AquaTreeUI$FocusHandler::focusGained($FocusEvent* e) {
	$BasicTreeUI$FocusHandler::focusGained(e);
	$AquaBorder::repaintBorder($($AquaTreeUI::access$000(this->this$0)));
}

void AquaTreeUI$FocusHandler::focusLost($FocusEvent* e) {
	$BasicTreeUI$FocusHandler::focusLost(e);
	$AquaBorder::repaintBorder($($AquaTreeUI::access$100(this->this$0)));
}

AquaTreeUI$FocusHandler::AquaTreeUI$FocusHandler() {
}

$Class* AquaTreeUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTreeUI;)V", nullptr, 0, $method(AquaTreeUI$FocusHandler, init$, void, $AquaTreeUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTreeUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTreeUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTreeUI$FocusHandler", "com.apple.laf.AquaTreeUI", "FocusHandler", 0},
		{"javax.swing.plaf.basic.BasicTreeUI$FocusHandler", "javax.swing.plaf.basic.BasicTreeUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTreeUI$FocusHandler",
		"javax.swing.plaf.basic.BasicTreeUI$FocusHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTreeUI"
	};
	$loadClass(AquaTreeUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTreeUI$FocusHandler);
	});
	return class$;
}

$Class* AquaTreeUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com