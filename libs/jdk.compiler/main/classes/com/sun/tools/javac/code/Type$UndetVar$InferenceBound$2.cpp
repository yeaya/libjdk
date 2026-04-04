#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound$2.h>
#include <com/sun/tools/javac/code/Type$UndetVar$InferenceBound.h>
#include <jcpp.h>

#undef EQ

using $Type$UndetVar$InferenceBound = ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Type$UndetVar$InferenceBound$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Type$UndetVar$InferenceBound::init$($enum$name, $enum$ordinal);
}

$Type$UndetVar$InferenceBound* Type$UndetVar$InferenceBound$2::complement() {
	$init($Type$UndetVar$InferenceBound);
	return $Type$UndetVar$InferenceBound::EQ;
}

Type$UndetVar$InferenceBound$2::Type$UndetVar$InferenceBound$2() {
}

$Class* Type$UndetVar$InferenceBound$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Type$UndetVar$InferenceBound$2, init$, void, $String*, int32_t)},
		{"complement", "()Lcom/sun/tools/javac/code/Type$UndetVar$InferenceBound;", nullptr, $PUBLIC, $virtualMethod(Type$UndetVar$InferenceBound$2, complement, $Type$UndetVar$InferenceBound*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Type$UndetVar", "com.sun.tools.javac.code.Type", "UndetVar", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound", "com.sun.tools.javac.code.Type$UndetVar", "InferenceBound", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.Type$UndetVar$InferenceBound$2",
		"com.sun.tools.javac.code.Type$UndetVar$InferenceBound",
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
	$loadClass(Type$UndetVar$InferenceBound$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Type$UndetVar$InferenceBound$2));
	});
	return class$;
}

$Class* Type$UndetVar$InferenceBound$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com