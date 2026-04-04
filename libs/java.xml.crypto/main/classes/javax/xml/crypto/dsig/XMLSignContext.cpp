#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$Class* XMLSignContext::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.XMLSignContext",
		nullptr,
		"javax.xml.crypto.XMLCryptoContext"
	};
	$loadClass(XMLSignContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSignContext);
	});
	return class$;
}

$Class* XMLSignContext::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax