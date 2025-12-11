#include <javax/xml/crypto/KeySelectorResult.h>

#include <java/security/Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _KeySelectorResult_MethodInfo_[] = {
	{"getKey", "()Ljava/security/Key;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeySelectorResult_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.KeySelectorResult",
	nullptr,
	nullptr,
	nullptr,
	_KeySelectorResult_MethodInfo_
};

$Object* allocate$KeySelectorResult($Class* clazz) {
	return $of($alloc(KeySelectorResult));
}

$Class* KeySelectorResult::load$($String* name, bool initialize) {
	$loadClass(KeySelectorResult, name, initialize, &_KeySelectorResult_ClassInfo_, allocate$KeySelectorResult);
	return class$;
}

$Class* KeySelectorResult::class$ = nullptr;

		} // crypto
	} // xml
} // javax