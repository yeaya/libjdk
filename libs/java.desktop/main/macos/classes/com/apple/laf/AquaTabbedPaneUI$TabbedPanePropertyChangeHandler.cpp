#include <com/apple/laf/AquaTabbedPaneUI$TabbedPanePropertyChangeHandler.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef FRAME_ACTIVE_PROPERTY

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::init$(this$0);
}

void AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, prop, $nc(e)->getPropertyName());
	$init($AquaFocusHandler);
	if (!$nc($AquaFocusHandler::FRAME_ACTIVE_PROPERTY)->equals(prop)) {
		$AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler::propertyChange(e);
		return;
	}
	$var($JTabbedPane, comp, $cast($JTabbedPane, e->getSource()));
	$nc(comp)->repaint();
	int32_t selected = $nc(this->this$0->tabPane)->getSelectedIndex();
	$var($RectangleArray, theRects, this->this$0->rects);
	if (selected >= 0 && selected < $nc(theRects)->length) {
		comp->repaint(theRects->get(selected));
	}
	this->this$0->repaintContentBorderEdge();
}

AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::AquaTabbedPaneUI$TabbedPanePropertyChangeHandler() {
}

$Class* AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, $PROTECTED, $method(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, init$, void, $AquaTabbedPaneUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler", "com.apple.laf.AquaTabbedPaneUI", "TabbedPanePropertyChangeHandler", $PROTECTED},
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "PropertyChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler",
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneUI"
	};
	$loadClass(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneUI$TabbedPanePropertyChangeHandler);
	});
	return class$;
}

$Class* AquaTabbedPaneUI$TabbedPanePropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com