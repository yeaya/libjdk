#include <com/apple/laf/AquaTableUI$FocusHandler.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaTableUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/plaf/basic/BasicTableUI$FocusHandler.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaTableUI = ::com::apple::laf::AquaTableUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTableUI$FocusHandler = ::javax::swing::plaf::basic::BasicTableUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaTableUI$FocusHandler::init$($AquaTableUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTableUI$FocusHandler::init$(this$0);
}

void AquaTableUI$FocusHandler::focusGained($FocusEvent* e) {
	$BasicTableUI$FocusHandler::focusGained(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

void AquaTableUI$FocusHandler::focusLost($FocusEvent* e) {
	$BasicTableUI$FocusHandler::focusLost(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

AquaTableUI$FocusHandler::AquaTableUI$FocusHandler() {
}

$Class* AquaTableUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTableUI;)V", nullptr, $PUBLIC, $method(AquaTableUI$FocusHandler, init$, void, $AquaTableUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTableUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTableUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTableUI$FocusHandler", "com.apple.laf.AquaTableUI", "FocusHandler", $PUBLIC},
		{"javax.swing.plaf.basic.BasicTableUI$FocusHandler", "javax.swing.plaf.basic.BasicTableUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTableUI$FocusHandler",
		"javax.swing.plaf.basic.BasicTableUI$FocusHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTableUI"
	};
	$loadClass(AquaTableUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTableUI$FocusHandler);
	});
	return class$;
}

$Class* AquaTableUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com