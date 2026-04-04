#include <sun/security/krb5/internal/ktab/KeyTab$1.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/internal/ktab/KeyTab.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $KeyTab = ::sun::security::krb5::internal::ktab::KeyTab;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace ktab {

void KeyTab$1::init$($KeyTab* this$0) {
	$set(this, this$0, this$0);
}

int32_t KeyTab$1::compare($EncryptionKey* o1, $EncryptionKey* o2) {
	$useLocalObjectStack();
	int32_t var$0 = $$nc($nc(o2)->getKeyVersionNumber())->intValue();
	return var$0 - $$nc($nc(o1)->getKeyVersionNumber())->intValue();
}

int32_t KeyTab$1::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($EncryptionKey, o1), $cast($EncryptionKey, o2));
}

KeyTab$1::KeyTab$1() {
}

$Class* KeyTab$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/krb5/internal/ktab/KeyTab;", nullptr, $FINAL | $SYNTHETIC, $field(KeyTab$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/krb5/internal/ktab/KeyTab;)V", nullptr, 0, $method(KeyTab$1, init$, void, $KeyTab*)},
		{"compare", "(Lsun/security/krb5/EncryptionKey;Lsun/security/krb5/EncryptionKey;)I", nullptr, $PUBLIC, $virtualMethod(KeyTab$1, compare, int32_t, $EncryptionKey*, $EncryptionKey*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(KeyTab$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.internal.ktab.KeyTab",
		"readServiceKeys",
		"(Lsun/security/krb5/PrincipalName;)[Lsun/security/krb5/EncryptionKey;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.ktab.KeyTab$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.internal.ktab.KeyTab$1",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/security/krb5/EncryptionKey;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.ktab.KeyTab"
	};
	$loadClass(KeyTab$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyTab$1);
	});
	return class$;
}

$Class* KeyTab$1::class$ = nullptr;

				} // ktab
			} // internal
		} // krb5
	} // security
} // sun