#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <java/io/InputStream.h>
#include <java/util/List.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$Class* SignedInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCanonicalizationMethod", "()Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignedInfo, getCanonicalizationMethod, $CanonicalizationMethod*)},
		{"getCanonicalizedData", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignedInfo, getCanonicalizedData, $InputStream*)},
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignedInfo, getId, $String*)},
		{"getReferences", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SignedInfo, getReferences, $List*)},
		{"getSignatureMethod", "()Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignedInfo, getSignatureMethod, $SignatureMethod*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.SignedInfo",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$
	};
	$loadClass(SignedInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignedInfo);
	});
	return class$;
}

$Class* SignedInfo::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax