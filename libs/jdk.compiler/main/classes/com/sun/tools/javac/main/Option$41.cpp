#include <com/sun/tools/javac/main/Option$41.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ADD_MODULES

using $Option = ::com::sun::tools::javac::main::Option;
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

$ints* Option$41::$SwitchMap$com$sun$tools$javac$main$Option = nullptr;

void Option$41::clinit$($Class* clazz) {
	$assignStatic(Option$41::$SwitchMap$com$sun$tools$javac$main$Option, $new($ints, $($Option::values())->length));
	{
		try {
			Option$41::$SwitchMap$com$sun$tools$javac$main$Option->set($Option::ADD_MODULES->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Option$41::Option$41() {
}

$Class* Option$41::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$main$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$41, $SwitchMap$com$sun$tools$javac$main$Option)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$41", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.main.Option$41",
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
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$41, name, initialize, &classInfo$$, Option$41::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Option$41);
	});
	return class$;
}

$Class* Option$41::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com