#include <java/awt/GraphicsDevice$1.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef PERPIXEL_TRANSLUCENT
#undef PERPIXEL_TRANSPARENT
#undef TRANSLUCENT

using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace java {
	namespace awt {

$ints* GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency = nullptr;

void GraphicsDevice$1::clinit$($Class* clazz) {
	$assignStatic(GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency, $new($ints, $($GraphicsDevice$WindowTranslucency::values())->length));
	{
		try {
			GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency->set($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSPARENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency->set($GraphicsDevice$WindowTranslucency::TRANSLUCENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			GraphicsDevice$1::$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency->set($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

GraphicsDevice$1::GraphicsDevice$1() {
}

$Class* GraphicsDevice$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$GraphicsDevice$WindowTranslucency", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GraphicsDevice$1, $SwitchMap$java$awt$GraphicsDevice$WindowTranslucency)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.GraphicsDevice",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsDevice$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.awt.GraphicsDevice$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.GraphicsDevice"
	};
	$loadClass(GraphicsDevice$1, name, initialize, &classInfo$$, GraphicsDevice$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsDevice$1);
	});
	return class$;
}

$Class* GraphicsDevice$1::class$ = nullptr;

	} // awt
} // java