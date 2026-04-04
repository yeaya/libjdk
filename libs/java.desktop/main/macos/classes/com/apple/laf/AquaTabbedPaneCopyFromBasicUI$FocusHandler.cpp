#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$FocusHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneCopyFromBasicUI$FocusHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void AquaTabbedPaneCopyFromBasicUI$FocusHandler::focusGained($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusGained(e);
}

void AquaTabbedPaneCopyFromBasicUI$FocusHandler::focusLost($FocusEvent* e) {
	$$nc(this->this$0->getHandler())->focusLost(e);
}

AquaTabbedPaneCopyFromBasicUI$FocusHandler::AquaTabbedPaneCopyFromBasicUI$FocusHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$FocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$FocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(AquaTabbedPaneCopyFromBasicUI$FocusHandler, init$, void, $AquaTabbedPaneCopyFromBasicUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$FocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$FocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$FocusHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "FocusHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$FocusHandler",
		"java.awt.event.FocusAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
	};
	$loadClass(AquaTabbedPaneCopyFromBasicUI$FocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneCopyFromBasicUI$FocusHandler);
	});
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com