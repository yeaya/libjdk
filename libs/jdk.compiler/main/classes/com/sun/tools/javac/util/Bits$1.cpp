#include <com/sun/tools/javac/util/Bits$1.h>
#include <com/sun/tools/javac/util/Bits$BitsState.h>
#include <com/sun/tools/javac/util/Bits.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef NORMAL
#undef UNKNOWN

using $Bits$BitsState = ::com::sun::tools::javac::util::Bits$BitsState;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$ints* Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState = nullptr;

void Bits$1::clinit$($Class* clazz) {
	$assignStatic(Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState, $new($ints, $($Bits$BitsState::values())->length));
	{
		try {
			Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState->set($Bits$BitsState::UNKNOWN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Bits$1::$SwitchMap$com$sun$tools$javac$util$Bits$BitsState->set($Bits$BitsState::NORMAL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Bits$1::Bits$1() {
}

$Class* Bits$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$util$Bits$BitsState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Bits$1, $SwitchMap$com$sun$tools$javac$util$Bits$BitsState)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.Bits",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Bits$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.util.Bits$1",
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
		"com.sun.tools.javac.util.Bits"
	};
	$loadClass(Bits$1, name, initialize, &classInfo$$, Bits$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bits$1);
	});
	return class$;
}

$Class* Bits$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com