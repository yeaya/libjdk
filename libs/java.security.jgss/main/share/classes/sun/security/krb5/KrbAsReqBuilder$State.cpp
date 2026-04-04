#include <sun/security/krb5/KrbAsReqBuilder$State.h>
#include <java/lang/Enum.h>
#include <sun/security/krb5/KrbAsReqBuilder.h>
#include <jcpp.h>

#undef DESTROYED
#undef INIT
#undef REQ_OK

using $KrbAsReqBuilder$StateArray = $Array<::sun::security::krb5::KrbAsReqBuilder$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {

KrbAsReqBuilder$State* KrbAsReqBuilder$State::INIT = nullptr;
KrbAsReqBuilder$State* KrbAsReqBuilder$State::REQ_OK = nullptr;
KrbAsReqBuilder$State* KrbAsReqBuilder$State::DESTROYED = nullptr;
$KrbAsReqBuilder$StateArray* KrbAsReqBuilder$State::$VALUES = nullptr;

$KrbAsReqBuilder$StateArray* KrbAsReqBuilder$State::$values() {
	$init(KrbAsReqBuilder$State);
	return $new($KrbAsReqBuilder$StateArray, {
		KrbAsReqBuilder$State::INIT,
		KrbAsReqBuilder$State::REQ_OK,
		KrbAsReqBuilder$State::DESTROYED
	});
}

$KrbAsReqBuilder$StateArray* KrbAsReqBuilder$State::values() {
	$init(KrbAsReqBuilder$State);
	return $cast($KrbAsReqBuilder$StateArray, KrbAsReqBuilder$State::$VALUES->clone());
}

KrbAsReqBuilder$State* KrbAsReqBuilder$State::valueOf($String* name) {
	$init(KrbAsReqBuilder$State);
	return $cast(KrbAsReqBuilder$State, $Enum::valueOf(KrbAsReqBuilder$State::class$, name));
}

void KrbAsReqBuilder$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void KrbAsReqBuilder$State::clinit$($Class* clazz) {
	$assignStatic(KrbAsReqBuilder$State::INIT, $new(KrbAsReqBuilder$State, "INIT"_s, 0));
	$assignStatic(KrbAsReqBuilder$State::REQ_OK, $new(KrbAsReqBuilder$State, "REQ_OK"_s, 1));
	$assignStatic(KrbAsReqBuilder$State::DESTROYED, $new(KrbAsReqBuilder$State, "DESTROYED"_s, 2));
	$assignStatic(KrbAsReqBuilder$State::$VALUES, KrbAsReqBuilder$State::$values());
}

KrbAsReqBuilder$State::KrbAsReqBuilder$State() {
}

$Class* KrbAsReqBuilder$State::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INIT", "Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KrbAsReqBuilder$State, INIT)},
		{"REQ_OK", "Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KrbAsReqBuilder$State, REQ_OK)},
		{"DESTROYED", "Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(KrbAsReqBuilder$State, DESTROYED)},
		{"$VALUES", "[Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(KrbAsReqBuilder$State, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(KrbAsReqBuilder$State, $values, $KrbAsReqBuilder$StateArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(KrbAsReqBuilder$State, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(KrbAsReqBuilder$State, valueOf, KrbAsReqBuilder$State*, $String*)},
		{"values", "()[Lsun/security/krb5/KrbAsReqBuilder$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(KrbAsReqBuilder$State, values, $KrbAsReqBuilder$StateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.KrbAsReqBuilder$State", "sun.security.krb5.KrbAsReqBuilder", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.krb5.KrbAsReqBuilder$State",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/krb5/KrbAsReqBuilder$State;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.KrbAsReqBuilder"
	};
	$loadClass(KrbAsReqBuilder$State, name, initialize, &classInfo$$, KrbAsReqBuilder$State::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(KrbAsReqBuilder$State));
	});
	return class$;
}

$Class* KrbAsReqBuilder$State::class$ = nullptr;

		} // krb5
	} // security
} // sun