#include <sun/security/jgss/krb5/Krb5Context$KerberosSessionKey.h>
#include <sun/security/jgss/krb5/Krb5Context.h>
#include <sun/security/krb5/EncryptionKey.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncryptionKey = ::sun::security::krb5::EncryptionKey;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {

void Krb5Context$KerberosSessionKey::init$($EncryptionKey* key) {
	$set(this, key, key);
}

$String* Krb5Context$KerberosSessionKey::getAlgorithm() {
	return $Integer::toString($nc(this->key)->getEType());
}

$String* Krb5Context$KerberosSessionKey::getFormat() {
	return "RAW"_s;
}

$bytes* Krb5Context$KerberosSessionKey::getEncoded() {
	return $cast($bytes, $$nc($nc(this->key)->getBytes())->clone());
}

$String* Krb5Context$KerberosSessionKey::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Kerberos session key: etype: "_s);
	var$0->append($nc(this->key)->getEType());
	var$0->append("\n"_s);
	var$0->append($($$new($HexDumpEncoder)->encodeBuffer($(this->key->getBytes()))));
	return $str(var$0);
}

Krb5Context$KerberosSessionKey::Krb5Context$KerberosSessionKey() {
}

$Class* Krb5Context$KerberosSessionKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Krb5Context$KerberosSessionKey, serialVersionUID)},
		{"key", "Lsun/security/krb5/EncryptionKey;", nullptr, $PRIVATE | $FINAL, $field(Krb5Context$KerberosSessionKey, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/krb5/EncryptionKey;)V", nullptr, 0, $method(Krb5Context$KerberosSessionKey, init$, void, $EncryptionKey*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Krb5Context$KerberosSessionKey, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(Krb5Context$KerberosSessionKey, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Krb5Context$KerberosSessionKey, getFormat, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Krb5Context$KerberosSessionKey, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.krb5.Krb5Context$KerberosSessionKey", "sun.security.jgss.krb5.Krb5Context", "KerberosSessionKey", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jgss.krb5.Krb5Context$KerberosSessionKey",
		"java.lang.Object",
		"java.security.Key",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jgss.krb5.Krb5Context"
	};
	$loadClass(Krb5Context$KerberosSessionKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Krb5Context$KerberosSessionKey);
	});
	return class$;
}

$Class* Krb5Context$KerberosSessionKey::class$ = nullptr;

			} // krb5
		} // jgss
	} // security
} // sun