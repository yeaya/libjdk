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

$ClassInfo _DOMBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.DOMBuilder",
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.ExtendedSAX"
};

$Object* allocate$DOMBuilder($Class* clazz) {
	return $of($alloc(DOMBuilder));
}

$Class* DOMBuilder::load$($String* name, bool initialize) {
	$loadClass(DOMBuilder, name, initialize, &_DOMBuilder_ClassInfo_, allocate$DOMBuilder);
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