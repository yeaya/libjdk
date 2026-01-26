#include <sun/security/krb5/internal/MethodData.h>

#include <java/math/BigInteger.h>
#include <sun/security/krb5/Asn1Exception.h>
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
using $BigInteger = ::java::math::BigInteger;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

$FieldInfo _MethodData_FieldInfo_[] = {
	{"methodType", "I", nullptr, $PRIVATE, $field(MethodData, methodType)},
	{"methodData", "[B", nullptr, $PRIVATE, $field(MethodData, methodData)},
	{}
};

$MethodInfo _MethodData_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(MethodData, init$, void, int32_t, $bytes*)},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(MethodData, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(MethodData, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
	{}
};

$ClassInfo _MethodData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.internal.MethodData",
	"java.lang.Object",
	nullptr,
	_MethodData_FieldInfo_,
	_MethodData_MethodInfo_
};

$Object* allocate$MethodData($Class* clazz) {
	return $of($alloc(MethodData));
}

void MethodData::init$(int32_t type, $bytes* data) {
	$set(this, methodData, nullptr);
	this->methodType = type;
	if (data != nullptr) {
		$set(this, methodData, $cast($bytes, data->clone()));
	}
}

void MethodData::init$($DerValue* encoding) {
	$useLocalCurrentObjectStackCache();
	$set(this, methodData, nullptr);
	$var($DerValue, der, nullptr);
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(der, $nc($($nc(encoding)->getData()))->getDerValue());
	if (((int32_t)($nc(der)->getTag() & (uint32_t)31)) == 0) {
		$var($BigInteger, bint, $nc($(der->getData()))->getBigInteger());
		this->methodType = $nc(bint)->intValue();
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	if ($nc($(encoding->getData()))->available() > 0) {
		$assign(der, $nc($(encoding->getData()))->getDerValue());
		if (((int32_t)($nc(der)->getTag() & (uint32_t)31)) == 1) {
			$set(this, methodData, $nc($(der->getData()))->getOctetString());
		} else {
			$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
		}
	}
	if ($nc($(encoding->getData()))->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* MethodData::asn1Encode() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerOutputStream, temp, $new($DerOutputStream));
	temp->putInteger($($BigInteger::valueOf((int64_t)this->methodType)));
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0), temp);
	if (this->methodData != nullptr) {
		$assign(temp, $new($DerOutputStream));
		temp->putOctetString(this->methodData);
		bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1), temp);
	}
	$assign(temp, $new($DerOutputStream));
	temp->write($DerValue::tag_Sequence, bytes);
	return temp->toByteArray();
}

MethodData::MethodData() {
}

$Class* MethodData::load$($String* name, bool initialize) {
	$loadClass(MethodData, name, initialize, &_MethodData_ClassInfo_, allocate$MethodData);
	return class$;
}

$Class* MethodData::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun