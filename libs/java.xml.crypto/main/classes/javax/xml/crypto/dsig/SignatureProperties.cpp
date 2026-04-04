#include <javax/xml/crypto/dsig/SignatureProperties.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$String* SignatureProperties::TYPE = nullptr;

void SignatureProperties::clinit$($Class* clazz) {
	$assignStatic(SignatureProperties::TYPE, "http://www.w3.org/2000/09/xmldsig#SignatureProperties"_s);
}

$Class* SignatureProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureProperties, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignatureProperties, getId, $String*)},
		{"getProperties", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/SignatureProperty;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SignatureProperties, getProperties, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.SignatureProperties",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignatureProperties, name, initialize, &classInfo$$, SignatureProperties::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureProperties);
	});
	return class$;
}

$Class* SignatureProperties::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax