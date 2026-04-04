#include <sun/awt/X11/XMSelectionListener.h>
#include <sun/awt/X11/XMSelection.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMSelection = ::sun::awt::X11::XMSelection;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XMSelectionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"ownerChanged", "(ILsun/awt/X11/XMSelection;JJJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMSelectionListener, ownerChanged, void, int32_t, $XMSelection*, int64_t, int64_t, int64_t)},
		{"ownerDeath", "(ILsun/awt/X11/XMSelection;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMSelectionListener, ownerDeath, void, int32_t, $XMSelection*, int64_t)},
		{"selectionChanged", "(ILsun/awt/X11/XMSelection;JLsun/awt/X11/XPropertyEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMSelectionListener, selectionChanged, void, int32_t, $XMSelection*, int64_t, $XPropertyEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.XMSelectionListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMSelectionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMSelectionListener);
	});
	return class$;
}

$Class* XMSelectionListener::class$ = nullptr;

		} // X11
	} // awt
} // sun