#include <java/awt/GraphicsCallback$PaintCallback.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsCallback.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $GraphicsCallback = ::java::awt::GraphicsCallback;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

GraphicsCallback$PaintCallback* GraphicsCallback$PaintCallback::instance = nullptr;

void GraphicsCallback$PaintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PaintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->paint(cg);
}

GraphicsCallback$PaintCallback* GraphicsCallback$PaintCallback::getInstance() {
	$init(GraphicsCallback$PaintCallback);
	return GraphicsCallback$PaintCallback::instance;
}

void GraphicsCallback$PaintCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PaintCallback::instance, $new(GraphicsCallback$PaintCallback));
}

GraphicsCallback$PaintCallback::GraphicsCallback$PaintCallback() {
}

$Class* GraphicsCallback$PaintCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PaintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PaintCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PaintCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PaintCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PaintCallback, getInstance, GraphicsCallback$PaintCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PaintCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PaintCallback", "java.awt.GraphicsCallback", "PaintCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PaintCallback",
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
	$loadClass(GraphicsCallback$PaintCallback, name, initialize, &classInfo$$, GraphicsCallback$PaintCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PaintCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PaintCallback::class$ = nullptr;

	} // awt
} // java