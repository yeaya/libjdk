#include <com/sun/org/apache/xalan/internal/xsltc/dom/CurrentNodeListFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <jcpp.h>

using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
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

$Class* CurrentNodeListFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"test", "(IIIILcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CurrentNodeListFilter, test, bool, int32_t, int32_t, int32_t, int32_t, $AbstractTranslet*, $DTMAxisIterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.dom.CurrentNodeListFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrentNodeListFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrentNodeListFilter);
	});
	return class$;
}

$Class* CurrentNodeListFilter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com