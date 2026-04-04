#include <com/sun/tools/javac/file/Locations$1.h>
#include <com/sun/tools/javac/file/Locations.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef DJAVA_ENDORSED_DIRS
#undef DJAVA_EXT_DIRS
#undef XBOOTCLASSPATH

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
				namespace file {

$ints* Locations$1::$SwitchMap$com$sun$tools$javac$main$Option = nullptr;

void Locations$1::clinit$($Class* clazz) {
	$assignStatic(Locations$1::$SwitchMap$com$sun$tools$javac$main$Option, $new($ints, $($Option::values())->length));
	{
		try {
			Locations$1::$SwitchMap$com$sun$tools$javac$main$Option->set($Option::XBOOTCLASSPATH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Locations$1::$SwitchMap$com$sun$tools$javac$main$Option->set($Option::DJAVA_ENDORSED_DIRS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Locations$1::$SwitchMap$com$sun$tools$javac$main$Option->set($Option::DJAVA_EXT_DIRS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Locations$1::Locations$1() {
}

$Class* Locations$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$main$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Locations$1, $SwitchMap$com$sun$tools$javac$main$Option)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.file.Locations",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.Locations$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.file.Locations$1",
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
		"com.sun.tools.javac.file.Locations"
	};
	$loadClass(Locations$1, name, initialize, &classInfo$$, Locations$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Locations$1);
	});
	return class$;
}

$Class* Locations$1::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com