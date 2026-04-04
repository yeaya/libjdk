#include <sun/security/jgss/GSSCaller.h>
#include <jcpp.h>

#undef CALLER_ACCEPT
#undef CALLER_INITIATE
#undef CALLER_UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace jgss {

GSSCaller* GSSCaller::CALLER_UNKNOWN = nullptr;
GSSCaller* GSSCaller::CALLER_INITIATE = nullptr;
GSSCaller* GSSCaller::CALLER_ACCEPT = nullptr;

void GSSCaller::init$($String* s) {
	$set(this, name, s);
}

$String* GSSCaller::toString() {
	return $str({"GSSCaller{"_s, this->name, $$str(u'}')});
}

void GSSCaller::clinit$($Class* clazz) {
	$assignStatic(GSSCaller::CALLER_UNKNOWN, $new(GSSCaller, "UNKNOWN"_s));
	$assignStatic(GSSCaller::CALLER_INITIATE, $new(GSSCaller, "INITIATE"_s));
	$assignStatic(GSSCaller::CALLER_ACCEPT, $new(GSSCaller, "ACCEPT"_s));
}

GSSCaller::GSSCaller() {
}

$Class* GSSCaller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CALLER_UNKNOWN", "Lsun/security/jgss/GSSCaller;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSCaller, CALLER_UNKNOWN)},
		{"CALLER_INITIATE", "Lsun/security/jgss/GSSCaller;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSCaller, CALLER_INITIATE)},
		{"CALLER_ACCEPT", "Lsun/security/jgss/GSSCaller;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSCaller, CALLER_ACCEPT)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GSSCaller, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(GSSCaller, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GSSCaller, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.jgss.GSSCaller",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GSSCaller, name, initialize, &classInfo$$, GSSCaller::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GSSCaller);
	});
	return class$;
}

$Class* GSSCaller::class$ = nullptr;

		} // jgss
	} // security
} // sun