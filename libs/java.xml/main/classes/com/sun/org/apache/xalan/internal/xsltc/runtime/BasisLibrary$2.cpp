#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$2.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

void BasisLibrary$2::init$() {
	$ThreadLocal::init$();
}

$Object* BasisLibrary$2::initialValue() {
	return $of($new($StringBuffer));
}

BasisLibrary$2::BasisLibrary$2() {
}

$Class* BasisLibrary$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasisLibrary$2, init$, void)},
		{"initialValue", "()Ljava/lang/StringBuffer;", nullptr, $PROTECTED, $virtualMethod(BasisLibrary$2, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$2",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/StringBuffer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary"
	};
	$loadClass(BasisLibrary$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasisLibrary$2);
	});
	return class$;
}

$Class* BasisLibrary$2::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com