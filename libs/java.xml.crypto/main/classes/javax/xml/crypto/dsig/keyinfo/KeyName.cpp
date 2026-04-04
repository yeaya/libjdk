#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$Class* KeyName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyName, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.dsig.keyinfo.KeyName",
		nullptr,
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyName);
	});
	return class$;
}

$Class* KeyName::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax