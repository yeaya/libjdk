#include <com/sun/java/swing/plaf/windows/WindowsSplitPaneUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsSplitPaneDivider.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $WindowsSplitPaneDivider = ::com::sun::java::swing::plaf::windows::WindowsSplitPaneDivider;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsSplitPaneUI::init$() {
	$BasicSplitPaneUI::init$();
}

$ComponentUI* WindowsSplitPaneUI::createUI($JComponent* x) {
	$init(WindowsSplitPaneUI);
	return $new(WindowsSplitPaneUI);
}

$BasicSplitPaneDivider* WindowsSplitPaneUI::createDefaultDivider() {
	return $new($WindowsSplitPaneDivider, this);
}

WindowsSplitPaneUI::WindowsSplitPaneUI() {
}

$Class* WindowsSplitPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsSplitPaneUI, init$, void)},
		{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC, $virtualMethod(WindowsSplitPaneUI, createDefaultDivider, $BasicSplitPaneDivider*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsSplitPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsSplitPaneUI",
		"javax.swing.plaf.basic.BasicSplitPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsSplitPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsSplitPaneUI);
	});
	return class$;
}

$Class* WindowsSplitPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com