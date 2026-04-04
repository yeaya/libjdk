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

void BasisLibrary$4::init$() {
	$ThreadLocal::init$();
}

$Object* BasisLibrary$4::initialValue() {
	return $new($AtomicInteger);
}

BasisLibrary$4::BasisLibrary$4() {
}

$Class* BasisLibrary$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasisLibrary$4, init$, void)},
		{"initialValue", "()Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PROTECTED, $virtualMethod(BasisLibrary$4, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$4",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/util/concurrent/atomic/AtomicInteger;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary"
	};
	$loadClass(BasisLibrary$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasisLibrary$4);
	});
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