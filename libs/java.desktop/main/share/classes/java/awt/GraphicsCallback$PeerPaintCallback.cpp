#include <java/awt/GraphicsCallback$PeerPaintCallback.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

GraphicsCallback$PeerPaintCallback* GraphicsCallback$PeerPaintCallback::instance = nullptr;

void GraphicsCallback$PeerPaintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PeerPaintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->validate();
	if ($instanceOf($LightweightPeer, comp->peer)) {
		comp->lightweightPaint(cg);
	} else {
		$nc(comp->peer)->paint(cg);
	}
}

GraphicsCallback$PeerPaintCallback* GraphicsCallback$PeerPaintCallback::getInstance() {
	$init(GraphicsCallback$PeerPaintCallback);
	return GraphicsCallback$PeerPaintCallback::instance;
}

void GraphicsCallback$PeerPaintCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PeerPaintCallback::instance, $new(GraphicsCallback$PeerPaintCallback));
}

GraphicsCallback$PeerPaintCallback::GraphicsCallback$PeerPaintCallback() {
}

$Class* GraphicsCallback$PeerPaintCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PeerPaintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PeerPaintCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PeerPaintCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PeerPaintCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PeerPaintCallback, getInstance, GraphicsCallback$PeerPaintCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PeerPaintCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PeerPaintCallback", "java.awt.GraphicsCallback", "PeerPaintCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PeerPaintCallback",
		"java.awt.GraphicsCallback",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.GraphicsCallback"
	};
	$loadClass(GraphicsCallback$PeerPaintCallback, name, initialize, &classInfo$$, GraphicsCallback$PeerPaintCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PeerPaintCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PeerPaintCallback::class$ = nullptr;

	} // awt
} // java