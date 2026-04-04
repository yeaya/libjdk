#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifDesktopIconUI$DesktopIconActionListener::init$($MotifDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifDesktopIconUI$DesktopIconActionListener::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->systemMenu)->show(this->this$0->iconButton, 0, $$nc(this->this$0->getDesktopIcon())->getHeight());
}

MotifDesktopIconUI$DesktopIconActionListener::MotifDesktopIconUI$DesktopIconActionListener() {
}

$Class* MotifDesktopIconUI$DesktopIconActionListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$DesktopIconActionListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", nullptr, $PROTECTED, $method(MotifDesktopIconUI$DesktopIconActionListener, init$, void, $MotifDesktopIconUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$DesktopIconActionListener, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "DesktopIconActionListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
	};
	$loadClass(MotifDesktopIconUI$DesktopIconActionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifDesktopIconUI$DesktopIconActionListener);
	});
	return class$;
}

$Class* MotifDesktopIconUI$DesktopIconActionListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com