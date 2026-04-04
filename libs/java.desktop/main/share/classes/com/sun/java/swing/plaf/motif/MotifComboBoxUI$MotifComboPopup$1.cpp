#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup$1.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <jcpp.h>

using $MotifComboBoxUI$MotifComboPopup = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI$MotifComboPopup;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifComboBoxUI$MotifComboPopup$1::init$($MotifComboBoxUI$MotifComboPopup* this$1) {
	$set(this, this$1, this$1);
	$MouseMotionAdapter::init$();
}

MotifComboBoxUI$MotifComboPopup$1::MotifComboBoxUI$MotifComboPopup$1() {
}

$Class* MotifComboBoxUI$MotifComboPopup$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$MotifComboPopup$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup;)V", nullptr, 0, $method(MotifComboBoxUI$MotifComboPopup$1, init$, void, $MotifComboBoxUI$MotifComboPopup*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup",
		"createListMouseMotionListener",
		"()Ljava/awt/event/MouseMotionListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "MotifComboPopup", $PROTECTED},
		{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup$1",
		"java.awt.event.MouseMotionAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
	};
	$loadClass(MotifComboBoxUI$MotifComboPopup$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifComboBoxUI$MotifComboPopup$1);
	});
	return class$;
}

$Class* MotifComboBoxUI$MotifComboPopup$1::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com