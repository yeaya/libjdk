#include <java/awt/GraphicsCallback$PrintHeavyweightComponentsCallback.h>
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

GraphicsCallback$PrintHeavyweightComponentsCallback* GraphicsCallback$PrintHeavyweightComponentsCallback::instance = nullptr;

void GraphicsCallback$PrintHeavyweightComponentsCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PrintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if ($instanceOf($LightweightPeer, $nc(comp)->peer)) {
		comp->printHeavyweightComponents(cg);
	} else {
		comp->printAll(cg);
	}
}

GraphicsCallback$PrintHeavyweightComponentsCallback* GraphicsCallback$PrintHeavyweightComponentsCallback::getInstance() {
	$init(GraphicsCallback$PrintHeavyweightComponentsCallback);
	return GraphicsCallback$PrintHeavyweightComponentsCallback::instance;
}

void GraphicsCallback$PrintHeavyweightComponentsCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PrintHeavyweightComponentsCallback::instance, $new(GraphicsCallback$PrintHeavyweightComponentsCallback));
}

GraphicsCallback$PrintHeavyweightComponentsCallback::GraphicsCallback$PrintHeavyweightComponentsCallback() {
}

$Class* GraphicsCallback$PrintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PrintHeavyweightComponentsCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PrintHeavyweightComponentsCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PrintHeavyweightComponentsCallback, getInstance, GraphicsCallback$PrintHeavyweightComponentsCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PrintHeavyweightComponentsCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PrintHeavyweightComponentsCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback",
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
	$loadClass(GraphicsCallback$PrintHeavyweightComponentsCallback, name, initialize, &classInfo$$, GraphicsCallback$PrintHeavyweightComponentsCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PrintHeavyweightComponentsCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PrintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // java