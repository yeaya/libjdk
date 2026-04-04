#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector.h>
#include <jcpp.h>

#undef DECRYPT
#undef ENCRYPT
#undef SIGN
#undef VERIFY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {

KeySelector$Purpose* KeySelector$Purpose::SIGN = nullptr;
KeySelector$Purpose* KeySelector$Purpose::VERIFY = nullptr;
KeySelector$Purpose* KeySelector$Purpose::ENCRYPT = nullptr;
KeySelector$Purpose* KeySelector$Purpose::DECRYPT = nullptr;

void KeySelector$Purpose::init$($String* name) {
	$set(this, name, name);
}

$String* KeySelector$Purpose::toString() {
	return this->name;
}

void KeySelector$Purpose::clinit$($Class* clazz) {
	$assignStatic(KeySelector$Purpose::SIGN, $new(KeySelector$Purpose, "sign"_s));
	$assignStatic(KeySelector$Purpose::VERIFY, $new(KeySelector$Purpose, "verify"_s));
	$assignStatic(KeySelector$Purpose::ENCRYPT, $new(KeySelector$Purpose, "encrypt"_s));
	$assignStatic(KeySelector$Purpose::DECRYPT, $new(KeySelector$Purpose, "decrypt"_s));
}

KeySelector$Purpose::KeySelector$Purpose() {
}

$Class* KeySelector$Purpose::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeySelector$Purpose, name)},
		{"SIGN", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, SIGN)},
		{"VERIFY", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, VERIFY)},
		{"ENCRYPT", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, ENCRYPT)},
		{"DECRYPT", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, DECRYPT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(KeySelector$Purpose, init$, void, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeySelector$Purpose, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.KeySelector$Purpose", "javax.xml.crypto.KeySelector", "Purpose", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.crypto.KeySelector$Purpose",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.crypto.KeySelector"
	};
	$loadClass(KeySelector$Purpose, name, initialize, &classInfo$$, KeySelector$Purpose::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KeySelector$Purpose);
	});
	return class$;
}

$Class* KeySelector$Purpose::class$ = nullptr;

		} // crypto
	} // xml
} // javax