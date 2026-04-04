#include <java/awt/GraphicsCallback$PaintHeavyweightComponentsCallback.h>
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

GraphicsCallback$PaintHeavyweightComponentsCallback* GraphicsCallback$PaintHeavyweightComponentsCallback::instance = nullptr;

void GraphicsCallback$PaintHeavyweightComponentsCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PaintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if ($instanceOf($LightweightPeer, $nc(comp)->peer)) {
		comp->paintHeavyweightComponents(cg);
	} else {
		comp->paintAll(cg);
	}
}

GraphicsCallback$PaintHeavyweightComponentsCallback* GraphicsCallback$PaintHeavyweightComponentsCallback::getInstance() {
	$init(GraphicsCallback$PaintHeavyweightComponentsCallback);
	return GraphicsCallback$PaintHeavyweightComponentsCallback::instance;
}

void GraphicsCallback$PaintHeavyweightComponentsCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PaintHeavyweightComponentsCallback::instance, $new(GraphicsCallback$PaintHeavyweightComponentsCallback));
}

GraphicsCallback$PaintHeavyweightComponentsCallback::GraphicsCallback$PaintHeavyweightComponentsCallback() {
}

$Class* GraphicsCallback$PaintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PaintHeavyweightComponentsCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PaintHeavyweightComponentsCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PaintHeavyweightComponentsCallback, getInstance, GraphicsCallback$PaintHeavyweightComponentsCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PaintHeavyweightComponentsCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback", "java.awt.GraphicsCallback", "PaintHeavyweightComponentsCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback",
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
	$loadClass(GraphicsCallback$PaintHeavyweightComponentsCallback, name, initialize, &classInfo$$, GraphicsCallback$PaintHeavyweightComponentsCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PaintHeavyweightComponentsCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PaintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // java