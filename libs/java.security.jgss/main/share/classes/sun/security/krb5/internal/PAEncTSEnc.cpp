#include <sun/security/krb5/internal/PAEncTSEnc.h>
#include <java/math/BigInteger.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ASN1_BAD_ID
#undef TAG_CONTEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void PAEncTSEnc::init$($KerberosTime* new_pATimeStamp, $Integer* new_pAUSec) {
	$set(this, pATimeStamp, new_pATimeStamp);
	$set(this, pAUSec, new_pAUSec);
}

void PAEncTSEnc::init$() {
	$var($KerberosTime, now, $KerberosTime::now());
	$set(this, pATimeStamp, now);
	$set(this, pAUSec, $Integer::valueOf($nc(now)->getMicroSeconds()));
}

void PAEncTSEnc::init$($DerValue* encoding) {
	$useLocalObjectStack();
	$var($DerValue, der, nullptr);
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$set(this, pATimeStamp, $KerberosTime::parse($(encoding->getData()), (int8_t)0, false));
	if ($$nc(encoding->getData())->available() > 0) {
		$assign(der, $$nc(encoding->getData())->getDerValue());
		if (($nc(der)->getTag() & 0x1f) == 1) {
			$set(this, pAUSec, $Integer::valueOf($$nc($$nc(der->getData())->getBigInteger())->intValue()));
		} else {
			$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
		}
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* PAEncTSEnc::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerOutputStream, temp, $new($DerOutputStream));
	int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0);
	bytes->write(var$0, $($nc(this->pATimeStamp)->asn1Encode()));
	if (this->pAUSec != nullptr) {
		$assign(temp, $new($DerOutputStream));
		temp->putInteger($($BigInteger::valueOf(this->pAUSec->intValue())));
		bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1), temp);
	}
	$assign(temp, $new($DerOutputStream));
	temp->write($DerValue::tag_Sequence, bytes);
	return temp->toByteArray();
}

PAEncTSEnc::PAEncTSEnc() {
}

$Class* PAEncTSEnc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pATimeStamp", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PUBLIC, $field(PAEncTSEnc, pATimeStamp)},
		{"pAUSec", "Ljava/lang/Integer;", nullptr, $PUBLIC, $field(PAEncTSEnc, pAUSec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/krb5/internal/KerberosTime;Ljava/lang/Integer;)V", nullptr, $PUBLIC, $method(PAEncTSEnc, init$, void, $KerberosTime*, $Integer*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(PAEncTSEnc, init$, void)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(PAEncTSEnc, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(PAEncTSEnc, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.PAEncTSEnc",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PAEncTSEnc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PAEncTSEnc);
	});
	return class$;
}

$Class* PAEncTSEnc::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun