#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $MotifCheckBoxMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI;
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

void MotifCheckBoxMenuItemUI$ChangeHandler::init$($MotifCheckBoxMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifCheckBoxMenuItemUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	$LookAndFeel::installProperty(c, "borderPainted"_s, $($Boolean::valueOf($nc(c)->isArmed())));
}

MotifCheckBoxMenuItemUI$ChangeHandler::MotifCheckBoxMenuItemUI$ChangeHandler() {
}

$Class* MotifCheckBoxMenuItemUI$ChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifCheckBoxMenuItemUI$ChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI;)V", nullptr, $PROTECTED, $method(MotifCheckBoxMenuItemUI$ChangeHandler, init$, void, $MotifCheckBoxMenuItemUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifCheckBoxMenuItemUI$ChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "ChangeHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler",
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
		"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI"
	};
	$loadClass(MotifCheckBoxMenuItemUI$ChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifCheckBoxMenuItemUI$ChangeHandler);
	});
	return class$;
}

$Class* MotifCheckBoxMenuItemUI$ChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com