#include <sun/security/krb5/internal/PAData.h>
#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Vector.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/internal/ETypeInfo.h>
#include <sun/security/krb5/internal/ETypeInfo2.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/PAData$SaltAndParams.h>
#include <sun/security/krb5/internal/crypto/EType.h>
#include <sun/security/krb5/internal/util/KerberosString.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ASN1_BAD_ID
#undef MSNAME
#undef PA_ENC_TIMESTAMP
#undef PA_ETYPE_INFO
#undef PA_ETYPE_INFO2
#undef PA_FOR_USER
#undef PA_PW_SALT
#undef TAG_CONTEXT
#undef TAG_PATYPE
#undef TAG_PAVALUE
#undef UTF_8

using $PADataArray = $Array<::sun::security::krb5::internal::PAData>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Vector = ::java::util::Vector;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $ETypeInfo = ::sun::security::krb5::internal::ETypeInfo;
using $ETypeInfo2 = ::sun::security::krb5::internal::ETypeInfo2;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $PAData$SaltAndParams = ::sun::security::krb5::internal::PAData$SaltAndParams;
using $EType = ::sun::security::krb5::internal::crypto::EType;
using $KerberosString = ::sun::security::krb5::internal::util::KerberosString;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void PAData::init$() {
	$set(this, pADataValue, nullptr);
}

void PAData::init$(int32_t new_pADataType, $bytes* new_pADataValue) {
	$set(this, pADataValue, nullptr);
	this->pADataType = new_pADataType;
	if (new_pADataValue != nullptr) {
		$set(this, pADataValue, $cast($bytes, new_pADataValue->clone()));
	}
}

$Object* PAData::clone() {
	$var(PAData, new_pAData, $new(PAData));
	new_pAData->pADataType = this->pADataType;
	if (this->pADataValue != nullptr) {
		$set(new_pAData, pADataValue, $new($bytes, this->pADataValue->length));
		$System::arraycopy(this->pADataValue, 0, new_pAData->pADataValue, 0, this->pADataValue->length);
	}
	return new_pAData;
}

void PAData::init$($DerValue* encoding) {
	$useLocalObjectStack();
	$set(this, pADataValue, nullptr);
	$var($DerValue, der, nullptr);
	if ($nc(encoding)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(der, $$nc(encoding->getData())->getDerValue());
	if (($nc(der)->getTag() & 0x1f) == 1) {
		this->pADataType = $$nc($$nc(der->getData())->getBigInteger())->intValue();
	} else {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$assign(der, $$nc(encoding->getData())->getDerValue());
	if (($nc(der)->getTag() & 0x1f) == 2) {
		$set(this, pADataValue, $$nc(der->getData())->getOctetString());
	}
	if ($$nc(encoding->getData())->available() > 0) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
}

$bytes* PAData::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerOutputStream, temp, $new($DerOutputStream));
	temp->putInteger(this->pADataType);
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, PAData::TAG_PATYPE), temp);
	$assign(temp, $new($DerOutputStream));
	temp->putOctetString(this->pADataValue);
	bytes->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, PAData::TAG_PAVALUE), temp);
	$assign(temp, $new($DerOutputStream));
	temp->write($DerValue::tag_Sequence, bytes);
	return temp->toByteArray();
}

int32_t PAData::getType() {
	return this->pADataType;
}

$bytes* PAData::getValue() {
	return ((this->pADataValue == nullptr) ? ($bytes*)nullptr : $cast($bytes, this->pADataValue->clone()));
}

$PADataArray* PAData::parseSequence($DerInputStream* data, int8_t explicitTag, bool optional) {
	$useLocalObjectStack();
	if ((optional) && (((int8_t)$nc(data)->peekByte() & (int8_t)31) != explicitTag)) {
		return nullptr;
	}
	$var($DerValue, subDer, $nc(data)->getDerValue());
	$var($DerValue, subsubDer, $$nc($nc(subDer)->getData())->getDerValue());
	if ($nc(subsubDer)->getTag() != $DerValue::tag_SequenceOf) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	$var($Vector, v, $new($Vector));
	while ($$nc(subsubDer->getData())->available() > 0) {
		v->addElement($$new(PAData, $($$nc(subsubDer->getData())->getDerValue())));
	}
	if (v->size() > 0) {
		$var($PADataArray, pas, $new($PADataArray, v->size()));
		v->copyInto(pas);
		return pas;
	}
	return nullptr;
}

