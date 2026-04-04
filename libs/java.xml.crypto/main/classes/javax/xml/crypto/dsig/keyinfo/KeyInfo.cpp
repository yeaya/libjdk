#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <java/util/List.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$Class* KeyInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT, $virtualMethod(KeyInfo, getContent, $List*)},
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyInfo, getId, $String*)},
		{"marshal", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyInfo, marshal, void, $XMLStructure*, $XMLCryptoContext*), "javax.xml.crypto.MarshalException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.keyinfo.KeyInfo",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyInfo);
	});
	return class$;
}

$Class* KeyInfo::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax