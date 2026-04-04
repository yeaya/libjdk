#include <javax/tools/StandardLocation$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef ANNOTATION_PROCESSOR_MODULE_PATH
#undef CLASS_OUTPUT
#undef MODULE_PATH
#undef MODULE_SOURCE_PATH
#undef NATIVE_HEADER_OUTPUT
#undef PATCH_MODULE_PATH
#undef SOURCE_OUTPUT
#undef SYSTEM_MODULES
#undef UPGRADE_MODULE_PATH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace javax {
	namespace tools {

$ints* StandardLocation$2::$SwitchMap$javax$tools$StandardLocation = nullptr;

void StandardLocation$2::clinit$($Class* clazz) {
	$assignStatic(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation, $new($ints, $($StandardLocation::values())->length));
	{
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::CLASS_OUTPUT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::SOURCE_OUTPUT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::NATIVE_HEADER_OUTPUT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::MODULE_SOURCE_PATH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::UPGRADE_MODULE_PATH->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::SYSTEM_MODULES->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::MODULE_PATH->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			StandardLocation$2::$SwitchMap$javax$tools$StandardLocation->set($StandardLocation::PATCH_MODULE_PATH->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StandardLocation$2::StandardLocation$2() {
}

$Class* StandardLocation$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$tools$StandardLocation", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardLocation$2, $SwitchMap$javax$tools$StandardLocation)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.tools.StandardLocation",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.StandardLocation$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.tools.StandardLocation$2",
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
		"javax.tools.StandardLocation"
	};
	$loadClass(StandardLocation$2, name, initialize, &classInfo$$, StandardLocation$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StandardLocation$2);
	});
	return class$;
}

$Class* StandardLocation$2::class$ = nullptr;

	} // tools
} // javax