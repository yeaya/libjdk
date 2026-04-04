#include <sun/awt/X11/XDragSourceProtocol$TargetWindowInfo.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

void XDragSourceProtocol$TargetWindowInfo::init$(int64_t proxy, int32_t version) {
	this->proxyWindow = proxy;
	this->protocolVersion = version;
}

int64_t XDragSourceProtocol$TargetWindowInfo::getProxyWindow() {
	return this->proxyWindow;
}

int32_t XDragSourceProtocol$TargetWindowInfo::getProtocolVersion() {
	return this->protocolVersion;
}

XDragSourceProtocol$TargetWindowInfo::XDragSourceProtocol$TargetWindowInfo() {
}

$Class* XDragSourceProtocol$TargetWindowInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"proxyWindow", "J", nullptr, $PRIVATE | $FINAL, $field(XDragSourceProtocol$TargetWindowInfo, proxyWindow)},
		{"protocolVersion", "I", nullptr, $PRIVATE | $FINAL, $field(XDragSourceProtocol$TargetWindowInfo, protocolVersion)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JI)V", nullptr, $PUBLIC, $method(XDragSourceProtocol$TargetWindowInfo, init$, void, int64_t, int32_t)},
		{"getProtocolVersion", "()I", nullptr, $PUBLIC, $virtualMethod(XDragSourceProtocol$TargetWindowInfo, getProtocolVersion, int32_t)},
		{"getProxyWindow", "()J", nullptr, $PUBLIC, $virtualMethod(XDragSourceProtocol$TargetWindowInfo, getProxyWindow, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XDragSourceProtocol$TargetWindowInfo", "sun.awt.X11.XDragSourceProtocol", "TargetWindowInfo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XDragSourceProtocol$TargetWindowInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XDragSourceProtocol"
	};
	$loadClass(XDragSourceProtocol$TargetWindowInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XDragSourceProtocol$TargetWindowInfo);
	});
	return class$;
}

$Class* XDragSourceProtocol$TargetWindowInfo::class$ = nullptr;

		} // X11
	} // awt
} // sun