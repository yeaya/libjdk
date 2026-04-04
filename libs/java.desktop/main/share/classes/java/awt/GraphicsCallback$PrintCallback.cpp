#include <java/awt/GraphicsCallback$PrintCallback.h>
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

GraphicsCallback$PrintCallback* GraphicsCallback$PrintCallback::instance = nullptr;

void GraphicsCallback$PrintCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PrintCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->print(cg);
}

GraphicsCallback$PrintCallback* GraphicsCallback$PrintCallback::getInstance() {
	$init(GraphicsCallback$PrintCallback);
	return GraphicsCallback$PrintCallback::instance;
}

void GraphicsCallback$PrintCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PrintCallback::instance, $new(GraphicsCallback$PrintCallback));
}

GraphicsCallback$PrintCallback::GraphicsCallback$PrintCallback() {
}

$Class* GraphicsCallback$PrintCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PrintCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PrintCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PrintCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PrintCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PrintCallback, getInstance, GraphicsCallback$PrintCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PrintCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PrintCallback", "java.awt.GraphicsCallback", "PrintCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PrintCallback",
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
	$loadClass(GraphicsCallback$PrintCallback, name, initialize, &classInfo$$, GraphicsCallback$PrintCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PrintCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PrintCallback::class$ = nullptr;

	} // awt
} // java