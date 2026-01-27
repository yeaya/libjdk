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

$MethodInfo _Filter_MethodInfo_[] = {
	{"test", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Filter, test, bool, int32_t)},
	{}
};

$ClassInfo _Filter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.Filter",
	nullptr,
	nullptr,
	nullptr,
	_Filter_MethodInfo_
};

$Object* allocate$Filter($Class* clazz) {
	return $of($alloc(Filter));
}

$Class* Filter::load$($String* name, bool initialize) {
	$loadClass(Filter, name, initialize, &_Filter_ClassInfo_, allocate$Filter);
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