int32_t PAData::getPreferredEType($PADataArray* pas, int32_t defaultEType) {
	$useLocalObjectStack();
	if (pas == nullptr) {
		return defaultEType;
	}
	$var($DerValue, d, nullptr);
	$var($DerValue, d2, nullptr);
	{
		$var($PADataArray, arr$, pas);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var(PAData, p, arr$->get(i$));
			{
				if ($nc(p)->getValue() == nullptr) {
					continue;
				}
				switch (p->getType()) {
				case $Krb5::PA_ETYPE_INFO:
					$assign(d, $new($DerValue, $(p->getValue())));
					break;
				case $Krb5::PA_ETYPE_INFO2:
					$assign(d2, $new($DerValue, $(p->getValue())));
					break;
				}
			}
		}
	}
	if (d2 != nullptr) {
		while ($nc(d2->data$)->available() > 0) {
			$var($DerValue, value, d2->data$->getDerValue());
			$var($ETypeInfo2, tmp, $new($ETypeInfo2, value));
			bool var$0 = $EType::isNewer(tmp->getEType());
			if (var$0 || tmp->getParams() == nullptr) {
				return tmp->getEType();
			}
		}
	}
	if (d != nullptr) {
		while ($nc(d->data$)->available() > 0) {
			$var($DerValue, value, d->data$->getDerValue());
			$var($ETypeInfo, tmp, $new($ETypeInfo, value));
			return tmp->getEType();
		}
	}
	return defaultEType;
}

$PAData$SaltAndParams* PAData::getSaltAndParams(int32_t eType, $PADataArray* pas) {
	$useLocalObjectStack();
	if (pas == nullptr) {
		return nullptr;
	}
	$var($DerValue, d, nullptr);
	$var($DerValue, d2, nullptr);
	$var($String, paPwSalt, nullptr);
	{
		$var($PADataArray, arr$, pas);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var(PAData, p, arr$->get(i$));
			{
				if ($nc(p)->getValue() == nullptr) {
					continue;
				}
				switch (p->getType()) {
				case $Krb5::PA_PW_SALT:
					$init($KerberosString);
					$init($StandardCharsets);
					$assign(paPwSalt, $new($String, $(p->getValue()), $KerberosString::MSNAME ? $StandardCharsets::UTF_8 : $StandardCharsets::ISO_8859_1));
					break;
				case $Krb5::PA_ETYPE_INFO:
					$assign(d, $new($DerValue, $(p->getValue())));
					break;
				case $Krb5::PA_ETYPE_INFO2:
					$assign(d2, $new($DerValue, $(p->getValue())));
					break;
				}
			}
		}
	}
	if (d2 != nullptr) {
		while ($nc(d2->data$)->available() > 0) {
			$var($DerValue, value, d2->data$->getDerValue());
			$var($ETypeInfo2, tmp, $new($ETypeInfo2, value));
			bool var$0 = tmp->getEType() == eType;
			if (var$0) {
				bool var$1 = $EType::isNewer(eType);
				var$0 = var$1 || tmp->getParams() == nullptr;
			}
			if (var$0) {
				$var($String, var$2, tmp->getSalt());
				return $new($PAData$SaltAndParams, var$2, $(tmp->getParams()));
			}
		}
	}
	if (d != nullptr) {
		while ($nc(d->data$)->available() > 0) {
			$var($DerValue, value, d->data$->getDerValue());
			$var($ETypeInfo, tmp, $new($ETypeInfo, value));
			if (tmp->getEType() == eType) {
				return $new($PAData$SaltAndParams, $(tmp->getSalt()), nullptr);
			}
		}
	}
	if (paPwSalt != nullptr) {
		return $new($PAData$SaltAndParams, paPwSalt, nullptr);
	}
	return nullptr;
}

