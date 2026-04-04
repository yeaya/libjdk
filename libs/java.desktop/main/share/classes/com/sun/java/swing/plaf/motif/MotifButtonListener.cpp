#include <com/sun/java/swing/plaf/motif/MotifButtonListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifButtonListener::init$($AbstractButton* b) {
	$BasicButtonListener::init$(b);
}

void MotifButtonListener::checkOpacity($AbstractButton* b) {
	$nc(b)->setOpaque(false);
}

MotifButtonListener::MotifButtonListener() {
}

$Class* MotifButtonListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $method(MotifButtonListener, init$, void, $AbstractButton*)},
		{"checkOpacity", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MotifButtonListener, checkOpacity, void, $AbstractButton*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifButtonListener",
		"javax.swing.plaf.basic.BasicButtonListener",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MotifButtonListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifButtonListener));
	});
	return class$;
}

$Class* MotifButtonListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com