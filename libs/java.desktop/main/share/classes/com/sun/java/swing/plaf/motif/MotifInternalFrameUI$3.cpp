#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$3.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifInternalFrameUI = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifInternalFrameUI$3::init$($MotifInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void MotifInternalFrameUI$3::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JInternalFrame$JDesktopIcon, icon, $$nc(this->this$0->getFrame())->getDesktopIcon());
	$var($MotifDesktopIconUI, micon, $cast($MotifDesktopIconUI, $cast($DesktopIconUI, $nc(icon)->getUI())));
	$nc(micon)->hideSystemMenu();
}

bool MotifInternalFrameUI$3::isEnabled() {
	return this->this$0->isKeyBindingActive();
}

MotifInternalFrameUI$3::MotifInternalFrameUI$3() {
}

$Class* MotifInternalFrameUI$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameUI$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;)V", nullptr, 0, $method(MotifInternalFrameUI$3, init$, void, $MotifInternalFrameUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameUI$3, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameUI$3, isEnabled, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifInternalFrameUI",
		"setupMenuCloseKey",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$3",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifInternalFrameUI"
	};
	$loadClass(MotifInternalFrameUI$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifInternalFrameUI$3));
	});
	return class$;
}

$Class* MotifInternalFrameUI$3::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com