#include <com/sun/java/swing/plaf/motif/MotifProgressBarUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifProgressBarUI::init$() {
	$BasicProgressBarUI::init$();
}

$ComponentUI* MotifProgressBarUI::createUI($JComponent* x) {
	$init(MotifProgressBarUI);
	return $new(MotifProgressBarUI);
}

MotifProgressBarUI::MotifProgressBarUI() {
}

$Class* MotifProgressBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifProgressBarUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifProgressBarUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifProgressBarUI",
		"javax.swing.plaf.basic.BasicProgressBarUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifProgressBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifProgressBarUI);
	});
	return class$;
}

$Class* MotifProgressBarUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com