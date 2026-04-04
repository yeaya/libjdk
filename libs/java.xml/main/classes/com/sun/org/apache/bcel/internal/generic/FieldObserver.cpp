#include <com/sun/org/apache/bcel/internal/generic/FieldObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldGen.h>
#include <jcpp.h>

using $FieldGen = ::com::sun::org::apache::bcel::internal::generic::FieldGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* FieldObserver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/FieldGen;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldObserver, notify, void, $FieldGen*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.FieldObserver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FieldObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FieldObserver);
	});
	return class$;
}

$Class* FieldObserver::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com