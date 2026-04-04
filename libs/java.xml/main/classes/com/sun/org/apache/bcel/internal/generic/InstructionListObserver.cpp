#include <com/sun/org/apache/bcel/internal/generic/InstructionListObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <jcpp.h>

using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* InstructionListObserver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionListObserver, notify, void, $InstructionList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.InstructionListObserver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InstructionListObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstructionListObserver);
	});
	return class$;
}

$Class* InstructionListObserver::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com