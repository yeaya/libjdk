#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $MotifMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifMenuItemUI$ChangeHandler::init$($MotifMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifMenuItemUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	bool var$0 = $nc(c)->isArmed();
	$LookAndFeel::installProperty(c, "borderPainted"_s, $($Boolean::valueOf(var$0 || c->isSelected())));
}

MotifMenuItemUI$ChangeHandler::MotifMenuItemUI$ChangeHandler() {
}

$Class* MotifMenuItemUI$ChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuItemUI$ChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuItemUI;)V", nullptr, $PROTECTED, $method(MotifMenuItemUI$ChangeHandler, init$, void, $MotifMenuItemUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuItemUI$ChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "ChangeHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifMenuItemUI"
	};
	$loadClass(MotifMenuItemUI$ChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifMenuItemUI$ChangeHandler);
	});
	return class$;
}

$Class* MotifMenuItemUI$ChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com