#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>

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

$MethodInfo _StripFilter_MethodInfo_[] = {
	{"stripSpace", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StripFilter, stripSpace, bool, $DOM*, int32_t, int32_t)},
	{}
};

$ClassInfo _StripFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.StripFilter",
	nullptr,
	nullptr,
	nullptr,
	_StripFilter_MethodInfo_
};

$Object* allocate$StripFilter($Class* clazz) {
	return $of($alloc(StripFilter));
}

$Class* StripFilter::load$($String* name, bool initialize) {
	$loadClass(StripFilter, name, initialize, &_StripFilter_ClassInfo_, allocate$StripFilter);
	return class$;
}

$Class* StripFilter::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com