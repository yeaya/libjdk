#include <com/sun/org/apache/bcel/internal/generic/Type$2.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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

void Type$2::init$(int8_t t, $String* s) {
	$Type::init$(t, s);
}

Type$2::Type$2() {
}

$Class* Type$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(BLjava/lang/String;)V", nullptr, 0, $method(Type$2, init$, void, int8_t, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.generic.Type",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.Type$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.Type$2",
		"com.sun.org.apache.bcel.internal.generic.Type",
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
	$loadClass(Type$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type$2);
	});
	return class$;
}

$Class* Type$2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com