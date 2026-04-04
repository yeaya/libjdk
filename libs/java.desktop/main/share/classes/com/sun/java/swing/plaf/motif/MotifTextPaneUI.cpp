#include <com/sun/java/swing/plaf/motif/MotifTextPaneUI.h>
#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $MotifTextUI = ::com::sun::java::swing::plaf::motif::MotifTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTextPaneUI = ::javax::swing::plaf::basic::BasicTextPaneUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifTextPaneUI::init$() {
	$BasicTextPaneUI::init$();
}

$ComponentUI* MotifTextPaneUI::createUI($JComponent* c) {
	$init(MotifTextPaneUI);
	return $new(MotifTextPaneUI);
}

$Caret* MotifTextPaneUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifTextPaneUI::MotifTextPaneUI() {
}

$Class* MotifTextPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifTextPaneUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED, $virtualMethod(MotifTextPaneUI, createCaret, $Caret*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifTextPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifTextPaneUI",
		"javax.swing.plaf.basic.BasicTextPaneUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifTextPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifTextPaneUI));
	});
	return class$;
}

$Class* MotifTextPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com