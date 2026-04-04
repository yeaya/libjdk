#include <java/awt/GraphicsCallback$PeerPrintCallback.h>
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

GraphicsCallback$PeerPrintCallback* GraphicsCallback$PeerPrintCallback::instance = nullptr;

void GraphicsCallback$PeerPrintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PeerPrintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->validate();
	if ($instanceOf($LightweightPeer, comp->peer)) {
		comp->lightweightPrint(cg);
	} else {
		$nc(comp->peer)->print(cg);
	}
}

GraphicsCallback$PeerPrintCallback* GraphicsCallback$PeerPrintCallback::getInstance() {
	$init(GraphicsCallback$PeerPrintCallback);
	return GraphicsCallback$PeerPrintCallback::instance;
}

void GraphicsCallback$PeerPrintCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PeerPrintCallback::instance, $new(GraphicsCallback$PeerPrintCallback));
}

GraphicsCallback$PeerPrintCallback::GraphicsCallback$PeerPrintCallback() {
}

$Class* GraphicsCallback$PeerPrintCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PeerPrintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PeerPrintCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PeerPrintCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PeerPrintCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PeerPrintCallback, getInstance, GraphicsCallback$PeerPrintCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PeerPrintCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PeerPrintCallback", "java.awt.GraphicsCallback", "PeerPrintCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PeerPrintCallback",
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
	$loadClass(GraphicsCallback$PeerPrintCallback, name, initialize, &classInfo$$, GraphicsCallback$PeerPrintCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PeerPrintCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PeerPrintCallback::class$ = nullptr;

	} // awt
} // java