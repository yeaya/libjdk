#include <com/sun/tools/javac/code/Types$AdaptFailure.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$AdaptFailure::init$() {
	$RuntimeException::init$();
}

Types$AdaptFailure::Types$AdaptFailure() {
}

Types$AdaptFailure::Types$AdaptFailure(const Types$AdaptFailure& e) : $RuntimeException(e) {
}

void Types$AdaptFailure::throw$() {
	throw *this;
}

$Class* Types$AdaptFailure::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Types$AdaptFailure, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Types$AdaptFailure, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$AdaptFailure", "com.sun.tools.javac.code.Types", "AdaptFailure", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Types$AdaptFailure",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$AdaptFailure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$AdaptFailure);
	});
	return class$;
}

$Class* Types$AdaptFailure::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com