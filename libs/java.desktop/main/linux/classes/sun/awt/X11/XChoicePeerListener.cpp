#include <sun/awt/X11/XChoicePeerListener.h>
#include <sun/awt/X11/ListHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListHelper = ::sun::awt::X11::ListHelper;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XChoicePeerListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"unfurledChoiceClosing", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XChoicePeerListener, unfurledChoiceClosing, void)},
		{"unfurledChoiceOpening", "(Lsun/awt/X11/ListHelper;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XChoicePeerListener, unfurledChoiceOpening, void, $ListHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.awt.X11.XChoicePeerListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XChoicePeerListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XChoicePeerListener);
	});
	return class$;
}

$Class* XChoicePeerListener::class$ = nullptr;

		} // X11
	} // awt
} // sun