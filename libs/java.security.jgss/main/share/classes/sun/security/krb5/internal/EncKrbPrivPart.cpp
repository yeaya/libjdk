#include <sun/security/krb5/internal/EncKrbPrivPart.h>
#include <java/math/BigInteger.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/internal/HostAddress.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ASN1_BAD_ID
#undef TAG_APPLICATION
#undef TAG_CONTEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $HostAddress = ::sun::security::krb5::internal::HostAddress;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void EncKrbPrivPart::init$($bytes* new_userData, $KerberosTime* new_timestamp, $Integer* new_usec, $Integer* new_seqNumber, $HostAddress* new_sAddress, $HostAddress* new_rAddress) {
	$set(this, userData, nullptr);
	if (new_userData != nullptr) {
		$set(this, userData, $cast($bytes, new_userData->clone()));
	}
	$set(this, timestamp, new_timestamp);
	$set(this, usec, new_usec);
	$set(this, seqNumber, new_seqNumber);
	$set(this, sAddress, new_sAddress);
	$set(this, rAddress, new_rAddress);
}

void EncKrbPrivPart::init$($bytes* data) {
	$set(this, userData, nullptr);
	init($$new($DerValue, data));
}

void EncKrbPrivPart::init$($DerValue* encoding) {
	$set(this, userData, nullptr);
	init(encoding);
}

void EncKrbPrivPart::init($DerValue* encoding) {
	$useLocalObjectStack();
	$var($DerValue, der, nullptr);
	$var($DerValue, subDer, nullptr);
	bool var$1 = ($nc(encoding)->getTag() & (int8_t)31) != (int8_t)28;
	bool var$0 = var$1 || (encoding->isApplication() != true);
	if (var$0 || (encoding->isConstructed() != true)) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(der, $$nc(encoding->getData())->getDerValue());
	if ($nc(der)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(subDer, $$nc(der->getData())->getDerValue());
	if (($nc(subDer)->getTag() & (int8_t)31) == (int8_t)0) {
		$set(this, userData, $$nc(subDer->getData())->getOctetString());
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$set(this, timestamp, $KerberosTime::parse($(der->getData()), (int8_t)1, true));
	if (($$nc(der->getData())->peekByte() & 0x1f) == 2) {
		$assign(subDer, $$nc(der->getData())->getDerValue());
		$set(this, usec, $Integer::valueOf($$nc($$nc($nc(subDer)->getData())->getBigInteger())->intValue()));
	} else {
		$set(this, usec, nullptr);
	}
	if (($$nc(der->getData())->peekByte() & 0x1f) == 3) {
		$assign(subDer, $$nc(der->getData())->getDerValue());
		$set(this, seqNumber, $Integer::valueOf($$nc($$nc($nc(subDer)->getData())->getBigInteger())->intValue()));
	} else {
		$set(this, seqNumber, nullptr);
	}
	$set(this, sAddress, $HostAddress::parse($(der->getData()), (int8_t)4, false));
	if ($$nc(der->getData())->available() > 0) {
		$set(this, rAddress, $HostAddress::parse($(der->getData()), (int8_t)5, true));
	}
	if ($$nc(der->getData())->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* EncKrbPrivPart::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, temp, $new($DerOutputStream));
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	temp->putOctetString(this->userData);
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0), temp);
	if (this->timestamp != nullptr) {
		int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1);
		bytes->write(var$0, $(this->timestamp->asn1Encode()));
	}
	if (this->usec != nullptr) {
		$assign(temp, $new($DerOutputStream));
		temp->putInteger($($BigInteger::valueOf(this->usec->intValue())));
		bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)2), temp);
	}
	if (this->seqNumber != nullptr) {
		$assign(temp, $new($DerOutputStream));
		temp->putInteger($($BigInteger::valueOf(this->seqNumber->longValue())));
		bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)3), temp);
	}
	int8_t var$1 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)4);
	bytes->write(var$1, $($nc(this->sAddress)->asn1Encode()));
	if (this->rAddress != nullptr) {
		int8_t var$2 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)5);
		bytes->write(var$2, $(this->rAddress->asn1Encode()));
	}
	$assign(temp, $new($DerOutputStream));
	temp->write($DerValue::tag_Sequence, bytes);
	$assign(bytes, $new($DerOutputStream));
	bytes->write($DerValue::createTag($DerValue::TAG_APPLICATION, true, (int8_t)28), temp);
	return bytes->toByteArray();
}

EncKrbPrivPart::EncKrbPrivPart() {
}

$Class* EncKrbPrivPart::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"userData", "[B", nullptr, $PUBLIC, $field(EncKrbPrivPart, userData)},
		{"timestamp", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PUBLIC, $field(EncKrbPrivPart, timestamp)},
		{"usec", "Ljava/lang/Integer;", nullptr, $PUBLIC, $field(EncKrbPrivPart, usec)},
		{"seqNumber", "Ljava/lang/Integer;", nullptr, $PUBLIC, $field(EncKrbPrivPart, seqNumber)},
		{"sAddress", "Lsun/security/krb5/internal/HostAddress;", nullptr, $PUBLIC, $field(EncKrbPrivPart, sAddress)},
		{"rAddress", "Lsun/security/krb5/internal/HostAddress;", nullptr, $PUBLIC, $field(EncKrbPrivPart, rAddress)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BLsun/security/krb5/internal/KerberosTime;Ljava/lang/Integer;Ljava/lang/Integer;Lsun/security/krb5/internal/HostAddress;Lsun/security/krb5/internal/HostAddress;)V", nullptr, $PUBLIC, $method(EncKrbPrivPart, init$, void, $bytes*, $KerberosTime*, $Integer*, $Integer*, $HostAddress*, $HostAddress*)},
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(EncKrbPrivPart, init$, void, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(EncKrbPrivPart, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(EncKrbPrivPart, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"init", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(EncKrbPrivPart, init, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.EncKrbPrivPart",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EncKrbPrivPart, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncKrbPrivPart);
	});
	return class$;
}

$Class* EncKrbPrivPart::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun