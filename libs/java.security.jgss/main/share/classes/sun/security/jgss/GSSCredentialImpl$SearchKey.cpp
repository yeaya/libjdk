#include <sun/security/jgss/GSSCredentialImpl$SearchKey.h>
#include <org/ietf/jgss/GSSCredential.h>
#include <org/ietf/jgss/Oid.h>
#include <sun/security/jgss/GSSCredentialImpl.h>
#include <jcpp.h>

#undef INITIATE_AND_ACCEPT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GSSCredential = ::org::ietf::jgss::GSSCredential;
using $Oid = ::org::ietf::jgss::Oid;

namespace sun {
	namespace security {
		namespace jgss {

void GSSCredentialImpl$SearchKey::init$($Oid* mechOid, int32_t usage) {
	$set(this, mechOid, nullptr);
	this->usage = $GSSCredential::INITIATE_AND_ACCEPT;
	$set(this, mechOid, mechOid);
	this->usage = usage;
}

$Oid* GSSCredentialImpl$SearchKey::getMech() {
	return this->mechOid;
}

int32_t GSSCredentialImpl$SearchKey::getUsage() {
	return this->usage;
}

bool GSSCredentialImpl$SearchKey::equals(Object$* other) {
	if (!($instanceOf(GSSCredentialImpl$SearchKey, other))) {
		return false;
	}
	$var(GSSCredentialImpl$SearchKey, that, $cast(GSSCredentialImpl$SearchKey, other));
	return (($nc(this->mechOid)->equals($nc(that)->mechOid)) && (this->usage == that->usage));
}

int32_t GSSCredentialImpl$SearchKey::hashCode() {
	return $nc(this->mechOid)->hashCode();
}

GSSCredentialImpl$SearchKey::GSSCredentialImpl$SearchKey() {
}

$Class* GSSCredentialImpl$SearchKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mechOid", "Lorg/ietf/jgss/Oid;", nullptr, $PRIVATE, $field(GSSCredentialImpl$SearchKey, mechOid)},
		{"usage", "I", nullptr, $PRIVATE, $field(GSSCredentialImpl$SearchKey, usage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/ietf/jgss/Oid;I)V", nullptr, $PUBLIC, $method(GSSCredentialImpl$SearchKey, init$, void, $Oid*, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GSSCredentialImpl$SearchKey, equals, bool, Object$*)},
		{"getMech", "()Lorg/ietf/jgss/Oid;", nullptr, $PUBLIC, $virtualMethod(GSSCredentialImpl$SearchKey, getMech, $Oid*)},
		{"getUsage", "()I", nullptr, $PUBLIC, $virtualMethod(GSSCredentialImpl$SearchKey, getUsage, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(GSSCredentialImpl$SearchKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.GSSCredentialImpl$SearchKey", "sun.security.jgss.GSSCredentialImpl", "SearchKey", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.GSSCredentialImpl$SearchKey",
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
		"sun.security.jgss.GSSCredentialImpl"
	};
	$loadClass(GSSCredentialImpl$SearchKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GSSCredentialImpl$SearchKey);
	});
	return class$;
}

$Class* GSSCredentialImpl$SearchKey::class$ = nullptr;

		} // jgss
	} // security
} // sun