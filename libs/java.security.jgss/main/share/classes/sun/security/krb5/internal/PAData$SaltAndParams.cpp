#include <sun/security/krb5/internal/PAData$SaltAndParams.h>
#include <sun/security/krb5/internal/PAData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void PAData$SaltAndParams::init$($String* s$renamed, $bytes* p) {
	$var($String, s, s$renamed);
	if (s != nullptr && s->isEmpty()) {
		$assign(s, nullptr);
	}
	$set(this, salt, s);
	$set(this, params, p);
}

PAData$SaltAndParams::PAData$SaltAndParams() {
}

$Class* PAData$SaltAndParams::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"salt", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(PAData$SaltAndParams, salt)},
		{"params", "[B", nullptr, $PUBLIC | $FINAL, $field(PAData$SaltAndParams, params)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC, $method(PAData$SaltAndParams, init$, void, $String*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.PAData$SaltAndParams", "sun.security.krb5.internal.PAData", "SaltAndParams", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.PAData$SaltAndParams",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.PAData"
	};
	$loadClass(PAData$SaltAndParams, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PAData$SaltAndParams);
	});
	return class$;
}

$Class* PAData$SaltAndParams::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun