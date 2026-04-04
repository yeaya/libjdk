#include <org/ietf/jgss/GSSName.h>
#include <org/ietf/jgss/Oid.h>
#include <jcpp.h>

#undef NT_ANONYMOUS
#undef NT_EXPORT_NAME
#undef NT_HOSTBASED_SERVICE
#undef NT_MACHINE_UID_NAME
#undef NT_STRING_UID_NAME
#undef NT_USER_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Oid = ::org::ietf::jgss::Oid;

namespace org {
	namespace ietf {
		namespace jgss {

bool GSSName::equals(Object$* another) {
	 return this->$Object::equals(another);
}

int32_t GSSName::hashCode() {
	 return this->$Object::hashCode();
}

$String* GSSName::toString() {
	 return this->$Object::toString();
}

$Oid* GSSName::NT_HOSTBASED_SERVICE = nullptr;
$Oid* GSSName::NT_USER_NAME = nullptr;
$Oid* GSSName::NT_MACHINE_UID_NAME = nullptr;
$Oid* GSSName::NT_STRING_UID_NAME = nullptr;
$Oid* GSSName::NT_ANONYMOUS = nullptr;
$Oid* GSSName::NT_EXPORT_NAME = nullptr;

void GSSName::clinit$($Class* clazz) {
	$assignStatic(GSSName::NT_HOSTBASED_SERVICE, $Oid::getInstance("1.2.840.113554.1.2.1.4"_s));
	$assignStatic(GSSName::NT_USER_NAME, $Oid::getInstance("1.2.840.113554.1.2.1.1"_s));
	$assignStatic(GSSName::NT_MACHINE_UID_NAME, $Oid::getInstance("1.2.840.113554.1.2.1.2"_s));
	$assignStatic(GSSName::NT_STRING_UID_NAME, $Oid::getInstance("1.2.840.113554.1.2.1.3"_s));
	$assignStatic(GSSName::NT_ANONYMOUS, $Oid::getInstance("1.3.6.1.5.6.3"_s));
	$assignStatic(GSSName::NT_EXPORT_NAME, $Oid::getInstance("1.3.6.1.5.6.4"_s));
}

$Class* GSSName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NT_HOSTBASED_SERVICE", "Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSName, NT_HOSTBASED_SERVICE)},
		{"NT_USER_NAME", "Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSName, NT_USER_NAME)},
		{"NT_MACHINE_UID_NAME", "Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSName, NT_MACHINE_UID_NAME)},
		{"NT_STRING_UID_NAME", "Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSName, NT_STRING_UID_NAME)},
		{"NT_ANONYMOUS", "Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSName, NT_ANONYMOUS)},
		{"NT_EXPORT_NAME", "Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GSSName, NT_EXPORT_NAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"canonicalize", "(Lorg/ietf/jgss/Oid;)Lorg/ietf/jgss/GSSName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSName, canonicalize, GSSName*, $Oid*), "org.ietf.jgss.GSSException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"equals", "(Lorg/ietf/jgss/GSSName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSName, equals, bool, GSSName*), "org.ietf.jgss.GSSException"},
		{"export", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSName, export$, $bytes*), "org.ietf.jgss.GSSException"},
		{"getStringNameType", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSName, getStringNameType, $Oid*), "org.ietf.jgss.GSSException"},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"isAnonymous", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSName, isAnonymous, bool)},
		{"isMN", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GSSName, isMN, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.ietf.jgss.GSSName",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GSSName, name, initialize, &classInfo$$, GSSName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GSSName);
	});
	return class$;
}

$Class* GSSName::class$ = nullptr;

		} // jgss
	} // ietf
} // org