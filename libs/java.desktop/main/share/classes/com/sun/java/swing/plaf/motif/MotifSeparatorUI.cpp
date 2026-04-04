#include <com/sun/java/swing/plaf/motif/MotifSeparatorUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

$ComponentUI* MotifSeparatorUI::createUI($JComponent* c) {
	$init(MotifSeparatorUI);
	return $new(MotifSeparatorUI);
}

MotifSeparatorUI::MotifSeparatorUI() {
}

$Class* MotifSeparatorUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifSeparatorUI",
		"javax.swing.plaf.basic.BasicSeparatorUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifSeparatorUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifSeparatorUI);
	});
	return class$;
}

$Class* MotifSeparatorUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com