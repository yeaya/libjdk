#include <com/sun/org/apache/xalan/internal/xsltc/DOMCache.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <jcpp.h>

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$MethodInfo _DOMCache_MethodInfo_[] = {
	{"retrieveDocument", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMCache, retrieveDocument, $DOM*, $String*, $String*, $Translet*)},
	{}
};

$ClassInfo _DOMCache_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.DOMCache",
	nullptr,
	nullptr,
	nullptr,
	_DOMCache_MethodInfo_
};

$Object* allocate$DOMCache($Class* clazz) {
	return $of($alloc(DOMCache));
}

$Class* DOMCache::load$($String* name, bool initialize) {
	$loadClass(DOMCache, name, initialize, &_DOMCache_ClassInfo_, allocate$DOMCache);
	return class$;
}

$Class* DOMCache::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com