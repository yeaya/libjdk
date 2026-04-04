#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Handler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::init$($AquaTabbedPaneCopyFromBasicUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::stateChanged($ChangeEvent* e) {
	$$nc(this->this$0->getHandler())->stateChanged(e);
}

AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;)V", nullptr, $PUBLIC, $method(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, init$, void, $AquaTabbedPaneCopyFromBasicUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "TabSelectionHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
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
	$loadClass(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler);
	});
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$TabSelectionHandler::class$ = nullptr;

		} // laf
	} // apple
} // com