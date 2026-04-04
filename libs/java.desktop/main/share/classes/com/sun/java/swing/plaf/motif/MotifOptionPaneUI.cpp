#include <com/sun/java/swing/plaf/motif/MotifOptionPaneUI.h>
#include <com/sun/java/swing/plaf/motif/MotifOptionPaneUI$1.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonAreaLayout.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef CENTER

using $MotifOptionPaneUI$1 = ::com::sun::java::swing::plaf::motif::MotifOptionPaneUI$1;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;
using $BasicOptionPaneUI$ButtonAreaLayout = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonAreaLayout;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifOptionPaneUI::init$() {
	$BasicOptionPaneUI::init$();
}

$ComponentUI* MotifOptionPaneUI::createUI($JComponent* x) {
	$init(MotifOptionPaneUI);
	return $new(MotifOptionPaneUI);
}

$Container* MotifOptionPaneUI::createButtonArea() {
	$useLocalObjectStack();
	$var($Container, b, $BasicOptionPaneUI::createButtonArea());
	if (b != nullptr && $instanceOf($BasicOptionPaneUI$ButtonAreaLayout, $(b->getLayout()))) {
		$$sure($BasicOptionPaneUI$ButtonAreaLayout, b->getLayout())->setCentersChildren(false);
	}
	return b;
}

$Dimension* MotifOptionPaneUI::getMinimumOptionPaneSize() {
	return nullptr;
}

$Container* MotifOptionPaneUI::createSeparator() {
	return $new($MotifOptionPaneUI$1, this);
}

void MotifOptionPaneUI::addIcon($Container* top) {
	$useLocalObjectStack();
	$var($Icon, sideIcon, getIcon());
	if (sideIcon != nullptr) {
		$var($JLabel, iconLabel, $new($JLabel, sideIcon));
		iconLabel->setVerticalAlignment($SwingConstants::CENTER);
		$nc(top)->add(iconLabel, "West"_s);
	}
}

MotifOptionPaneUI::MotifOptionPaneUI() {
}

$Class* MotifOptionPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifOptionPaneUI, init$, void)},
		{"addIcon", "(Ljava/awt/Container;)V", nullptr, $PROTECTED, $virtualMethod(MotifOptionPaneUI, addIcon, void, $Container*)},
		{"createButtonArea", "()Ljava/awt/Container;", nullptr, $PROTECTED, $virtualMethod(MotifOptionPaneUI, createButtonArea, $Container*)},
		{"createSeparator", "()Ljava/awt/Container;", nullptr, $PROTECTED, $virtualMethod(MotifOptionPaneUI, createSeparator, $Container*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifOptionPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"getMinimumOptionPaneSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MotifOptionPaneUI, getMinimumOptionPaneSize, $Dimension*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifOptionPaneUI",
		"javax.swing.plaf.basic.BasicOptionPaneUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifOptionPaneUI$1"
	};
	$loadClass(MotifOptionPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifOptionPaneUI);
	});
	return class$;
}

$Class* MotifOptionPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com