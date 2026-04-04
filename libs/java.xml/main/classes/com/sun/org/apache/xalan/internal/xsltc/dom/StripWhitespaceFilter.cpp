#include <com/sun/org/apache/xalan/internal/xsltc/dom/StripWhitespaceFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
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

$Class* StripWhitespaceFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"stripSpace", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StripWhitespaceFilter, stripSpace, bool, $DOM*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.dom.StripWhitespaceFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StripWhitespaceFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StripWhitespaceFilter);
	});
	return class$;
}

$Class* StripWhitespaceFilter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com