#include <sun/awt/ModalityListener.h>
#include <sun/awt/ModalityEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModalityEvent = ::sun::awt::ModalityEvent;

namespace sun {
	namespace awt {

$Class* ModalityListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"modalityPopped", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModalityListener, modalityPopped, void, $ModalityEvent*)},
		{"modalityPushed", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModalityListener, modalityPushed, void, $ModalityEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.ModalityListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ModalityListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModalityListener);
	});
	return class$;
}

$Class* ModalityListener::class$ = nullptr;

	} // awt
} // sun