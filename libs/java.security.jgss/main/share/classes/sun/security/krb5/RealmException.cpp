#include <sun/security/krb5/RealmException.h>

#include <sun/security/krb5/KrbException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KrbException = ::sun::security::krb5::KrbException;

namespace sun {
	namespace security {
		namespace krb5 {

$FieldInfo _RealmException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RealmException, serialVersionUID)},
	{}
};

$MethodInfo _RealmException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(RealmException, init$, void, int32_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RealmException, init$, void, $String*)},
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(RealmException, init$, void, int32_t, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(RealmException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _RealmException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.RealmException",
	"sun.security.krb5.KrbException",
	nullptr,
	_RealmException_FieldInfo_,
	_RealmException_MethodInfo_
};

$Object* allocate$RealmException($Class* clazz) {
	return $of($alloc(RealmException));
}

void RealmException::init$(int32_t i) {
	$KrbException::init$(i);
}

void RealmException::init$($String* s) {
	$KrbException::init$(s);
}

void RealmException::init$(int32_t i, $String* s) {
	$KrbException::init$(i, s);
}

void RealmException::init$($Throwable* cause) {
	$KrbException::init$(cause);
}

RealmException::RealmException() {
}

RealmException::RealmException(const RealmException& e) : $KrbException(e) {
}

void RealmException::throw$() {
	throw *this;
}

$Class* RealmException::load$($String* name, bool initialize) {
	$loadClass(RealmException, name, initialize, &_RealmException_ClassInfo_, allocate$RealmException);
	return class$;
}

$Class* RealmException::class$ = nullptr;

		} // krb5
	} // security
} // sun