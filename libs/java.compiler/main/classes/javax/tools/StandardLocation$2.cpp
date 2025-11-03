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

using $StandardLocationArray = $Array<::javax::tools::StandardLocation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace javax {
	namespace tools {

$FieldInfo _StandardLocation$2_FieldInfo_[] = {
	{"$SwitchMap$javax$tools$StandardLocation", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StandardLocation$2, $SwitchMap$javax$tools$StandardLocation)},
	{}
};

$EnclosingMethodInfo _StandardLocation$2_EnclosingMethodInfo_ = {
	"javax.tools.StandardLocation",
	nullptr,
	nullptr
};

$InnerClassInfo _StandardLocation$2_InnerClassesInfo_[] = {
	{"javax.tools.StandardLocation$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _StandardLocation$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.tools.StandardLocation$2",
	"java.lang.Object",
	nullptr,
	_StandardLocation$2_FieldInfo_,
	nullptr,
	nullptr,
	&_StandardLocation$2_EnclosingMethodInfo_,
	_StandardLocation$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.StandardLocation"
};

$Object* allocate$StandardLocation$2($Class* clazz) {
	return $of($alloc(StandardLocation$2));
}

$ints* StandardLocation$2::$SwitchMap$javax$tools$StandardLocation = nullptr;

void clinit$StandardLocation$2($Class* class$) {
	$assignStatic(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation, $new($ints, $($StandardLocation::values())->length));
	{
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::CLASS_OUTPUT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::SOURCE_OUTPUT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::NATIVE_HEADER_OUTPUT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::MODULE_SOURCE_PATH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::ANNOTATION_PROCESSOR_MODULE_PATH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::UPGRADE_MODULE_PATH->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::SYSTEM_MODULES->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::MODULE_PATH->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(StandardLocation$2::$SwitchMap$javax$tools$StandardLocation)->set($StandardLocation::PATCH_MODULE_PATH->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

StandardLocation$2::StandardLocation$2() {
}

$Class* StandardLocation$2::load$($String* name, bool initialize) {
	$loadClass(StandardLocation$2, name, initialize, &_StandardLocation$2_ClassInfo_, clinit$StandardLocation$2, allocate$StandardLocation$2);
	return class$;
}

$Class* StandardLocation$2::class$ = nullptr;

	} // tools
} // javax