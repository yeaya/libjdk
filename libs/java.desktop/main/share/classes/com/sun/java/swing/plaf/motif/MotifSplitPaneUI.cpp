#include <com/sun/java/swing/plaf/motif/MotifSplitPaneUI.h>
#include <com/sun/java/swing/plaf/motif/MotifSplitPaneDivider.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $MotifSplitPaneDivider = ::com::sun::java::swing::plaf::motif::MotifSplitPaneDivider;
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
					namespace motif {

void MotifSplitPaneUI::init$() {
	$BasicSplitPaneUI::init$();
}

$ComponentUI* MotifSplitPaneUI::createUI($JComponent* x) {
	$init(MotifSplitPaneUI);
	return $new(MotifSplitPaneUI);
}

$BasicSplitPaneDivider* MotifSplitPaneUI::createDefaultDivider() {
	return $new($MotifSplitPaneDivider, this);
}

MotifSplitPaneUI::MotifSplitPaneUI() {
}

$Class* MotifSplitPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifSplitPaneUI, init$, void)},
		{"createDefaultDivider", "()Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $PUBLIC, $virtualMethod(MotifSplitPaneUI, createDefaultDivider, $BasicSplitPaneDivider*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifSplitPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifSplitPaneUI",
		"javax.swing.plaf.basic.BasicSplitPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifSplitPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifSplitPaneUI);
	});
	return class$;
}

$Class* MotifSplitPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com