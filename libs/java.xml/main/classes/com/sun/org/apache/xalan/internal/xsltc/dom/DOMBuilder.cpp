#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$Class* DOMBuilder::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.dom.DOMBuilder",
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.dom.ExtendedSAX"
	};
	$loadClass(DOMBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMBuilder));
	});
	return class$;
}

$Class* DOMBuilder::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com