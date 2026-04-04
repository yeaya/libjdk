#include <javax/xml/crypto/KeySelector$SingletonKeySelector$1.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $KeySelector$SingletonKeySelector = ::javax::xml::crypto::KeySelector$SingletonKeySelector;

namespace javax {
	namespace xml {
		namespace crypto {

void KeySelector$SingletonKeySelector$1::init$($KeySelector$SingletonKeySelector* this$0) {
	$set(this, this$0, this$0);
}

$Key* KeySelector$SingletonKeySelector$1::getKey() {
	return this->this$0->key;
}

KeySelector$SingletonKeySelector$1::KeySelector$SingletonKeySelector$1() {
}

$Class* KeySelector$SingletonKeySelector$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/xml/crypto/KeySelector$SingletonKeySelector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySelector$SingletonKeySelector$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/xml/crypto/KeySelector$SingletonKeySelector;)V", nullptr, 0, $method(KeySelector$SingletonKeySelector$1, init$, void, $KeySelector$SingletonKeySelector*)},
		{"getKey", "()Ljava/security/Key;", nullptr, $PUBLIC, $virtualMethod(KeySelector$SingletonKeySelector$1, getKey, $Key*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.xml.crypto.KeySelector$SingletonKeySelector",
		"select",
		"(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljavax/xml/crypto/KeySelector$Purpose;Ljavax/xml/crypto/AlgorithmMethod;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/KeySelectorResult;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.KeySelector$SingletonKeySelector", "javax.xml.crypto.KeySelector", "SingletonKeySelector", $PRIVATE | $STATIC},
		{"javax.xml.crypto.KeySelector$SingletonKeySelector$1", nullptr, nullptr, 0},
		{"javax.xml.crypto.KeySelector$Purpose", "javax.xml.crypto.KeySelector", "Purpose", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.crypto.KeySelector$SingletonKeySelector$1",
		"java.lang.Object",
		"javax.xml.crypto.KeySelectorResult",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.crypto.KeySelector"
	};
	$loadClass(KeySelector$SingletonKeySelector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySelector$SingletonKeySelector$1);
	});
	return class$;
}

$Class* KeySelector$SingletonKeySelector$1::class$ = nullptr;

		} // crypto
	} // xml
} // javax