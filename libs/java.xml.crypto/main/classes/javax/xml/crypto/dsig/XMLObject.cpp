#include <javax/xml/crypto/dsig/XMLObject.h>
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

$String* XMLObject::TYPE = nullptr;

void XMLObject::clinit$($Class* clazz) {
	$assignStatic(XMLObject::TYPE, "http://www.w3.org/2000/09/xmldsig#Object"_s);
}

$Class* XMLObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLObject, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT, $virtualMethod(XMLObject, getContent, $List*)},
		{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLObject, getEncoding, $String*)},
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLObject, getId, $String*)},
		{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLObject, getMimeType, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.XMLObject",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XMLObject, name, initialize, &classInfo$$, XMLObject::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XMLObject);
	});
	return class$;
}

$Class* XMLObject::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax