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

$MethodInfo _InstructionListObserver_MethodInfo_[] = {
	{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionListObserver, notify, void, $InstructionList*)},
	{}
};

$ClassInfo _InstructionListObserver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.InstructionListObserver",
	nullptr,
	nullptr,
	nullptr,
	_InstructionListObserver_MethodInfo_
};

$Object* allocate$InstructionListObserver($Class* clazz) {
	return $of($alloc(InstructionListObserver));
}

$Class* InstructionListObserver::load$($String* name, bool initialize) {
	$loadClass(InstructionListObserver, name, initialize, &_InstructionListObserver_ClassInfo_, allocate$InstructionListObserver);
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