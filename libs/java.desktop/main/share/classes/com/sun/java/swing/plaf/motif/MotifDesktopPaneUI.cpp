#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$MotifDesktopManager.h>
#include <java/awt/Insets.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $MotifDesktopPaneUI$MotifDesktopManager = ::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI$MotifDesktopManager;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$ComponentUI* MotifDesktopPaneUI::createUI($JComponent* d) {
	$init(MotifDesktopPaneUI);
	return $new(MotifDesktopPaneUI);
}

void MotifDesktopPaneUI::init$() {
	$BasicDesktopPaneUI::init$();
}

void MotifDesktopPaneUI::installDesktopManager() {
	$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
	if (this->desktopManager == nullptr) {
		$set(this, desktopManager, $new($MotifDesktopPaneUI$MotifDesktopManager, this));
		$nc(this->desktop)->setDesktopManager(this->desktopManager);
		$nc($cast($MotifDesktopPaneUI$MotifDesktopManager, this->desktopManager))->adjustIcons(this->desktop);
	}
}

$Insets* MotifDesktopPaneUI::getInsets($JComponent* c) {
	return $new($Insets, 0, 0, 0, 0);
}

MotifDesktopPaneUI::MotifDesktopPaneUI() {
}

$Class* MotifDesktopPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifDesktopPaneUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifDesktopPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{"getInsets", "(Ljavax/swing/JComponent;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(MotifDesktopPaneUI, getInsets, $Insets*, $JComponent*)},
		{"installDesktopManager", "()V", nullptr, $PROTECTED, $virtualMethod(MotifDesktopPaneUI, installDesktopManager, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager", "com.sun.java.swing.plaf.motif.MotifDesktopPaneUI", "MotifDesktopManager", $PRIVATE},
		{"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane", "com.sun.java.swing.plaf.motif.MotifDesktopPaneUI", "DragPane", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI",
		"javax.swing.plaf.basic.BasicDesktopPaneUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$MotifDesktopManager,com.sun.java.swing.plaf.motif.MotifDesktopPaneUI$DragPane"
	};
	$loadClass(MotifDesktopPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifDesktopPaneUI);
	});
	return class$;
}

$Class* MotifDesktopPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com