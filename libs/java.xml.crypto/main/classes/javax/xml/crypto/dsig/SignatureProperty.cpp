#include <javax/xml/crypto/dsig/SignatureProperty.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$Class* SignatureProperty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT, $virtualMethod(SignatureProperty, getContent, $List*)},
		{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignatureProperty, getId, $String*)},
		{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignatureProperty, getTarget, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.SignatureProperty",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$
	};
	$loadClass(SignatureProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureProperty);
	});
	return class$;
}

$Class* SignatureProperty::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax