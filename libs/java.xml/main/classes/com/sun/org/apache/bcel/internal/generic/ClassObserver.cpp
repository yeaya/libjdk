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

$MethodInfo _ClassObserver_MethodInfo_[] = {
	{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/ClassGen;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassObserver, notify, void, $ClassGen*)},
	{}
};

$ClassInfo _ClassObserver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ClassObserver",
	nullptr,
	nullptr,
	nullptr,
	_ClassObserver_MethodInfo_
};

$Object* allocate$ClassObserver($Class* clazz) {
	return $of($alloc(ClassObserver));
}

$Class* ClassObserver::load$($String* name, bool initialize) {
	$loadClass(ClassObserver, name, initialize, &_ClassObserver_ClassInfo_, allocate$ClassObserver);
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