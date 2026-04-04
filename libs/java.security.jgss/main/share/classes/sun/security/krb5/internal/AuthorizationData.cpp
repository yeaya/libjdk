#include <sun/security/krb5/internal/AuthorizationData.h>
#include <java/io/IOException.h>
#include <java/util/Vector.h>
#include <sun/security/krb5/Asn1Exception.h>
#include <sun/security/krb5/internal/AuthorizationDataEntry.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/ccache/CCacheOutputStream.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ASN1_BAD_ID

using $AuthorizationDataEntryArray = $Array<::sun::security::krb5::internal::AuthorizationDataEntry>;
using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Asn1Exception = ::sun::security::krb5::Asn1Exception;
using $AuthorizationDataEntry = ::sun::security::krb5::internal::AuthorizationDataEntry;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $CCacheOutputStream = ::sun::security::krb5::internal::ccache::CCacheOutputStream;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

void AuthorizationData::init$() {
	$set(this, entry, nullptr);
}

void AuthorizationData::init$($AuthorizationDataEntryArray* new_entries) {
	$useLocalObjectStack();
	$set(this, entry, nullptr);
	if (new_entries != nullptr) {
		$set(this, entry, $new($AuthorizationDataEntryArray, new_entries->length));
		for (int32_t i = 0; i < new_entries->length; ++i) {
			if (new_entries->get(i) == nullptr) {
				$throwNew($IOException, "Cannot create an AuthorizationData"_s);
			} else {
				$nc(this->entry)->set(i, $$cast($AuthorizationDataEntry, $nc(new_entries->get(i))->clone()));
			}
		}
	}
}

void AuthorizationData::init$($AuthorizationDataEntry* new_entry) {
	$set(this, entry, nullptr);
	$set(this, entry, $new($AuthorizationDataEntryArray, 1));
	this->entry->set(0, new_entry);
}

$Object* AuthorizationData::clone() {
	$useLocalObjectStack();
	$var(AuthorizationData, new_authorizationData, $new(AuthorizationData));
	if (this->entry != nullptr) {
		$set(new_authorizationData, entry, $new($AuthorizationDataEntryArray, this->entry->length));
		for (int32_t i = 0; i < $nc(this->entry)->length; ++i) {
			$nc(new_authorizationData->entry)->set(i, $$cast($AuthorizationDataEntry, $nc(this->entry->get(i))->clone()));
		}
	}
	return new_authorizationData;
}

void AuthorizationData::init$($DerValue* der) {
	$useLocalObjectStack();
	$set(this, entry, nullptr);
	$var($Vector, v, $new($Vector));
	if ($nc(der)->getTag() != $DerValue::tag_Sequence) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	}
	while ($$nc(der->getData())->available() > 0) {
		v->addElement($$new($AuthorizationDataEntry, $($$nc(der->getData())->getDerValue())));
	}
	if (v->size() > 0) {
		$set(this, entry, $new($AuthorizationDataEntryArray, v->size()));
		v->copyInto(this->entry);
	}
}

$bytes* AuthorizationData::asn1Encode() {
	$useLocalObjectStack();
	$var($DerOutputStream, bytes, $new($DerOutputStream));
	$var($DerValueArray, der, $new($DerValueArray, $nc(this->entry)->length));
	for (int32_t i = 0; i < $nc(this->entry)->length; ++i) {
		der->set(i, $$new($DerValue, $($nc(this->entry->get(i))->asn1Encode())));
	}
	bytes->putSequence(der);
	return bytes->toByteArray();
}

AuthorizationData* AuthorizationData::parse($DerInputStream* data, int8_t explicitTag, bool optional) {
	$init(AuthorizationData);
	$useLocalObjectStack();
	if ((optional) && (((int8_t)$nc(data)->peekByte() & (int8_t)31) != explicitTag)) {
		return nullptr;
	}
	$var($DerValue, der, $nc(data)->getDerValue());
	if (explicitTag != ($nc(der)->getTag() & (int8_t)31)) {
		$throwNew($Asn1Exception, $Krb5::ASN1_BAD_ID);
	} else {
		$var($DerValue, subDer, $$nc(der->getData())->getDerValue());
		return $new(AuthorizationData, subDer);
	}
}

void AuthorizationData::writeAuth($CCacheOutputStream* cos) {
	for (int32_t i = 0; i < $nc(this->entry)->length; ++i) {
		$nc(this->entry->get(i))->writeEntry(cos);
	}
}

$String* AuthorizationData::toString() {
	$useLocalObjectStack();
	$var($String, retVal, "AuthorizationData:\n"_s);
	for (int32_t i = 0; i < $nc(this->entry)->length; ++i) {
		$plusAssign(retVal, $($nc(this->entry->get(i))->toString()));
	}
	return retVal;
}

int32_t AuthorizationData::count() {
	return $nc(this->entry)->length;
}

$AuthorizationDataEntry* AuthorizationData::item(int32_t i) {
	return $cast($AuthorizationDataEntry, $nc($nc(this->entry)->get(i))->clone());
}

AuthorizationData::AuthorizationData() {
}

$Class* AuthorizationData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entry", "[Lsun/security/krb5/internal/AuthorizationDataEntry;", nullptr, $PRIVATE, $field(AuthorizationData, entry)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AuthorizationData, init$, void)},
		{"<init>", "([Lsun/security/krb5/internal/AuthorizationDataEntry;)V", nullptr, $PUBLIC, $method(AuthorizationData, init$, void, $AuthorizationDataEntryArray*), "java.io.IOException"},
		{"<init>", "(Lsun/security/krb5/internal/AuthorizationDataEntry;)V", nullptr, $PUBLIC, $method(AuthorizationData, init$, void, $AuthorizationDataEntry*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(AuthorizationData, init$, void, $DerValue*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"asn1Encode", "()[B", nullptr, $PUBLIC, $virtualMethod(AuthorizationData, asn1Encode, $bytes*), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthorizationData, clone, $Object*)},
		{"count", "()I", nullptr, $PUBLIC, $virtualMethod(AuthorizationData, count, int32_t)},
		{"item", "(I)Lsun/security/krb5/internal/AuthorizationDataEntry;", nullptr, $PUBLIC, $virtualMethod(AuthorizationData, item, $AuthorizationDataEntry*, int32_t)},
		{"parse", "(Lsun/security/util/DerInputStream;BZ)Lsun/security/krb5/internal/AuthorizationData;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthorizationData, parse, AuthorizationData*, $DerInputStream*, int8_t, bool), "sun.security.krb5.Asn1Exception,java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthorizationData, toString, $String*)},
		{"writeAuth", "(Lsun/security/krb5/internal/ccache/CCacheOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(AuthorizationData, writeAuth, void, $CCacheOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.AuthorizationData",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthorizationData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthorizationData);
	});
	return class$;
}

$Class* AuthorizationData::class$ = nullptr;

			} // internal
		} // krb5
	} // security
} // sun