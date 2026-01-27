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

$MethodInfo _StripWhitespaceFilter_MethodInfo_[] = {
	{"stripSpace", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StripWhitespaceFilter, stripSpace, bool, $DOM*, int32_t, int32_t)},
	{}
};

$ClassInfo _StripWhitespaceFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.StripWhitespaceFilter",
	nullptr,
	nullptr,
	nullptr,
	_StripWhitespaceFilter_MethodInfo_
};

$Object* allocate$StripWhitespaceFilter($Class* clazz) {
	return $of($alloc(StripWhitespaceFilter));
}

$Class* StripWhitespaceFilter::load$($String* name, bool initialize) {
	$loadClass(StripWhitespaceFilter, name, initialize, &_StripWhitespaceFilter_ClassInfo_, allocate$StripWhitespaceFilter);
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