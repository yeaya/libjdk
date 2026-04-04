#include <sun/security/krb5/internal/LastReqEntry.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void LastReqEntry::init$() {
}

void LastReqEntry::init$(int32_t Type, $KerberosTime* time) {
	this->lrType = Type;
	$set(this, lrValue, time);
}

void LastReqEntry::init$($DerValue* encoding) {
	$useLocalObjectStack();
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$var($DerValue, der, nullptr);
	$assign(der, $$nc(encoding->getData())->getDerValue());
	if (($nc(der)->getTag() & 0x1f) == 0) {
		this->lrType = $$nc($$nc(der->getData())->getBigInteger())->intValue();
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$set(this, lrValue, $KerberosTime::parse($(encoding->getData()), (int8_t)1, false));
	if ($$nc(encoding->getData())->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* LastReqEntry::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerOutputStream, temp, $new($DerOutputStream));
	temp->putInteger(this->lrType);
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0), temp);
	int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1);
	bytes->write(var$0, $($nc(this->lrValue)->asn1Encode()));
	$assign(temp, $new($DerOutputStream));
	temp->write($DerValue::tag_Sequence, bytes);
	return temp->toByteArray();
}

$Object* LastReqEntry::clone() {
	$var(LastReqEntry, newEntry, $new(LastReqEntry));
	newEntry->lrType = this->lrType;
	$set(newEntry, lrValue, this->lrValue);
	return newEntry;
}

LastReqEntry::LastReqEntry() {
}

$Class* LastReqEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lrType", "I", nullptr, $PRIVATE, $field(LastReqEntry, lrType)},
		{"lrValue", "Lsun/security/krb5/internal/KerberosTime;", nullptr, $PRIVATE, $field(LastReqEntry, lrValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LastReqEntry, init$, void)},
		{"<init>", "(ILsun/security/krb5/internal/KerberosTime;)V", nullptr, $PUBLIC, $method(LastReqEntry, init$, void, int32_t, $KerberosTime*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(LastReqEntry, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(LastReqEntry, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LastReqEntry, clone, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.LastReqEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LastReqEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastReqEntry);
	});
	return class$;
}

$Class* LastReqEntry::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun