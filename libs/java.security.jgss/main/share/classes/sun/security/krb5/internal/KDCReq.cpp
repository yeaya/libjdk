#include <sun/security/krb5/internal/KDCReq.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/math/BigInteger.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/internal/KDCReqBody.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/KrbApErrException.h>
#include <sun/security/krb5/internal/PAData.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ASN1_BAD_ID
#undef KRB_AP_ERR_BADVERSION
#undef KRB_AP_ERR_MSG_TYPE
#undef PVNO
#undef TAG_APPLICATION
#undef TAG_CONTEXT

using $PADataArray = $Array<::sun::security::krb5::internal::PAData>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $KDCReqBody = ::sun::security::krb5::internal::KDCReqBody;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $KrbApErrException = ::sun::security::krb5::internal::KrbApErrException;
using $PAData = ::sun::security::krb5::internal::PAData;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void KDCReq::init$($PADataArray* new_pAData, $KDCReqBody* new_reqBody, int32_t req_type) {
	$useLocalObjectStack();
	$set(this, pAData, nullptr);
	this->pvno = $Krb5::PVNO;
	this->msgType = req_type;
	if (new_pAData != nullptr) {
		$set(this, pAData, $new($PADataArray, new_pAData->length));
		for (int32_t i = 0; i < new_pAData->length; ++i) {
			if (new_pAData->get(i) == nullptr) {
				$throwNew($IOException, "Cannot create a KDCRep"_s);
			} else {
				$nc(this->pAData)->set(i, $$cast($PAData, $nc(new_pAData->get(i))->clone()));
			}
		}
	}
	$set(this, reqBody, new_reqBody);
}

void KDCReq::init$() {
	$set(this, pAData, nullptr);
}

void KDCReq::init$($bytes* data, int32_t req_type) {
	$set(this, pAData, nullptr);
	init($$new($DerValue, data), req_type);
}

void KDCReq::init$($DerValue* der, int32_t req_type) {
	$set(this, pAData, nullptr);
	init(der, req_type);
}

void KDCReq::init($DerValue* encoding, int32_t req_type) {
	$useLocalObjectStack();
	$var($DerValue, der, nullptr);
	$var($DerValue, subDer, nullptr);
	$var($BigInteger, bint, nullptr);
	if (($nc(encoding)->getTag() & 0x1f) != req_type) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(der, $$nc(encoding->getData())->getDerValue());
	if ($nc(der)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(subDer, $$nc(der->getData())->getDerValue());
	if (($nc(subDer)->getTag() & 0x1f) == 1) {
		$assign(bint, $$nc(subDer->getData())->getBigInteger());
		this->pvno = $nc(bint)->intValue();
		if (this->pvno != $Krb5::PVNO) {
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_BADVERSION);
		}
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(subDer, $$nc(der->getData())->getDerValue());
	if (($nc(subDer)->getTag() & 0x1f) == 2) {
		$assign(bint, $$nc(subDer->getData())->getBigInteger());
		this->msgType = $nc(bint)->intValue();
		if (this->msgType != req_type) {
			$throwNew($KrbApErrException, $Krb5::KRB_AP_ERR_MSG_TYPE);
		}
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$set(this, pAData, $PAData::parseSequence($(der->getData()), (int8_t)3, true));
	$assign(subDer, $$nc(der->getData())->getDerValue());
	if (($nc(subDer)->getTag() & 0x1f) == 4) {
		$var($DerValue, subsubDer, $$nc(subDer->getData())->getDerValue());
		$set(this, reqBody, $new($KDCReqBody, subsubDer, this->msgType));
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* KDCReq::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, temp, nullptr);
	$var($DerOutputStream, bytes, nullptr);
	$var($DerOutputStream, out, nullptr);
	$assign(temp, $new($DerOutputStream));
	temp->putInteger($($BigInteger::valueOf(this->pvno)));
	$assign(out, $new($DerOutputStream));
	out->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)1), temp);
	$assign(temp, $new($DerOutputStream));
	temp->putInteger($($BigInteger::valueOf(this->msgType)));
	out->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)2), temp);
	if (this->pAData != nullptr && this->pAData->length > 0) {
		$assign(temp, $new($DerOutputStream));
		for (int32_t i = 0; i < $nc(this->pAData)->length; ++i) {
			temp->write($($nc(this->pAData->get(i))->asn1Encode()));
		}
		$assign(bytes, $new($DerOutputStream));
		bytes->write($DerValue::tag_SequenceOf, temp);
		out->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)3), bytes);
	}
	int8_t var$0 = $DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)4);
	out->write(var$0, $($nc(this->reqBody)->asn1Encode(this->msgType)));
	$assign(bytes, $new($DerOutputStream));
	bytes->write($DerValue::tag_Sequence, out);
	$assign(out, $new($DerOutputStream));
	out->write($DerValue::createTag($DerValue::TAG_APPLICATION, true, (int8_t)this->msgType), bytes);
	return out->toByteArray();
}

$bytes* KDCReq::asn1EncodeReqBody() {
	return $nc(this->reqBody)->asn1Encode(this->msgType);
}

KDCReq::KDCReq() {
}

$Class* KDCReq::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"reqBody", "Lsun/security/krb5/internal/KDCReqBody;", nullptr, $PUBLIC, $field(KDCReq, reqBody)},
		{"pAData", "[Lsun/security/krb5/internal/PAData;", nullptr, $PUBLIC, $field(KDCReq, pAData)},
		{"pvno", "I", nullptr, $PRIVATE, $field(KDCReq, pvno)},
		{"msgType", "I", nullptr, $PRIVATE, $field(KDCReq, msgType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lsun/security/krb5/internal/PAData;Lsun/security/krb5/internal/KDCReqBody;I)V", nullptr, $PUBLIC, $method(KDCReq, init$, void, $PADataArray*, $KDCReqBody*, int32_t), "java.io.IOException"},
		{"<init>", "()V", nullptr, $PUBLIC, $method(KDCReq, init$, void)},
		{"<init>", "([BI)V", nullptr, $PUBLIC, $method(KDCReq, init$, void, $bytes*, int32_t), "sun.security.krb5.Asn1Exception,java.io.IOException,sun.security.krb5.KrbException"},
		{"<init>", "(Lsun/security/util/DerValue;I)V", nullptr, $PUBLIC, $method(KDCReq, init$, void, $DerValue*, int32_t), "sun.security.krb5.Asn1Exception,java.io.IOException,sun.security.krb5.KrbException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(KDCReq, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"asn1EncodeReqBody", "()[B", nullptr, $PUBLIC, $virtualMethod(KDCReq, asn1EncodeReqBody, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"init", "(Lsun/security/util/DerValue;I)V", nullptr, $PROTECTED, $virtualMethod(KDCReq, init, void, $DerValue*, int32_t), "sun.security.krb5.Asn1Exception,java.io.IOException,sun.security.krb5.KrbException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.KDCReq",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KDCReq, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KDCReq);
	});
	return class$;
}

$Class* KDCReq::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun