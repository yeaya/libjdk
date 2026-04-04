#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef RAW_X509_CERTIFICATE_TYPE
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$String* X509Data::TYPE = nullptr;
$String* X509Data::RAW_X509_CERTIFICATE_TYPE = nullptr;

void X509Data::clinit$($Class* clazz) {
	$assignStatic(X509Data::TYPE, "http://www.w3.org/2000/09/xmldsig#X509Data"_s);
	$assignStatic(X509Data::RAW_X509_CERTIFICATE_TYPE, "http://www.w3.org/2000/09/xmldsig#rawX509Certificate"_s);
}

$Class* X509Data::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X509Data, TYPE)},
		{"RAW_X509_CERTIFICATE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X509Data, RAW_X509_CERTIFICATE_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getContent", "()Ljava/util/List;", "()Ljava/util/List<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(X509Data, getContent, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.keyinfo.X509Data",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(X509Data, name, initialize, &classInfo$$, X509Data::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(X509Data);
	});
	return class$;
}

$Class* X509Data::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax