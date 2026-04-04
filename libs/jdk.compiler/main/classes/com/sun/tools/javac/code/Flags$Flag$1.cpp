#include <com/sun/tools/javac/code/Flags$Flag$1.h>
#include <com/sun/tools/javac/code/Flags$Flag.h>
#include <jcpp.h>

using $Flags$Flag = ::com::sun::tools::javac::code::Flags$Flag;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Flags$Flag$1::init$($String* $enum$name, int32_t $enum$ordinal, int64_t flag) {
	$Flags$Flag::init$($enum$name, $enum$ordinal, flag);
}

$String* Flags$Flag$1::toString() {
	return "non-sealed"_s;
}

Flags$Flag$1::Flags$Flag$1() {
}

$Class* Flags$Flag$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;IJ)V", nullptr, $PRIVATE, $method(Flags$Flag$1, init$, void, $String*, int32_t, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Flags$Flag$1, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Flags$Flag",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Flags$Flag", "com.sun.tools.javac.code.Flags", "Flag", $PUBLIC | $STATIC | $ENUM},
		{"com.sun.tools.javac.code.Flags$Flag$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.Flags$Flag$1",
		"com.sun.tools.javac.code.Flags$Flag",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Flags"
	};
	$loadClass(Flags$Flag$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Flags$Flag$1));
	});
	return class$;
}

$Class* Flags$Flag$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com