#include <java/awt/Component$SingleBufferStrategy.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferStrategy.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Component$SingleBufferStrategy::init$($Component* this$0, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$BufferStrategy::init$();
	$set(this, caps, caps);
}

$BufferCapabilities* Component$SingleBufferStrategy::getCapabilities() {
	return this->caps;
}

$Graphics* Component$SingleBufferStrategy::getDrawGraphics() {
	return this->this$0->getGraphics();
}

bool Component$SingleBufferStrategy::contentsLost() {
	return false;
}

bool Component$SingleBufferStrategy::contentsRestored() {
	return false;
}

void Component$SingleBufferStrategy::show() {
}

Component$SingleBufferStrategy::Component$SingleBufferStrategy() {
}

$Class* Component$SingleBufferStrategy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$SingleBufferStrategy, this$0)},
		{"caps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(Component$SingleBufferStrategy, caps)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;Ljava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, $method(Component$SingleBufferStrategy, init$, void, $Component*, $BufferCapabilities*)},
		{"contentsLost", "()Z", nullptr, $PUBLIC, $virtualMethod(Component$SingleBufferStrategy, contentsLost, bool)},
		{"contentsRestored", "()Z", nullptr, $PUBLIC, $virtualMethod(Component$SingleBufferStrategy, contentsRestored, bool)},
		{"getCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC, $virtualMethod(Component$SingleBufferStrategy, getCapabilities, $BufferCapabilities*)},
		{"getDrawGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(Component$SingleBufferStrategy, getDrawGraphics, $Graphics*)},
		{"show", "()V", nullptr, $PUBLIC, $virtualMethod(Component$SingleBufferStrategy, show, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$SingleBufferStrategy", "java.awt.Component", "SingleBufferStrategy", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Component$SingleBufferStrategy",
		"java.awt.image.BufferStrategy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Component"
	};
	$loadClass(Component$SingleBufferStrategy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Component$SingleBufferStrategy);
	});
	return class$;
}

$Class* Component$SingleBufferStrategy::class$ = nullptr;

	} // awt
} // java