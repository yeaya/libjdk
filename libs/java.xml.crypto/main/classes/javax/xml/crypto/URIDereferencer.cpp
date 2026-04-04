#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Data = ::javax::xml::crypto::Data;
using $URIReference = ::javax::xml::crypto::URIReference;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;

namespace javax {
	namespace xml {
		namespace crypto {

$Class* URIDereferencer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dereference", "(Ljavax/xml/crypto/URIReference;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(URIDereferencer, dereference, $Data*, $URIReference*, $XMLCryptoContext*), "javax.xml.crypto.URIReferenceException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.URIDereferencer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(URIDereferencer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URIDereferencer);
	});
	return class$;
}

$Class* URIDereferencer::class$ = nullptr;

		} // crypto
	} // xml
} // javax