#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/util/EventObject.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifDesktopIconUI$DesktopIconMouseListener::init$($MotifDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void MotifDesktopIconUI$DesktopIconMouseListener::mousePressed($MouseEvent* e) {
	$useLocalObjectStack();
	if ($nc(e)->getClickCount() > 1) {
		try {
			$$nc(this->this$0->getFrame())->setIcon(false);
		} catch ($PropertyVetoException& e2) {
		}
		$nc(this->this$0->systemMenu)->setVisible(false);
		$$nc($$nc($$nc(this->this$0->getFrame())->getDesktopPane())->getDesktopManager())->endDraggingFrame($$cast($JComponent, e->getSource()));
	}
}

MotifDesktopIconUI$DesktopIconMouseListener::MotifDesktopIconUI$DesktopIconMouseListener() {
}

$Class* MotifDesktopIconUI$DesktopIconMouseListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$DesktopIconMouseListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", nullptr, $PROTECTED, $method(MotifDesktopIconUI$DesktopIconMouseListener, init$, void, $MotifDesktopIconUI*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$DesktopIconMouseListener, mousePressed, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "DesktopIconMouseListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener",
		"java.awt.event.MouseAdapter",
		nullptr,
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
	$loadClass(MotifDesktopIconUI$DesktopIconMouseListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifDesktopIconUI$DesktopIconMouseListener));
	});
	return class$;
}

$Class* MotifDesktopIconUI$DesktopIconMouseListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com