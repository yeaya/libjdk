#include <sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <sun/awt/SunGraphicsCallback.h>
#include <jcpp.h>

#undef HEAVYWEIGHTS
#undef LIGHTWEIGHTS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;

namespace sun {
	namespace awt {

SunGraphicsCallback$PrintHeavyweightComponentsCallback* SunGraphicsCallback$PrintHeavyweightComponentsCallback::instance = nullptr;

void SunGraphicsCallback$PrintHeavyweightComponentsCallback::init$() {
	$SunGraphicsCallback::init$();
}

void SunGraphicsCallback$PrintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if (!$nc(comp)->isLightweight()) {
		comp->printAll(cg);
	} else if ($instanceOf($Container, comp)) {
		runComponents($($cast($Container, comp)->getComponents()), cg, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
	}
}

SunGraphicsCallback$PrintHeavyweightComponentsCallback* SunGraphicsCallback$PrintHeavyweightComponentsCallback::getInstance() {
	$init(SunGraphicsCallback$PrintHeavyweightComponentsCallback);
	return SunGraphicsCallback$PrintHeavyweightComponentsCallback::instance;
}

void SunGraphicsCallback$PrintHeavyweightComponentsCallback::clinit$($Class* clazz) {
	$assignStatic(SunGraphicsCallback$PrintHeavyweightComponentsCallback::instance, $new(SunGraphicsCallback$PrintHeavyweightComponentsCallback));
}

SunGraphicsCallback$PrintHeavyweightComponentsCallback::SunGraphicsCallback$PrintHeavyweightComponentsCallback() {
}

$Class* SunGraphicsCallback$PrintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphicsCallback$PrintHeavyweightComponentsCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SunGraphicsCallback$PrintHeavyweightComponentsCallback, init$, void)},
		{"getInstance", "()Lsun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunGraphicsCallback$PrintHeavyweightComponentsCallback, getInstance, SunGraphicsCallback$PrintHeavyweightComponentsCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(SunGraphicsCallback$PrintHeavyweightComponentsCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PrintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback",
		"sun.awt.SunGraphicsCallback",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunGraphicsCallback"
	};
	$loadClass(SunGraphicsCallback$PrintHeavyweightComponentsCallback, name, initialize, &classInfo$$, SunGraphicsCallback$PrintHeavyweightComponentsCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SunGraphicsCallback$PrintHeavyweightComponentsCallback);
	});
	return class$;
}

$Class* SunGraphicsCallback$PrintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // sun