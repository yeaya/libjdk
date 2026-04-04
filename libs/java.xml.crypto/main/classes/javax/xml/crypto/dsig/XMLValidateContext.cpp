#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$Class* XMLValidateContext::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.XMLValidateContext",
		nullptr,
		"javax.xml.crypto.XMLCryptoContext"
	};
	$loadClass(XMLValidateContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLValidateContext);
	});
	return class$;
}

$Class* XMLValidateContext::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax