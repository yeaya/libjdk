#include <com/apple/laf/AquaButtonUI$AquaHierarchyButtonListener.h>
#include <com/apple/laf/AquaButtonUI.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef PARENT_CHANGED

using $AquaButtonUI = ::com::apple::laf::AquaButtonUI;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonUI$AquaHierarchyButtonListener::init$() {
}

void AquaButtonUI$AquaHierarchyButtonListener::hierarchyChanged($HierarchyEvent* e) {
	$useLocalObjectStack();
	if (($nc(e)->getChangeFlags() & $HierarchyEvent::PARENT_CHANGED) == 0) {
		return;
	}
	$var($Object, o, e->getSource());
	if (!($instanceOf($AbstractButton, o))) {
		return;
	}
	$var($AbstractButton, b, $cast($AbstractButton, o));
	$var($ButtonUI, ui, $cast($ButtonUI, $nc(b)->getUI()));
	if (!($instanceOf($AquaButtonUI, ui))) {
		return;
	}
	if (!($instanceOf($UIResource, $(b->getBorder())))) {
		return;
	}
	$nc($cast($AquaButtonUI, ui))->setThemeBorder(b);
}

AquaButtonUI$AquaHierarchyButtonListener::AquaButtonUI$AquaHierarchyButtonListener() {
}

$Class* AquaButtonUI$AquaHierarchyButtonListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaButtonUI$AquaHierarchyButtonListener, init$, void)},
		{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaButtonUI$AquaHierarchyButtonListener, hierarchyChanged, void, $HierarchyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener", "com.apple.laf.AquaButtonUI", "AquaHierarchyButtonListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonUI$AquaHierarchyButtonListener",
		"java.lang.Object",
		"java.awt.event.HierarchyListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonUI"
	};
	$loadClass(AquaButtonUI$AquaHierarchyButtonListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonUI$AquaHierarchyButtonListener);
	});
	return class$;
}

$Class* AquaButtonUI$AquaHierarchyButtonListener::class$ = nullptr;

		} // laf
	} // apple
} // com