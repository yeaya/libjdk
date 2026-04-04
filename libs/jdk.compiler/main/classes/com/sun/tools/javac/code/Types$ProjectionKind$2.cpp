#include <com/sun/tools/javac/code/Types$ProjectionKind$2.h>
#include <com/sun/tools/javac/code/Types$ProjectionKind.h>
#include <jcpp.h>

#undef UPWARDS

using $Types$ProjectionKind = ::com::sun::tools::javac::code::Types$ProjectionKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$ProjectionKind$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Types$ProjectionKind::init$($enum$name, $enum$ordinal);
}

$Types$ProjectionKind* Types$ProjectionKind$2::complement() {
	$init($Types$ProjectionKind);
	return $Types$ProjectionKind::UPWARDS;
}

Types$ProjectionKind$2::Types$ProjectionKind$2() {
}

$Class* Types$ProjectionKind$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Types$ProjectionKind$2, init$, void, $String*, int32_t)},
		{"complement", "()Lcom/sun/tools/javac/code/Types$ProjectionKind;", nullptr, 0, $virtualMethod(Types$ProjectionKind$2, complement, $Types$ProjectionKind*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types$ProjectionKind",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$ProjectionKind", "com.sun.tools.javac.code.Types", "ProjectionKind", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.code.Types$ProjectionKind$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.Types$ProjectionKind$2",
		"com.sun.tools.javac.code.Types$ProjectionKind",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$ProjectionKind$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$ProjectionKind$2));
	});
	return class$;
}

$Class* Types$ProjectionKind$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com