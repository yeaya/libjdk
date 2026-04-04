#include <java/awt/GraphicsCallback$PrintAllCallback.h>
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

GraphicsCallback$PrintAllCallback* GraphicsCallback$PrintAllCallback::instance = nullptr;

void GraphicsCallback$PrintAllCallback::init$() {
	$GraphicsCallback::init$();
}

void GraphicsCallback$PrintAllCallback::run($Component* comp, $Graphics* cg) {
	$nc(comp)->printAll(cg);
}

GraphicsCallback$PrintAllCallback* GraphicsCallback$PrintAllCallback::getInstance() {
	$init(GraphicsCallback$PrintAllCallback);
	return GraphicsCallback$PrintAllCallback::instance;
}

void GraphicsCallback$PrintAllCallback::clinit$($Class* clazz) {
	$assignStatic(GraphicsCallback$PrintAllCallback::instance, $new(GraphicsCallback$PrintAllCallback));
}

GraphicsCallback$PrintAllCallback::GraphicsCallback$PrintAllCallback() {
}

$Class* GraphicsCallback$PrintAllCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/awt/GraphicsCallback$PrintAllCallback;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsCallback$PrintAllCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsCallback$PrintAllCallback, init$, void)},
		{"getInstance", "()Ljava/awt/GraphicsCallback$PrintAllCallback;", nullptr, $STATIC, $staticMethod(GraphicsCallback$PrintAllCallback, getInstance, GraphicsCallback$PrintAllCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(GraphicsCallback$PrintAllCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsCallback$PrintAllCallback", "java.awt.GraphicsCallback", "PrintAllCallback", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsCallback$PrintAllCallback",
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
	$loadClass(GraphicsCallback$PrintAllCallback, name, initialize, &classInfo$$, GraphicsCallback$PrintAllCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsCallback$PrintAllCallback);
	});
	return class$;
}

$Class* GraphicsCallback$PrintAllCallback::class$ = nullptr;

	} // awt
} // java