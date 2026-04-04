#include <com/sun/tools/javac/main/Arguments$3.h>
#include <com/sun/tools/javac/main/Arguments$ErrorMode.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ILLEGAL_ARGUMENT
#undef ILLEGAL_STATE
#undef LOG

using $Arguments$ErrorMode = ::com::sun::tools::javac::main::Arguments$ErrorMode;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$ints* Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode = nullptr;

void Arguments$3::clinit$($Class* clazz) {
	$assignStatic(Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode, $new($ints, $($Arguments$ErrorMode::values())->length));
	{
		try {
			Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode->set($Arguments$ErrorMode::ILLEGAL_ARGUMENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode->set($Arguments$ErrorMode::ILLEGAL_STATE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Arguments$3::$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode->set($Arguments$ErrorMode::LOG->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Arguments$3::Arguments$3() {
}

$Class* Arguments$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Arguments$3, $SwitchMap$com$sun$tools$javac$main$Arguments$ErrorMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Arguments",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Arguments$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.main.Arguments$3",
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
		"com.sun.tools.javac.main.Arguments"
	};
	$loadClass(Arguments$3, name, initialize, &classInfo$$, Arguments$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Arguments$3);
	});
	return class$;
}

$Class* Arguments$3::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com