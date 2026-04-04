#include <com/sun/java/swing/plaf/motif/MotifTextFieldUI.h>
#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $MotifTextUI = ::com::sun::java::swing::plaf::motif::MotifTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* MotifTextFieldUI::createUI($JComponent* c) {
	$init(MotifTextFieldUI);
	return $new(MotifTextFieldUI);
}

$Caret* MotifTextFieldUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifTextFieldUI::MotifTextFieldUI() {
}

$Class* MotifTextFieldUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifTextFieldUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(MotifTextFieldUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifTextFieldUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifTextFieldUI",
		"javax.swing.plaf.basic.BasicTextFieldUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifTextFieldUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifTextFieldUI));
	});
	return class$;
}

$Class* MotifTextFieldUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com