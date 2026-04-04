#include <com/sun/tools/javac/comp/Flow$Liveness$2.h>
#include <com/sun/tools/javac/comp/Flow$Liveness.h>
#include <jcpp.h>

using $Flow$Liveness = ::com::sun::tools::javac::comp::Flow$Liveness;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Flow$Liveness$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Flow$Liveness::init$($enum$name, $enum$ordinal);
}

$Flow$Liveness* Flow$Liveness$2::or$($Flow$Liveness* other) {
	return other;
}

$Flow$Liveness* Flow$Liveness$2::and$($Flow$Liveness* other) {
	return this;
}

Flow$Liveness$2::Flow$Liveness$2() {
}

$Class* Flow$Liveness$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Flow$Liveness$2, init$, void, $String*, int32_t)},
		{"and", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC, $virtualMethod(Flow$Liveness$2, and$, $Flow$Liveness*, $Flow$Liveness*)},
		{"or", "(Lcom/sun/tools/javac/comp/Flow$Liveness;)Lcom/sun/tools/javac/comp/Flow$Liveness;", nullptr, $PUBLIC, $virtualMethod(Flow$Liveness$2, or$, $Flow$Liveness*, $Flow$Liveness*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Flow$Liveness",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Flow$Liveness", "com.sun.tools.javac.comp.Flow", "Liveness", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.comp.Flow$Liveness$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Flow$Liveness$2",
		"com.sun.tools.javac.comp.Flow$Liveness",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Flow"
	};
	$loadClass(Flow$Liveness$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Flow$Liveness$2));
	});
	return class$;
}

$Class* Flow$Liveness$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com