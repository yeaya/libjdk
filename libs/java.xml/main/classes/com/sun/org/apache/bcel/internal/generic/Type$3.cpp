#include <com/sun/org/apache/bcel/internal/generic/Type$3.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void Type$3::init$() {
	$ThreadLocal::init$();
}

$Object* Type$3::initialValue() {
	return $of($Integer::valueOf(0));
}

Type$3::Type$3() {
}

$Class* Type$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Type$3, init$, void)},
		{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(Type$3, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.generic.Type",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.Type$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.Type$3",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.Type"
	};
	$loadClass(Type$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type$3);
	});
	return class$;
}

$Class* Type$3::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com