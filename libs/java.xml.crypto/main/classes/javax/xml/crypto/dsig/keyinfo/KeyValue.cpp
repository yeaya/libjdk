#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

#undef DSA_TYPE
#undef EC_TYPE
#undef RSA_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$String* KeyValue::DSA_TYPE = nullptr;
$String* KeyValue::RSA_TYPE = nullptr;
$String* KeyValue::EC_TYPE = nullptr;

void KeyValue::clinit$($Class* clazz) {
	$assignStatic(KeyValue::DSA_TYPE, "http://www.w3.org/2000/09/xmldsig#DSAKeyValue"_s);
	$assignStatic(KeyValue::RSA_TYPE, "http://www.w3.org/2000/09/xmldsig#RSAKeyValue"_s);
	$assignStatic(KeyValue::EC_TYPE, "http://www.w3.org/2009/xmldsig11#ECKeyValue"_s);
}

$Class* KeyValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DSA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyValue, DSA_TYPE)},
		{"RSA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyValue, RSA_TYPE)},
		{"EC_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyValue, EC_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyValue, getPublicKey, $PublicKey*), "java.security.KeyException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.keyinfo.KeyValue",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyValue, name, initialize, &classInfo$$, KeyValue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KeyValue);
	});
	return class$;
}

$Class* KeyValue::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax