#include <com/sun/java_cup/internal/runtime/Scanner.h>
#include <com/sun/java_cup/internal/runtime/Symbol.h>
#include <jcpp.h>

using $Symbol = ::com::sun::java_cup::internal::runtime::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

$Class* Scanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"next_token", "()Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scanner, next_token, $Symbol*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.java_cup.internal.runtime.Scanner",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Scanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scanner);
	});
	return class$;
}

$Class* Scanner::class$ = nullptr;

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com