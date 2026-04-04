#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

void JCEMapper$Algorithm::init$($Element* el) {
	$useLocalObjectStack();
	$set(this, requiredKey, $nc(el)->getAttributeNS(nullptr, "RequiredKey"_s));
	$set(this, jceName, el->getAttributeNS(nullptr, "JCEName"_s));
	$set(this, algorithmClass, el->getAttributeNS(nullptr, "AlgorithmClass"_s));
	$set(this, jceProvider, el->getAttributeNS(nullptr, "JCEProvider"_s));
	if (el->hasAttribute("KeyLength"_s)) {
		this->keyLength = $Integer::parseInt($(el->getAttributeNS(nullptr, "KeyLength"_s)));
	} else {
		this->keyLength = 0;
	}
	if (el->hasAttribute("IVLength"_s)) {
		this->ivLength = $Integer::parseInt($(el->getAttributeNS(nullptr, "IVLength"_s)));
	} else {
		this->ivLength = 0;
	}
}

void JCEMapper$Algorithm::init$($String* requiredKey, $String* jceName) {
	JCEMapper$Algorithm::init$(requiredKey, jceName, nullptr, 0, 0);
}

void JCEMapper$Algorithm::init$($String* requiredKey, $String* jceName, $String* algorithmClass) {
	JCEMapper$Algorithm::init$(requiredKey, jceName, algorithmClass, 0, 0);
}

void JCEMapper$Algorithm::init$($String* requiredKey, $String* jceName, int32_t keyLength) {
	JCEMapper$Algorithm::init$(requiredKey, jceName, nullptr, keyLength, 0);
}

void JCEMapper$Algorithm::init$($String* requiredKey, $String* jceName, $String* algorithmClass, int32_t keyLength, int32_t ivLength) {
	JCEMapper$Algorithm::init$(requiredKey, jceName, algorithmClass, keyLength, ivLength, nullptr);
}

void JCEMapper$Algorithm::init$($String* requiredKey, $String* jceName, $String* algorithmClass, int32_t keyLength, int32_t ivLength, $String* jceProvider) {
	$set(this, requiredKey, requiredKey);
	$set(this, jceName, jceName);
	$set(this, algorithmClass, algorithmClass);
	this->keyLength = keyLength;
	this->ivLength = ivLength;
	$set(this, jceProvider, jceProvider);
}

JCEMapper$Algorithm::JCEMapper$Algorithm() {
}

$Class* JCEMapper$Algorithm::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"requiredKey", "Ljava/lang/String;", nullptr, $FINAL, $field(JCEMapper$Algorithm, requiredKey)},
		{"jceName", "Ljava/lang/String;", nullptr, $FINAL, $field(JCEMapper$Algorithm, jceName)},
		{"algorithmClass", "Ljava/lang/String;", nullptr, $FINAL, $field(JCEMapper$Algorithm, algorithmClass)},
		{"keyLength", "I", nullptr, $FINAL, $field(JCEMapper$Algorithm, keyLength)},
		{"ivLength", "I", nullptr, $FINAL, $field(JCEMapper$Algorithm, ivLength)},
		{"jceProvider", "Ljava/lang/String;", nullptr, $FINAL, $field(JCEMapper$Algorithm, jceProvider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(JCEMapper$Algorithm, init$, void, $Element*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JCEMapper$Algorithm, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JCEMapper$Algorithm, init$, void, $String*, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JCEMapper$Algorithm, init$, void, $String*, $String*, int32_t)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(JCEMapper$Algorithm, init$, void, $String*, $String*, $String*, int32_t, int32_t)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;)V", nullptr, $PUBLIC, $method(JCEMapper$Algorithm, init$, void, $String*, $String*, $String*, int32_t, int32_t, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.algorithms.JCEMapper$Algorithm", "com.sun.org.apache.xml.internal.security.algorithms.JCEMapper", "Algorithm", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.algorithms.JCEMapper$Algorithm",
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
		"com.sun.org.apache.xml.internal.security.algorithms.JCEMapper"
	};
	$loadClass(JCEMapper$Algorithm, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCEMapper$Algorithm);
	});
	return class$;
}

$Class* JCEMapper$Algorithm::class$ = nullptr;

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com