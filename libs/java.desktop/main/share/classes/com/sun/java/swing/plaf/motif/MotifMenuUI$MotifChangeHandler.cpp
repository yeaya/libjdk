#include <com/sun/java/swing/plaf/motif/MotifMenuUI$MotifChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuUI.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>
#include <jcpp.h>

using $MotifMenuUI = ::com::sun::java::swing::plaf::motif::MotifMenuUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicMenuUI$ChangeHandler = ::javax::swing::plaf::basic::BasicMenuUI$ChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifMenuUI$MotifChangeHandler::init$($MotifMenuUI* this$0, $JMenu* m, $MotifMenuUI* ui) {
	$set(this, this$0, this$0);
	$BasicMenuUI$ChangeHandler::init$(this$0, m, ui);
}

void MotifMenuUI$MotifChangeHandler::stateChanged($ChangeEvent* e) {
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	bool var$0 = $nc(c)->isArmed();
	if (var$0 || c->isSelected()) {
		c->setBorderPainted(true);
	} else {
		c->setBorderPainted(false);
	}
	$BasicMenuUI$ChangeHandler::stateChanged(e);
}

MotifMenuUI$MotifChangeHandler::MotifMenuUI$MotifChangeHandler() {
}

$Class* MotifMenuUI$MotifChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuUI$MotifChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuUI;Ljavax/swing/JMenu;Lcom/sun/java/swing/plaf/motif/MotifMenuUI;)V", nullptr, $PUBLIC, $method(MotifMenuUI$MotifChangeHandler, init$, void, $MotifMenuUI*, $JMenu*, $MotifMenuUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifMenuUI$MotifChangeHandler, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuUI", "MotifChangeHandler", $PUBLIC},
		{"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler", "javax.swing.plaf.basic.BasicMenuUI", "ChangeHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler",
		"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifMenuUI"
	};
	$loadClass(MotifMenuUI$MotifChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifMenuUI$MotifChangeHandler);
	});
	return class$;
}

$Class* MotifMenuUI$MotifChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com