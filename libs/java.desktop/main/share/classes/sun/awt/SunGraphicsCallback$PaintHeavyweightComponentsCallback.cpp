#include <sun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback.h>
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

SunGraphicsCallback$PaintHeavyweightComponentsCallback* SunGraphicsCallback$PaintHeavyweightComponentsCallback::instance = nullptr;

void SunGraphicsCallback$PaintHeavyweightComponentsCallback::init$() {
	$SunGraphicsCallback::init$();
}

void SunGraphicsCallback$PaintHeavyweightComponentsCallback::run($Component* comp, $Graphics* cg) {
	if (!$nc(comp)->isLightweight()) {
		comp->paintAll(cg);
	} else if ($instanceOf($Container, comp)) {
		runComponents($($cast($Container, comp)->getComponents()), cg, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
	}
}

SunGraphicsCallback$PaintHeavyweightComponentsCallback* SunGraphicsCallback$PaintHeavyweightComponentsCallback::getInstance() {
	$init(SunGraphicsCallback$PaintHeavyweightComponentsCallback);
	return SunGraphicsCallback$PaintHeavyweightComponentsCallback::instance;
}

void SunGraphicsCallback$PaintHeavyweightComponentsCallback::clinit$($Class* clazz) {
	$assignStatic(SunGraphicsCallback$PaintHeavyweightComponentsCallback::instance, $new(SunGraphicsCallback$PaintHeavyweightComponentsCallback));
}

SunGraphicsCallback$PaintHeavyweightComponentsCallback::SunGraphicsCallback$PaintHeavyweightComponentsCallback() {
}

$Class* SunGraphicsCallback$PaintHeavyweightComponentsCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $PRIVATE | $STATIC, $staticField(SunGraphicsCallback$PaintHeavyweightComponentsCallback, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SunGraphicsCallback$PaintHeavyweightComponentsCallback, init$, void)},
		{"getInstance", "()Lsun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback;", nullptr, $PUBLIC | $STATIC, $staticMethod(SunGraphicsCallback$PaintHeavyweightComponentsCallback, getInstance, SunGraphicsCallback$PaintHeavyweightComponentsCallback*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(SunGraphicsCallback$PaintHeavyweightComponentsCallback, run, void, $Component*, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PaintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback",
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
	$loadClass(SunGraphicsCallback$PaintHeavyweightComponentsCallback, name, initialize, &classInfo$$, SunGraphicsCallback$PaintHeavyweightComponentsCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SunGraphicsCallback$PaintHeavyweightComponentsCallback);
	});
	return class$;
}

$Class* SunGraphicsCallback$PaintHeavyweightComponentsCallback::class$ = nullptr;

	} // awt
} // sun