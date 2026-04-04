#include <sun/security/krb5/internal/KrbCredInfo.h>
#include <java/util/Vector.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/Realm.h>
#include <sun/security/krb5/internal/HostAddresses.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/TicketFlags.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ASN1_BAD_ID
#undef TAG_CONTEXT

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $Realm = ::sun::security::krb5::Realm;
using $HostAddresses = ::sun::security::krb5::internal::HostAddresses;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $TicketFlags = ::sun::security::krb5::internal::TicketFlags;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void KrbCredInfo::init$() {
}

void KrbCredInfo::init$($EncryptionKey* new_key, $PrincipalName* new_pname, $TicketFlags* new_flags, $KerberosTime* new_authtime, $KerberosTime* new_starttime, $KerberosTime* new_endtime, $KerberosTime* new_renewTill, $PrincipalName* new_sname, $HostAddresses* new_caddr) {
	$set(this, key, new_key);
	$set(this, pname, new_pname);
	$set(this, flags, new_flags);
	$set(this, authtime, new_authtime);
	$set(this, starttime, new_starttime);
	$set(this, endtime, new_endtime);
	$set(this, renewTill, new_renewTill);
	$set(this, sname, new_sname);
	$set(this, caddr, new_caddr);
}

void KrbCredInfo::init$($DerValue* encoding) {
	$useLocalObjectStack();
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$set(this, pname, nullptr);
	$set(this, flags, nullptr);
	$set(this, authtime, nullptr);
	$set(this, starttime, nullptr);
	$set(this, endtime, nullptr);
	$set(this, renewTill, nullptr);
	$set(this, sname, nullptr);
	$set(this, caddr, nullptr);
	$set(this, key, $EncryptionKey::parse($(encoding->getData()), (int8_t)0, false));
	$var($Realm, prealm, nullptr);
	$var($Realm, srealm, nullptr);
	if ($$nc(encoding->getData())->available() > 0) {
		$assign(prealm, $Realm::parse($(encoding->getData()), (int8_t)1, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, pname, $PrincipalName::parse($(encoding->getData()), (int8_t)2, true, prealm));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, flags, $TicketFlags::parse($(encoding->getData()), (int8_t)3, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, authtime, $KerberosTime::parse($(encoding->getData()), (int8_t)4, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, starttime, $KerberosTime::parse($(encoding->getData()), (int8_t)5, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, endtime, $KerberosTime::parse($(encoding->getData()), (int8_t)6, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, renewTill, $KerberosTime::parse($(encoding->getData()), (int8_t)7, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$assign(srealm, $Realm::parse($(encoding->getData()), (int8_t)8, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, sname, $PrincipalName::parse($(encoding->getData()), (int8_t)9, true, srealm));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$set(this, caddr, $HostAddresses::parse($(encoding->getData()), (int8_t)10, true));
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* KrbCredInfo::asn1Encode() {
	$useLocalObjectStack();
	$var($Vector, v, $new($Vector));
	int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0);
	v->addElement($$new($DerValue, var$0, $($nc(this->key)->asn1Encode())));
	if (this->pname != nullptr) {
		int8_t var$1 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1);
		v->addElement($$new($DerValue, var$1, $($$nc(this->pname->getRealm())->asn1Encode())));
		int8_t var$2 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)2);
		v->addElement($$new($DerValue, var$2, $($nc(this->pname)->asn1Encode())));
	}
	if (this->flags != nullptr) {
		int8_t var$3 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)3);
		v->addElement($$new($DerValue, var$3, $(this->flags->asn1Encode())));
	}
	if (this->authtime != nullptr) {
		int8_t var$4 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)4);
		v->addElement($$new($DerValue, var$4, $(this->authtime->asn1Encode())));
	}
	if (this->starttime != nullptr) {
		int8_t var$5 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)5);
		v->addElement($$new($DerValue, var$5, $(this->starttime->asn1Encode())));
	}
	if (this->endtime != nullptr) {
		int8_t var$6 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)6);
		v->addElement($$new($DerValue, var$6, $(this->endtime->asn1Encode())));
	}
	if (this->renewTill != nullptr) {
		int8_t var$7 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)7);
		v->addElement($$new($DerValue, var$7, $(this->renewTill->asn1Encode())));
	}
	if (this->sname != nullptr) {
		int8_t var$8 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)8);
		v->addElement($$new($DerValue, var$8, $($$nc(this->sname->getRealm())->asn1Encode())));
		int8_t var$9 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)9);
		v->addElement($$new($DerValue, var$9, $($nc(this->sname)->asn1Encode())));
	}
	if (this->caddr != nullptr) {
		int8_t var$10 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)10);
		v->addElement($$new($DerValue, var$10, $(this->caddr->asn1Encode())));
	}
	$var($DerValueArray, der, $new($DerValueArray, v->size()));
	v->copyInto(der);
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->putSequence(der);
	return out->toByteArray();
}

