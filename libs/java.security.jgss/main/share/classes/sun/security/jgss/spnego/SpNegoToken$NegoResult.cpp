#include <sun/security/jgss/spnego/SpNegoToken$NegoResult.h>
#include <java/lang/Enum.h>
#include <sun/security/jgss/spnego/SpNegoToken.h>
#include <jcpp.h>

#undef ACCEPT_COMPLETE
#undef ACCEPT_INCOMPLETE
#undef REJECT

using $SpNegoToken$NegoResultArray = $Array<::sun::security::jgss::spnego::SpNegoToken$NegoResult>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace jgss {
			namespace spnego {

SpNegoToken$NegoResult* SpNegoToken$NegoResult::ACCEPT_COMPLETE = nullptr;
SpNegoToken$NegoResult* SpNegoToken$NegoResult::ACCEPT_INCOMPLETE = nullptr;
SpNegoToken$NegoResult* SpNegoToken$NegoResult::REJECT = nullptr;
$SpNegoToken$NegoResultArray* SpNegoToken$NegoResult::$VALUES = nullptr;

$SpNegoToken$NegoResultArray* SpNegoToken$NegoResult::$values() {
	$init(SpNegoToken$NegoResult);
	return $new($SpNegoToken$NegoResultArray, {
		SpNegoToken$NegoResult::ACCEPT_COMPLETE,
		SpNegoToken$NegoResult::ACCEPT_INCOMPLETE,
		SpNegoToken$NegoResult::REJECT
	});
}

$SpNegoToken$NegoResultArray* SpNegoToken$NegoResult::values() {
	$init(SpNegoToken$NegoResult);
	return $cast($SpNegoToken$NegoResultArray, SpNegoToken$NegoResult::$VALUES->clone());
}

SpNegoToken$NegoResult* SpNegoToken$NegoResult::valueOf($String* name) {
	$init(SpNegoToken$NegoResult);
	return $cast(SpNegoToken$NegoResult, $Enum::valueOf(SpNegoToken$NegoResult::class$, name));
}

void SpNegoToken$NegoResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void SpNegoToken$NegoResult::clinit$($Class* clazz) {
	$assignStatic(SpNegoToken$NegoResult::ACCEPT_COMPLETE, $new(SpNegoToken$NegoResult, "ACCEPT_COMPLETE"_s, 0));
	$assignStatic(SpNegoToken$NegoResult::ACCEPT_INCOMPLETE, $new(SpNegoToken$NegoResult, "ACCEPT_INCOMPLETE"_s, 1));
	$assignStatic(SpNegoToken$NegoResult::REJECT, $new(SpNegoToken$NegoResult, "REJECT"_s, 2));
	$assignStatic(SpNegoToken$NegoResult::$VALUES, SpNegoToken$NegoResult::$values());
}

SpNegoToken$NegoResult::SpNegoToken$NegoResult() {
}

$Class* SpNegoToken$NegoResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ACCEPT_COMPLETE", "Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SpNegoToken$NegoResult, ACCEPT_COMPLETE)},
		{"ACCEPT_INCOMPLETE", "Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SpNegoToken$NegoResult, ACCEPT_INCOMPLETE)},
		{"REJECT", "Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SpNegoToken$NegoResult, REJECT)},
		{"$VALUES", "[Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SpNegoToken$NegoResult, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SpNegoToken$NegoResult, $values, $SpNegoToken$NegoResultArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(SpNegoToken$NegoResult, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(SpNegoToken$NegoResult, valueOf, SpNegoToken$NegoResult*, $String*)},
		{"values", "()[Lsun/security/jgss/spnego/SpNegoToken$NegoResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(SpNegoToken$NegoResult, values, $SpNegoToken$NegoResultArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.spnego.SpNegoToken$NegoResult", "sun.security.jgss.spnego.SpNegoToken", "NegoResult", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.jgss.spnego.SpNegoToken$NegoResult",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/jgss/spnego/SpNegoToken$NegoResult;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jgss.spnego.SpNegoToken"
	};
	$loadClass(SpNegoToken$NegoResult, name, initialize, &classInfo$$, SpNegoToken$NegoResult::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SpNegoToken$NegoResult));
	});
	return class$;
}

$Class* SpNegoToken$NegoResult::class$ = nullptr;

			} // spnego
		} // jgss
	} // security
} // sun