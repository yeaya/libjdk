#include <javax/xml/crypto/KeySelector.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $KeySelector$Purpose = ::javax::xml::crypto::KeySelector$Purpose;
using $KeySelector$SingletonKeySelector = ::javax::xml::crypto::KeySelector$SingletonKeySelector;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;

namespace javax {
	namespace xml {
		namespace crypto {

void KeySelector::init$() {
}

KeySelector* KeySelector::singletonKeySelector($Key* key) {
	return $new($KeySelector$SingletonKeySelector, key);
}

KeySelector::KeySelector() {
}

$Class* KeySelector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(KeySelector, init$, void)},
		{"select", "(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljavax/xml/crypto/KeySelector$Purpose;Ljavax/xml/crypto/AlgorithmMethod;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeySelector, select, $KeySelectorResult*, $KeyInfo*, $KeySelector$Purpose*, $AlgorithmMethod*, $XMLCryptoContext*), "javax.xml.crypto.KeySelectorException"},
		{"singletonKeySelector", "(Ljava/security/Key;)Ljavax/xml/crypto/KeySelector;", nullptr, $PUBLIC | $STATIC, $staticMethod(KeySelector, singletonKeySelector, KeySelector*, $Key*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.crypto.KeySelector$SingletonKeySelector", "javax.xml.crypto.KeySelector", "SingletonKeySelector", $PRIVATE | $STATIC},
		{"javax.xml.crypto.KeySelector$Purpose", "javax.xml.crypto.KeySelector", "Purpose", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.crypto.KeySelector",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.xml.crypto.KeySelector$SingletonKeySelector,javax.xml.crypto.KeySelector$SingletonKeySelector$1,javax.xml.crypto.KeySelector$Purpose"
	};
	$loadClass(KeySelector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySelector);
	});
	return class$;
}

$Class* KeySelector::class$ = nullptr;

		} // crypto
	} // xml
} // javax