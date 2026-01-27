#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$4.h>

#include <java/lang/ThreadLocal.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$MethodInfo _BasisLibrary$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(BasisLibrary$4, init$, void)},
	{"initialValue", "()Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PROTECTED, $virtualMethod(BasisLibrary$4, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _BasisLibrary$4_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary",
	nullptr,
	nullptr
};

$InnerClassInfo _BasisLibrary$4_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasisLibrary$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_BasisLibrary$4_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/util/concurrent/atomic/AtomicInteger;>;",
	&_BasisLibrary$4_EnclosingMethodInfo_,
	_BasisLibrary$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary"
};

$Object* allocate$BasisLibrary$4($Class* clazz) {
	return $of($alloc(BasisLibrary$4));
}

void BasisLibrary$4::init$() {
	$ThreadLocal::init$();
}

$Object* BasisLibrary$4::initialValue() {
	return $of($new($AtomicInteger));
}

BasisLibrary$4::BasisLibrary$4() {
}

$Class* BasisLibrary$4::load$($String* name, bool initialize) {
	$loadClass(BasisLibrary$4, name, initialize, &_BasisLibrary$4_ClassInfo_, allocate$BasisLibrary$4);
	return class$;
}

$Class* BasisLibrary$4::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com