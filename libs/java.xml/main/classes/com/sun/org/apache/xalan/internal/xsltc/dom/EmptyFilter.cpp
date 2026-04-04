#include <com/sun/org/apache/xalan/internal/xsltc/dom/EmptyFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

void EmptyFilter::init$() {
}

bool EmptyFilter::test(int32_t node) {
	return true;
}

EmptyFilter::EmptyFilter() {
}

$Class* EmptyFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EmptyFilter, init$, void)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(EmptyFilter, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.EmptyFilter",
		"java.lang.Object",
		"com.sun.org.apache.xalan.internal.xsltc.dom.Filter",
		nullptr,
		methodInfos$$
	};
	$loadClass(EmptyFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EmptyFilter);
	});
	return class$;
}

$Class* EmptyFilter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com