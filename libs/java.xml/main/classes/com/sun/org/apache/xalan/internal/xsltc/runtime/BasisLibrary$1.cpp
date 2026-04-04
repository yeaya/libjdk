#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$1.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

void BasisLibrary$1::init$() {
	$ThreadLocal::init$();
}

$Object* BasisLibrary$1::initialValue() {
	return $of($new($StringBuilder));
}

BasisLibrary$1::BasisLibrary$1() {
}

$Class* BasisLibrary$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasisLibrary$1, init$, void)},
		{"initialValue", "()Ljava/lang/StringBuilder;", nullptr, $PROTECTED, $virtualMethod(BasisLibrary$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/StringBuilder;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary"
	};
	$loadClass(BasisLibrary$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasisLibrary$1);
	});
	return class$;
}

$Class* BasisLibrary$1::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com