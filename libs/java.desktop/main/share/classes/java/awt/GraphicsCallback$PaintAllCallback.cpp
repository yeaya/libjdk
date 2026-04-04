#include <java/awt/GraphicsCallback$PaintAllCallback.h>
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

GraphicsCallback$PaintAllCallback* GraphicsCallback$PaintAllCallback::instance = nullptr;

void GraphicsCallback$PaintAllCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PaintAllCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->paintAll(cg);
}

GraphicsCallback$PaintAllCallback* GraphicsCallback$PaintAllCallback::getInstance() {
	$init(GraphicsCallback$PaintAllCallback);
	return GraphicsCallback$PaintAllCallback::instance;
}

void GraphicsCallback$PaintAllCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PaintAllCallback::instance, $new(GraphicsCallback$PaintAllCallback));
}

GraphicsCallback$PaintAllCallback::GraphicsCallback$PaintAllCallback() {
}

$Class* GraphicsCallback$PaintAllCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PaintAllCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PaintAllCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PaintAllCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PaintAllCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PaintAllCallback, getInstance, GraphicsCallback$PaintAllCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PaintAllCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PaintAllCallback", "java.awt.GraphicsCallback", "PaintAllCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PaintAllCallback",
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
	$loadClass(GraphicsCallback$PaintAllCallback, name, initialize, &classInfo$$, GraphicsCallback$PaintAllCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PaintAllCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PaintAllCallback::class$ = nullptr;

	} // awt
} // java