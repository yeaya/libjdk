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

$MethodInfo _ApacheData_MethodInfo_[] = {
	{"getXMLSignatureInput", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ApacheData, getXMLSignatureInput, $XMLSignatureInput*)},
	{}
};

$ClassInfo _ApacheData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.ApacheData",
	nullptr,
	"javax.xml.crypto.Data",
	nullptr,
	_ApacheData_MethodInfo_
};

$Object* allocate$ApacheData($Class* clazz) {
	return $of($alloc(ApacheData));
}

$Class* ApacheData::load$($String* name, bool initialize) {
	$loadClass(ApacheData, name, initialize, &_ApacheData_ClassInfo_, allocate$ApacheData);
	return class$;
}

$Class* ApacheData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org