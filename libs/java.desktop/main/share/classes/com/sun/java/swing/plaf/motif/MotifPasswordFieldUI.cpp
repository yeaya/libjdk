#include <com/sun/java/swing/plaf/motif/MotifPasswordFieldUI.h>
#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $MotifTextUI = ::com::sun::java::swing::plaf::motif::MotifTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicPasswordFieldUI = ::javax::swing::plaf::basic::BasicPasswordFieldUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifPasswordFieldUI::init$() {
	$BasicPasswordFieldUI::init$();
}

$ComponentUI* MotifPasswordFieldUI::createUI($JComponent* c) {
	$init(MotifPasswordFieldUI);
	return $new(MotifPasswordFieldUI);
}

$Caret* MotifPasswordFieldUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifPasswordFieldUI::MotifPasswordFieldUI() {
}

$Class* MotifPasswordFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifPasswordFieldUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(MotifPasswordFieldUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifPasswordFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifPasswordFieldUI",
		"javax.swing.plaf.basic.BasicPasswordFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifPasswordFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifPasswordFieldUI));
	});
	return class$;
}

$Class* MotifPasswordFieldUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com