#include <javax/xml/crypto/Data.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$Class* Data::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.crypto.Data"
	};
	$loadClass(Data, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Data);
	});
	return class$;
}

$Class* Data::class$ = nullptr;

		} // crypto
	} // xml
} // javax