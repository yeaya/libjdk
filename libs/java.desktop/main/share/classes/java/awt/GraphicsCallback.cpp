#include <java/awt/GraphicsCallback.h>
#include <sun/awt/SunGraphicsCallback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;

namespace java {
	namespace awt {

void GraphicsCallback::init$() {
	$SunGraphicsCallback::init$();
}

GraphicsCallback::GraphicsCallback() {
}

$Class* GraphicsCallback::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GraphicsCallback, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PrintHeavyweightComponentsCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PaintHeavyweightComponentsCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PeerPrintCallback", "java.awt.GraphicsCallback", "PeerPrintCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PeerPaintCallback", "java.awt.GraphicsCallback", "PeerPaintCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PrintAllCallback", "java.awt.GraphicsCallback", "PrintAllCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PaintAllCallback", "java.awt.GraphicsCallback", "PaintAllCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PrintCallback", "java.awt.GraphicsCallback", "PrintCallback", $STATIC | $FINAL},
		{"java.awt.GraphicsCallback$PaintCallback", "java.awt.GraphicsCallback", "PaintCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.awt.GraphicsCallback",
		"sun.awt.SunGraphicsCallback",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback,java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback,java.awt.GraphicsCallback$PeerPrintCallback,java.awt.GraphicsCallback$PeerPaintCallback,java.awt.GraphicsCallback$PrintAllCallback,java.awt.GraphicsCallback$PaintAllCallback,java.awt.GraphicsCallback$PrintCallback,java.awt.GraphicsCallback$PaintCallback"
	};
	$loadClass(GraphicsCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback);
	});
	return class$;
}

$Class* GraphicsCallback::class$ = nullptr;

	} // awt
} // java