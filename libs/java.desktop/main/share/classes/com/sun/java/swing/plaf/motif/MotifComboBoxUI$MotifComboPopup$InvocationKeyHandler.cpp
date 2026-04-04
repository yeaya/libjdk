#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup.h>
#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>
#include <jcpp.h>

using $MotifComboBoxUI$MotifComboPopup = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboPopup;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup$InvocationKeyHandler = ::javax::swing::plaf::basic::BasicComboPopup$InvocationKeyHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::init$($MotifComboBoxUI$MotifComboPopup* this$1) {
	$set(this, this$1, this$1);
	$BasicComboPopup$InvocationKeyHandler::init$(this$1);
}

MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler() {
}

$Class* MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;)V", nullptr, $PROTECTED, $method(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler, init$, void, $MotifComboBoxUI$MotifComboPopup*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboPopup", $PROTECTED},
		{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler", "com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "InvocationKeyHandler", $PROTECTED},
		{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler",
		"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
	};
	$loadClass(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler);
	});
	return class$;
}

$Class* MotifComboBoxUI$MotifComboPopup$InvocationKeyHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com