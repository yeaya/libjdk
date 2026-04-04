#include <sun/awt/SunGraphicsCallback.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <sun/awt/ConstrainableGraphics.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER
#undef HEAVYWEIGHTS
#undef LIGHTWEIGHTS
#undef TWO_PASSES

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstrainableGraphics = ::sun::awt::ConstrainableGraphics;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {

$PlatformLogger* SunGraphicsCallback::log = nullptr;

void SunGraphicsCallback::init$() {
}

void SunGraphicsCallback::constrainGraphics($Graphics* g, $Rectangle* bounds) {
	if ($instanceOf($ConstrainableGraphics, g)) {
		$cast($ConstrainableGraphics, g)->constrain($nc(bounds)->x, $nc(bounds)->y, $nc(bounds)->width, $nc(bounds)->height);
	} else {
		$nc(g)->translate($nc(bounds)->x, $nc(bounds)->y);
	}
	$nc(g)->clipRect(0, 0, $nc(bounds)->width, $nc(bounds)->height);
}

void SunGraphicsCallback::runOneComponent($Component* comp, $Rectangle* bounds$renamed, $Graphics* g, $Shape* clip, int32_t weightFlags) {
	$useLocalObjectStack();
	$var($Rectangle, bounds, bounds$renamed);
	bool var$0 = comp == nullptr || !comp->isDisplayable();
	if (var$0 || !comp->isVisible()) {
		return;
	}
	bool lightweight = $nc(comp)->isLightweight();
	if ((lightweight && (weightFlags & SunGraphicsCallback::LIGHTWEIGHTS) == 0) || (!lightweight && (weightFlags & SunGraphicsCallback::HEAVYWEIGHTS) == 0)) {
		return;
	}
	if (bounds == nullptr) {
		$assign(bounds, comp->getBounds());
	}
	if (clip == nullptr || clip->intersects(bounds)) {
		$var($Graphics, cg, $nc(g)->create());
		$var($Throwable, var$1, nullptr);
		try {
			constrainGraphics(cg, bounds);
			$nc(cg)->setFont($(comp->getFont()));
			cg->setColor($(comp->getForeground()));
			if ($instanceOf($Graphics2D, cg)) {
				$cast($Graphics2D, cg)->setBackground($(comp->getBackground()));
			}
			run(comp, cg);
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			$nc(cg)->dispose();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

void SunGraphicsCallback::runComponents($ComponentArray* comps, $Graphics* g, int32_t weightFlags) {
	$useLocalObjectStack();
	int32_t ncomponents = $nc(comps)->length;
	$var($Shape, clip, $nc(g)->getClip());
	$init($PlatformLogger$Level);
	if ($nc(SunGraphicsCallback::log)->isLoggable($PlatformLogger$Level::FINER) && (clip != nullptr)) {
		$var($Rectangle, newrect, clip->getBounds());
		SunGraphicsCallback::log->finer($$str({"x = "_s, $$str($nc(newrect)->x), ", y = "_s, $$str($nc(newrect)->y), ", width = "_s, $$str($nc(newrect)->width), ", height = "_s, $$str($nc(newrect)->height)}));
	}
	if ((weightFlags & SunGraphicsCallback::TWO_PASSES) != 0) {
		for (int32_t i = ncomponents - 1; i >= 0; --i) {
			runOneComponent(comps->get(i), nullptr, g, clip, SunGraphicsCallback::LIGHTWEIGHTS);
		}
		for (int32_t i = ncomponents - 1; i >= 0; --i) {
			runOneComponent(comps->get(i), nullptr, g, clip, SunGraphicsCallback::HEAVYWEIGHTS);
		}
	} else {
		for (int32_t i = ncomponents - 1; i >= 0; --i) {
			runOneComponent(comps->get(i), nullptr, g, clip, weightFlags);
		}
	}
}

void SunGraphicsCallback::clinit$($Class* clazz) {
	$assignStatic(SunGraphicsCallback::log, $PlatformLogger::getLogger("sun.awt.SunGraphicsCallback"_s));
}

SunGraphicsCallback::SunGraphicsCallback() {
}

$Class* SunGraphicsCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HEAVYWEIGHTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphicsCallback, HEAVYWEIGHTS)},
		{"LIGHTWEIGHTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphicsCallback, LIGHTWEIGHTS)},
		{"TWO_PASSES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SunGraphicsCallback, TWO_PASSES)},
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunGraphicsCallback, log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunGraphicsCallback, init$, void)},
		{"constrainGraphics", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED, $virtualMethod(SunGraphicsCallback, constrainGraphics, void, $Graphics*, $Rectangle*)},
		{"run", "(Ljava/awt/Component;Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SunGraphicsCallback, run, void, $Component*, $Graphics*)},
		{"runComponents", "([Ljava/awt/Component;Ljava/awt/Graphics;I)V", nullptr, $PUBLIC | $FINAL, $method(SunGraphicsCallback, runComponents, void, $ComponentArray*, $Graphics*, int32_t)},
		{"runOneComponent", "(Ljava/awt/Component;Ljava/awt/Rectangle;Ljava/awt/Graphics;Ljava/awt/Shape;I)V", nullptr, $PUBLIC | $FINAL, $method(SunGraphicsCallback, runOneComponent, void, $Component*, $Rectangle*, $Graphics*, $Shape*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PrintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
		{"sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback", "sun.awt.SunGraphicsCallback", "PaintHeavyweightComponentsCallback", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.awt.SunGraphicsCallback",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback,sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback"
	};
	$loadClass(SunGraphicsCallback, name, initialize, &classInfo$$, SunGraphicsCallback::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SunGraphicsCallback);
	});
	return class$;
}

$Class* SunGraphicsCallback::class$ = nullptr;

	} // awt
} // sun