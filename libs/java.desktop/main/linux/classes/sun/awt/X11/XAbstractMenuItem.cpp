#include <sun/awt/X11/XAbstractMenuItem.h>
#include <java/awt/Graphics.h>
#include <sun/awt/X11/XMenuPeer.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMenuPeer = ::sun::awt::X11::XMenuPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XAbstractMenuItem::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getHeight", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAbstractMenuItem, getHeight, int32_t, $Graphics*)},
		{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAbstractMenuItem, getLabel, $String*)},
		{"getShortcutWidth", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAbstractMenuItem, getShortcutWidth, int32_t, $Graphics*)},
		{"getWidth", "(Ljava/awt/Graphics;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAbstractMenuItem, getWidth, int32_t, $Graphics*)},
		{"paint", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAbstractMenuItem, paint, void, $Graphics*, int32_t, int32_t, int32_t, int32_t, bool)},
		{"setMenuPeer", "(Lsun/awt/X11/XMenuPeer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAbstractMenuItem, setMenuPeer, void, $XMenuPeer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.XAbstractMenuItem",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XAbstractMenuItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XAbstractMenuItem);
	});
	return class$;
}

$Class* XAbstractMenuItem::class$ = nullptr;

		} // X11
	} // awt
} // sun