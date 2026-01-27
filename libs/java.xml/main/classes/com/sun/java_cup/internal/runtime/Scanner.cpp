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

$MethodInfo _Scanner_MethodInfo_[] = {
	{"next_token", "()Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scanner, next_token, $Symbol*), "java.lang.Exception"},
	{}
};

$ClassInfo _Scanner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.java_cup.internal.runtime.Scanner",
	nullptr,
	nullptr,
	nullptr,
	_Scanner_MethodInfo_
};

$Object* allocate$Scanner($Class* clazz) {
	return $of($alloc(Scanner));
}

$Class* Scanner::load$($String* name, bool initialize) {
	$loadClass(Scanner, name, initialize, &_Scanner_ClassInfo_, allocate$Scanner);
	return class$;
}

$Class* Scanner::class$ = nullptr;

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com