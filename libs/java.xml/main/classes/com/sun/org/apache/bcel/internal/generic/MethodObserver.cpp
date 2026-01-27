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

$MethodInfo _MethodObserver_MethodInfo_[] = {
	{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/MethodGen;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodObserver, notify, void, $MethodGen*)},
	{}
};

$ClassInfo _MethodObserver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.MethodObserver",
	nullptr,
	nullptr,
	nullptr,
	_MethodObserver_MethodInfo_
};

$Object* allocate$MethodObserver($Class* clazz) {
	return $of($alloc(MethodObserver));
}

$Class* MethodObserver::load$($String* name, bool initialize) {
	$loadClass(MethodObserver, name, initialize, &_MethodObserver_ClassInfo_, allocate$MethodObserver);
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