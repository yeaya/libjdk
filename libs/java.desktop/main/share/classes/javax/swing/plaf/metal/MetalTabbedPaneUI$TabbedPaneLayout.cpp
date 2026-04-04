#include <javax/swing/plaf/metal/MetalTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/metal/MetalTabbedPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout;
using $MetalTabbedPaneUI = ::javax::swing::plaf::metal::MetalTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTabbedPaneUI$TabbedPaneLayout::init$($MetalTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTabbedPaneUI$TabbedPaneLayout::init$(this$0);
}

void MetalTabbedPaneUI$TabbedPaneLayout::normalizeTabRuns(int32_t tabPlacement, int32_t tabCount, int32_t start, int32_t max) {
	if (tabPlacement == 1 || tabPlacement == 3) {
		$BasicTabbedPaneUI$TabbedPaneLayout::normalizeTabRuns(tabPlacement, tabCount, start, max);
	}
}

void MetalTabbedPaneUI$TabbedPaneLayout::rotateTabRuns(int32_t tabPlacement, int32_t selectedRun) {
}

void MetalTabbedPaneUI$TabbedPaneLayout::padSelectedTab(int32_t tabPlacement, int32_t selectedIndex) {
}

MetalTabbedPaneUI$TabbedPaneLayout::MetalTabbedPaneUI$TabbedPaneLayout() {
}

$Class* MetalTabbedPaneUI$TabbedPaneLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTabbedPaneUI$TabbedPaneLayout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalTabbedPaneUI;)V", nullptr, $PUBLIC, $method(MetalTabbedPaneUI$TabbedPaneLayout, init$, void, $MetalTabbedPaneUI*)},
		{"normalizeTabRuns", "(IIII)V", nullptr, $PROTECTED, $virtualMethod(MetalTabbedPaneUI$TabbedPaneLayout, normalizeTabRuns, void, int32_t, int32_t, int32_t, int32_t)},
		{"padSelectedTab", "(II)V", nullptr, $PROTECTED, $virtualMethod(MetalTabbedPaneUI$TabbedPaneLayout, padSelectedTab, void, int32_t, int32_t)},
		{"rotateTabRuns", "(II)V", nullptr, $PROTECTED, $virtualMethod(MetalTabbedPaneUI$TabbedPaneLayout, rotateTabRuns, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.metal.MetalTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
		{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalTabbedPaneUI$TabbedPaneLayout",
		"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalTabbedPaneUI"
	};
	$loadClass(MetalTabbedPaneUI$TabbedPaneLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalTabbedPaneUI$TabbedPaneLayout);
	});
	return class$;
}

$Class* MetalTabbedPaneUI$TabbedPaneLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax