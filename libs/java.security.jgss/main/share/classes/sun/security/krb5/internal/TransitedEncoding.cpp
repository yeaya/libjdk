#include <sun/security/krb5/internal/TransitedEncoding.h>

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

$FieldInfo _TransitedEncoding_FieldInfo_[] = {
	{"trType", "I", nullptr, $PUBLIC, $field(TransitedEncoding, trType)},
	{"contents", "[B", nullptr, $PUBLIC, $field(TransitedEncoding, contents)},
	{}
};

$MethodInfo _TransitedEncoding_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(TransitedEncoding, init$, void, int32_t, $bytes*)},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(TransitedEncoding, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(TransitedEncoding, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
	{"parse", "(Lsun/security/util/DerInputStream;BZ)Lsun/security/krb5/internal/TransitedEncoding;", nullptr, $PUBLIC | $STATIC, $staticMethod(TransitedEncoding, parse, TransitedEncoding*, $DerInputStream*, int8_t, bool), "sun.security.krb5.Asn1Exception,java.io.IOException"},
	{}
};

$ClassInfo _TransitedEncoding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.internal.TransitedEncoding",
	"java.lang.Object",
	nullptr,
	_TransitedEncoding_FieldInfo_,
	_TransitedEncoding_MethodInfo_
};

$Object* allocate$TransitedEncoding($Class* clazz) {
	return $of($alloc(TransitedEncoding));
}

void TransitedEncoding::init$(int32_t type, $bytes* cont) {
	this->trType = type;
	$set(this, contents, cont);
}

void TransitedEncoding::init$($DerValue* encoding) {
	$useLocalCurrentObjectStackCache();
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$var($DerValue, der, nullptr);
	$assign(der, $nc($($nc(encoding)->getData()))->getDerValue());
	if (((int32_t)($nc(der)->getTag() & (uint32_t)31)) == 0) {
		this->trType = $nc($($nc($(der->getData()))->getBigInteger()))->intValue();
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(der, $nc($(encoding->getData()))->getDerValue());
	if (((int32_t)($nc(der)->getTag() & (uint32_t)31)) == 1) {
		$set(this, contents, $nc($(der->getData()))->getOctetString());
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	if ($nc($($nc(der)->getData()))->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* TransitedEncoding::asn1Encode() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerOutputStream, temp, $new($DerOutputStream));
	temp->putInteger($($BigInteger::valueOf((int64_t)this->trType)));
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)0), temp);
	$assign(temp, $new($DerOutputStream));
	temp->putOctetString(this->contents);
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1), temp);
	$assign(temp, $new($DerOutputStream));
	temp->write($DerValue::tag_Sequence, bytes);
	return temp->toByteArray();
}

TransitedEncoding* TransitedEncoding::parse($DerInputStream* data, int8_t explicitTag, bool optional) {
	$useLocalCurrentObjectStackCache();
	if ((optional) && (((int32_t)((int8_t)$nc(data)->peekByte() & (uint32_t)(int32_t)(int8_t)31)) != explicitTag)) {
		return nullptr;
	}
	$var($DerValue, der, $nc(data)->getDerValue());
	if (explicitTag != ((int32_t)($nc(der)->getTag() & (uint32_t)(int32_t)(int8_t)31))) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	} else {
		$var($DerValue, subDer, $nc($(der->getData()))->getDerValue());
		return $new(TransitedEncoding, subDer);
	}
}

TransitedEncoding::TransitedEncoding() {
}

$Class* TransitedEncoding::load$($String* name, bool initialize) {
	$loadClass(TransitedEncoding, name, initialize, &_TransitedEncoding_ClassInfo_, allocate$TransitedEncoding);
	return class$;
}

$Class* TransitedEncoding::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun