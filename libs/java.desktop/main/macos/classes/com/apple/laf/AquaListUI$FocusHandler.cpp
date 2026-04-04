#include <com/apple/laf/AquaListUI$FocusHandler.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaListUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicListUI$FocusHandler.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicListUI$FocusHandler = ::javax::swing::plaf::basic::BasicListUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaListUI$FocusHandler::init$($AquaListUI* this$0) {
	$set(this, this$0, this$0);
	$BasicListUI$FocusHandler::init$(this$0);
}

void AquaListUI$FocusHandler::focusGained($FocusEvent* e) {
	$BasicListUI$FocusHandler::focusGained(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

void AquaListUI$FocusHandler::focusLost($FocusEvent* e) {
	$BasicListUI$FocusHandler::focusLost(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

AquaListUI$FocusHandler::AquaListUI$FocusHandler() {
}

$Class* AquaListUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaListUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaListUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaListUI;)V", nullptr, 0, $method(AquaListUI$FocusHandler, init$, void, $AquaListUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaListUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaListUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaListUI$FocusHandler", "com.apple.laf.AquaListUI", "FocusHandler", 0},
		{"javax.swing.plaf.basic.BasicListUI$FocusHandler", "javax.swing.plaf.basic.BasicListUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaListUI$FocusHandler",
		"javax.swing.plaf.basic.BasicListUI$FocusHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaListUI"
	};
	$loadClass(AquaListUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaListUI$FocusHandler);
	});
	return class$;
}

$Class* AquaListUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com