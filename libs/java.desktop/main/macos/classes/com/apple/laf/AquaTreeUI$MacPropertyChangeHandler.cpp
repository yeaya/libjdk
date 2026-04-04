#include <com/apple/laf/AquaTreeUI$MacPropertyChangeHandler.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaTreeUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$PropertyChangeHandler.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $BasicTreeUI$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicTreeUI$PropertyChangeHandler;

namespace com {
	namespace apple {
		namespace laf {

void AquaTreeUI$MacPropertyChangeHandler::init$($AquaTreeUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTreeUI$PropertyChangeHandler::init$(this$0);
}

void AquaTreeUI$MacPropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($AquaFocusHandler);
	if ($nc(prop)->equals($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)) {
		$AquaBorder::repaintBorder($($AquaTreeUI::access$200(this->this$0)));
		$var($String, var$0, "Tree"_s);
		$var($JTree, var$1, $AquaTreeUI::access$300(this->this$0));
		$AquaFocusHandler::swapSelectionColors(var$0, var$1, $(e->getNewValue()));
	} else {
		$BasicTreeUI$PropertyChangeHandler::propertyChange(e);
	}
}

AquaTreeUI$MacPropertyChangeHandler::AquaTreeUI$MacPropertyChangeHandler() {
}

$Class* AquaTreeUI$MacPropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$MacPropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTreeUI;)V", nullptr, $PUBLIC, $method(AquaTreeUI$MacPropertyChangeHandler, init$, void, $AquaTreeUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTreeUI$MacPropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTreeUI$MacPropertyChangeHandler", "com.apple.laf.AquaTreeUI", "MacPropertyChangeHandler", $PUBLIC},
		{"javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicTreeUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTreeUI$MacPropertyChangeHandler",
		"javax.swing.plaf.basic.BasicTreeUI$PropertyChangeHandler",
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
	$loadClass(AquaTreeUI$MacPropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTreeUI$MacPropertyChangeHandler);
	});
	return class$;
}

$Class* AquaTreeUI$MacPropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com