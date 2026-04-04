#include <com/sun/org/apache/bcel/internal/generic/ClassObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGen.h>
#include <jcpp.h>

using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* ClassObserver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/ClassGen;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassObserver, notify, void, $ClassGen*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.ClassObserver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClassObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassObserver);
	});
	return class$;
}

$Class* ClassObserver::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com