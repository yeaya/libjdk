#include <sun/security/krb5/internal/util/KerberosString.h>
#include <java/io/IOException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef MSNAME
#undef US_ASCII
#undef UTF_8

using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace util {

bool KerberosString::MSNAME = false;

void KerberosString::init$($String* s) {
	$set(this, s, s);
}

void KerberosString::init$($DerValue* der) {
	$useLocalObjectStack();
	if ($nc(der)->tag != $DerValue::tag_GeneralString) {
		$throwNew($IOException, $$str({"KerberosString\'s tag is incorrect: "_s, $$str(der->tag)}));
	}
	$init($StandardCharsets);
	$set(this, s, $new($String, $(der->getDataBytes()), KerberosString::MSNAME ? $StandardCharsets::UTF_8 : $StandardCharsets::US_ASCII));
}

$String* KerberosString::toString() {
	return this->s;
}

$DerValue* KerberosString::toDerValue() {
	$init($StandardCharsets);
	return $new($DerValue, $DerValue::tag_GeneralString, $($nc(this->s)->getBytes(KerberosString::MSNAME ? $StandardCharsets::UTF_8 : $StandardCharsets::US_ASCII)));
}

void KerberosString::clinit$($Class* clazz) {
	{
		$var($String, prop, $GetPropertyAction::privilegedGetProperty("sun.security.krb5.msinterop.kstring"_s, "true"_s));
		KerberosString::MSNAME = $Boolean::parseBoolean(prop);
	}
}

KerberosString::KerberosString() {
}

$Class* KerberosString::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MSNAME", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KerberosString, MSNAME)},
		{"s", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KerberosString, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KerberosString, init$, void, $String*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(KerberosString, init$, void, $DerValue*), "java.io.IOException"},
		{"toDerValue", "()Lsun/security/util/DerValue;", nullptr, $PUBLIC, $method(KerberosString, toDerValue, $DerValue*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KerberosString, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.krb5.internal.util.KerberosString",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KerberosString, name, initialize, &classInfo$$, KerberosString::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KerberosString);
	});
	return class$;
}

$Class* KerberosString::class$ = nullptr;

				} // util
			} // internal
		} // krb5
	} // security
} // sun