#include <java/util/logging/LogManager$7.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/util/logging/LogManager$ConfigProperty.h>
#include <java/util/logging/LogManager.h>
#include <jcpp.h>

#undef HANDLERS
#undef LEVEL
#undef USEPARENT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LogManager$ConfigProperty = ::java::util::logging::LogManager$ConfigProperty;

namespace java {
	namespace util {
		namespace logging {

$ints* LogManager$7::$SwitchMap$java$util$logging$LogManager$ConfigProperty = nullptr;

void LogManager$7::clinit$($Class* clazz) {
	$assignStatic(LogManager$7::$SwitchMap$java$util$logging$LogManager$ConfigProperty, $new($ints, $($LogManager$ConfigProperty::values())->length));
	{
		try {
			LogManager$7::$SwitchMap$java$util$logging$LogManager$ConfigProperty->set($LogManager$ConfigProperty::LEVEL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LogManager$7::$SwitchMap$java$util$logging$LogManager$ConfigProperty->set($LogManager$ConfigProperty::USEPARENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LogManager$7::$SwitchMap$java$util$logging$LogManager$ConfigProperty->set($LogManager$ConfigProperty::HANDLERS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LogManager$7::LogManager$7() {
}

$Class* LogManager$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$util$logging$LogManager$ConfigProperty", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LogManager$7, $SwitchMap$java$util$logging$LogManager$ConfigProperty)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$7", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.logging.LogManager$7",
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
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$7, name, initialize, &classInfo$$, LogManager$7::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$7);
	});
	return class$;
}

$Class* LogManager$7::class$ = nullptr;

		} // logging
	} // util
} // java