$String* PAData::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(">>>Pre-Authentication Data:\n\t PA-DATA type = "_s)->append(this->pADataType)->append(u'\n');
	switch (this->pADataType) {
	case $Krb5::PA_ENC_TIMESTAMP:
		sb->append("\t PA-ENC-TIMESTAMP"_s);
		break;
	case $Krb5::PA_ETYPE_INFO:
		if (this->pADataValue != nullptr) {
			try {
				$var($DerValue, der, $new($DerValue, this->pADataValue));
				while ($nc(der->data$)->available() > 0) {
					$var($DerValue, value, der->data$->getDerValue());
					$var($ETypeInfo, info, $new($ETypeInfo, value));
					sb->append("\t PA-ETYPE-INFO etype = "_s)->append(info->getEType())->append(", salt = "_s)->append($(info->getSalt()))->append(u'\n');
				}
			} catch ($IOException& e) {
				sb->append("\t <Unparseable PA-ETYPE-INFO>\n"_s);
			} catch ($Asn1Exception& e) {
				sb->append("\t <Unparseable PA-ETYPE-INFO>\n"_s);
			}
		}
		break;
	case $Krb5::PA_ETYPE_INFO2:
		if (this->pADataValue != nullptr) {
			try {
				$var($DerValue, der, $new($DerValue, this->pADataValue));
				while ($nc(der->data$)->available() > 0) {
					$var($DerValue, value, der->data$->getDerValue());
					$var($ETypeInfo2, info2, $new($ETypeInfo2, value));
					sb->append("\t PA-ETYPE-INFO2 etype = "_s)->append(info2->getEType())->append(", salt = "_s)->append($(info2->getSalt()))->append(", s2kparams = "_s);
					$var($bytes, s2kparams, info2->getParams());
					if (s2kparams == nullptr) {
						sb->append("null\n"_s);
					} else if (s2kparams->length == 0) {
						sb->append("empty\n"_s);
					} else {
						sb->append($($$new($HexDumpEncoder)->encodeBuffer(s2kparams)));
					}
				}
			} catch ($IOException& e) {
				sb->append("\t <Unparseable PA-ETYPE-INFO>\n"_s);
			} catch ($Asn1Exception& e) {
				sb->append("\t <Unparseable PA-ETYPE-INFO>\n"_s);
			}
		}
		break;
	case $Krb5::PA_FOR_USER:
		sb->append("\t PA-FOR-USER\n"_s);
		break;
	default:
		break;
	}
	return sb->toString();
}

PAData::PAData() {
}

$Class* PAData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pADataType", "I", nullptr, $PRIVATE, $field(PAData, pADataType)},
		{"pADataValue", "[B", nullptr, $PRIVATE, $field(PAData, pADataValue)},
		{"TAG_PATYPE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PAData, TAG_PATYPE)},
		{"TAG_PAVALUE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PAData, TAG_PAVALUE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PAData, init$, void)},
		{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(PAData, init$, void, int32_t, $bytes*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(PAData, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(PAData, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PAData, clone, $Object*)},
		{"getPreferredEType", "([Lsun/security/krb5/internal/PAData;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(PAData, getPreferredEType, int32_t, $PADataArray*, int32_t), "java.io.IOException,sun.security.krb5.Asn1Exception"},
		{"getSaltAndParams", "(I[Lsun/security/krb5/internal/PAData;)Lsun/security/krb5/internal/PAData$SaltAndParams;", nullptr, $PUBLIC | $STATIC, $staticMethod(PAData, getSaltAndParams, $PAData$SaltAndParams*, int32_t, $PADataArray*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(PAData, getType, int32_t)},
		{"getValue", "()[B", nullptr, $PUBLIC, $virtualMethod(PAData, getValue, $bytes*)},
		{"parseSequence", "(Lsun/security/util/DerInputStream;BZ)[Lsun/security/krb5/internal/PAData;", nullptr, $PUBLIC | $STATIC, $staticMethod(PAData, parseSequence, $PADataArray*, $DerInputStream*, int8_t, bool), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PAData, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.PAData$SaltAndParams", "sun.security.krb5.internal.PAData", "SaltAndParams", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.PAData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.PAData$SaltAndParams"
	};
	$loadClass(PAData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PAData);
	});
	return class$;
}

$Class* PAData::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun