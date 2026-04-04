#include <com/sun/org/apache/bcel/internal/generic/MethodObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <jcpp.h>

using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* MethodObserver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodObserver, notify, void, $MethodGen*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.MethodObserver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MethodObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodObserver);
	});
	return class$;
}

$Class* MethodObserver::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com