#include <com/sun/tools/javac/code/Type$2.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <jcpp.h>

using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$2::init$() {
	$Type$JCNoType::init$();
}

$String* Type$2::toString() {
	return "recovery"_s;
}

Type$2::Type$2() {
}

$Class* Type$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Type$2, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type$2, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$2",
		"com.sun.tools.javac.code.Type$JCNoType",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Type"
	};
	$loadClass(Type$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$2));
	});
	return class$;
}

$Class* Type$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com