#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

#undef LAYER_ALWAYS_ON_TOP
#undef LAYER_NORMAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$Class* XLayerProtocol::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LAYER_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XLayerProtocol, LAYER_NORMAL)},
		{"LAYER_ALWAYS_ON_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XLayerProtocol, LAYER_ALWAYS_ON_TOP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"setLayer", "(Lsun/awt/X11/XWindowPeer;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XLayerProtocol, setLayer, void, $XWindowPeer*, int32_t)},
		{"supportsLayer", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XLayerProtocol, supportsLayer, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.X11.XLayerProtocol",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XLayerProtocol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XLayerProtocol);
	});
	return class$;
}

$Class* XLayerProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun