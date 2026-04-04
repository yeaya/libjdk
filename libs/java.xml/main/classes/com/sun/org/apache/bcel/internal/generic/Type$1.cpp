#include <com/sun/org/apache/bcel/internal/generic/Type$1.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <jcpp.h>

using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void Type$1::init$() {
	$ReferenceType::init$();
}

Type$1::Type$1() {
}

$Class* Type$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Type$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.generic.Type",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.Type$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.Type$1",
		"com.sun.org.apache.bcel.internal.generic.ReferenceType",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.Type"
	};
	$loadClass(Type$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type$1);
	});
	return class$;
}

$Class* Type$1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com