$Object* KrbCredInfo::clone() {
	$var(KrbCredInfo, kcred, $new(KrbCredInfo));
	$set(kcred, key, $cast($EncryptionKey, $nc(this->key)->clone()));
	if (this->pname != nullptr) {
		$set(kcred, pname, $cast($PrincipalName, this->pname->clone()));
	}
	if (this->flags != nullptr) {
		$set(kcred, flags, $cast($TicketFlags, this->flags->clone()));
	}
	$set(kcred, authtime, this->authtime);
	$set(kcred, starttime, this->starttime);
	$set(kcred, endtime, this->endtime);
	$set(kcred, renewTill, this->renewTill);
	if (this->sname != nullptr) {
		$set(kcred, sname, $cast($PrincipalName, this->sname->clone()));
	}
	if (this->caddr != nullptr) {
		$set(kcred, caddr, $cast($HostAddresses, this->caddr->clone()));
	}
	return kcred;
}

KrbCredInfo::KrbCredInfo() {
}

$Class* KrbCredInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Lsun/security/krb5/EncryptionKey;", nullptr, $PUBLIC, $field(KrbCredInfo, key)},
		{"pname", "Lsun/security/krb5/PrincipalName;", nullptr, $PUBLIC, $field(KrbCredInfo, pname)},
		{"flags", "Lsun/security/krb5/internal/TicketFlags;", nullptr, $PUBLIC, $field(KrbCredInfo, flags)},
		{"authtime", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PUBLIC, $field(KrbCredInfo, authtime)},
		{"starttime", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PUBLIC, $field(KrbCredInfo, starttime)},
		{"endtime", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PUBLIC, $field(KrbCredInfo, endtime)},
		{"renewTill", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PUBLIC, $field(KrbCredInfo, renewTill)},
		{"sname", "Lsun/security/krb5/PrincipalName;", nullptr, $PUBLIC, $field(KrbCredInfo, sname)},
		{"caddr", "Lsun/security/krb5/internal/HostAddresses;", nullptr, $PUBLIC, $field(KrbCredInfo, caddr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KrbCredInfo, init$, void)},
		{"<init>", "(Lsun/security/krb5/EncryptionKey;Lsun/security/krb5/PrincipalName;Lsun/security/krb5/internal/TicketFlags;Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/PrincipalName;Lsun/security/krb5/internal/HostAddresses;)V", nullptr, $PUBLIC, $method(KrbCredInfo, init$, void, $EncryptionKey*, $PrincipalName*, $TicketFlags*, $KerberosTime*, $KerberosTime*, $KerberosTime*, $KerberosTime*, $PrincipalName*, $HostAddresses*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(KrbCredInfo, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException,sun.security.krb5.RealmException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(KrbCredInfo, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(KrbCredInfo, clone, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.KrbCredInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KrbCredInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KrbCredInfo);
	});
	return class$;
}

$Class* KrbCredInfo::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun