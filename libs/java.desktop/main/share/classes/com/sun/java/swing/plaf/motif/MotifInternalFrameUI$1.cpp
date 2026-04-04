#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI$1.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameUI.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $MotifInternalFrameUI = ::com::sun::java::swing::plaf::motif::MotifInternalFrameUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifInternalFrameUI$1::init$($MotifInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void MotifInternalFrameUI$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->titlePane)->showSystemMenu();
}

bool MotifInternalFrameUI$1::isEnabled() {
	return this->this$0->isKeyBindingActive();
}

MotifInternalFrameUI$1::MotifInternalFrameUI$1() {
}

$Class* MotifInternalFrameUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameUI;)V", nullptr, 0, $method(MotifInternalFrameUI$1, init$, void, $MotifInternalFrameUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameUI$1, actionPerformed, void, $ActionEvent*)},
		{"isEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(MotifInternalFrameUI$1, isEnabled, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifInternalFrameUI",
		"setupMenuOpenKey",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifInternalFrameUI$1",
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
	$loadClass(MotifInternalFrameUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifInternalFrameUI$1));
	});
	return class$;
}

$Class* MotifInternalFrameUI$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com