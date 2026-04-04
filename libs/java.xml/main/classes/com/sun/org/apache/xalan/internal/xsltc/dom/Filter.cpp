#include <com/sun/org/apache/xalan/internal/xsltc/dom/Filter.h>
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

$Class* Filter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"test", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Filter, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.dom.Filter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Filter);
	});
	return class$;
}

$Class* Filter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com