#include <sun/security/krb5/internal/ktab/KeyTabConstants.h>
#include <jcpp.h>

#undef KRB5_KT_VNO
#undef KRB5_KT_VNO_1

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace ktab {

$Class* KeyTabConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"principalComponentSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, principalComponentSize)},
		{"realmSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, realmSize)},
		{"principalSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, principalSize)},
		{"principalTypeSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, principalTypeSize)},
		{"timestampSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, timestampSize)},
		{"keyVersionSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, keyVersionSize)},
		{"keyTypeSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, keyTypeSize)},
		{"keySize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, keySize)},
		{"KRB5_KT_VNO_1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, KRB5_KT_VNO_1)},
		{"KRB5_KT_VNO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(KeyTabConstants, KRB5_KT_VNO)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.krb5.internal.ktab.KeyTabConstants",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(KeyTabConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyTabConstants);
	});
	return class$;
}

$Class* KeyTabConstants::class$ = nullptr;

				} // ktab
			} // internal
		} // krb5
	} // security
} // sun