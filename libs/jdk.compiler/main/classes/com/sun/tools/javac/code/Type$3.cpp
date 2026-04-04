#include <com/sun/tools/javac/code/Type$3.h>
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

void Type$3::init$() {
	$Type$JCNoType::init$();
}

$String* Type$3::toString() {
	return "stuck"_s;
}

Type$3::Type$3() {
}

$Class* Type$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Type$3, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type$3, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Type$JCNoType", "com.sun.tools.javac.code.Type", "JCNoType", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Type$3",
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
	$loadClass(Type$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$3));
	});
	return class$;
}

$Class* Type$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com