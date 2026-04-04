#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <jcpp.h>

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$Class* ApacheData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getXMLSignatureInput", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ApacheData, getXMLSignatureInput, $XMLSignatureInput*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.jcp.xml.dsig.internal.dom.ApacheData",
		nullptr,
		"javax.xml.crypto.Data",
		nullptr,
		methodInfos$$
	};
	$loadClass(ApacheData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ApacheData);
	});
	return class$;
}

$Class* ApacheData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org