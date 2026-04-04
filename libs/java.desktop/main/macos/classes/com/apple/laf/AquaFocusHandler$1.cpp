#include <com/apple/laf/AquaFocusHandler$1.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaFocusHandler$1::init$() {
}

void AquaFocusHandler$1::propertyChange($PropertyChangeEvent* evt) {
	$var($Object, source, $nc(evt)->getSource());
	if ($instanceOf($JComponent, source)) {
		$cast($JComponent, source)->repaint();
	}
}

AquaFocusHandler$1::AquaFocusHandler$1() {
}

$Class* AquaFocusHandler$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaFocusHandler$1, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaFocusHandler$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFocusHandler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFocusHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFocusHandler$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFocusHandler"
	};
	$loadClass(AquaFocusHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFocusHandler$1);
	});
	return class$;
}

$Class* AquaFocusHandler$1::class$ = nullptr;

		} // laf
	} // apple
} // com