#include <com/sun/org/apache/xerces/internal/dom/CharacterDataImpl$1.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void CharacterDataImpl$1::init$() {
}

$Node* CharacterDataImpl$1::item(int32_t index) {
	return nullptr;
}

int32_t CharacterDataImpl$1::getLength() {
	return 0;
}

CharacterDataImpl$1::CharacterDataImpl$1() {
}

$Class* CharacterDataImpl$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CharacterDataImpl$1, init$, void)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl$1, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CharacterDataImpl$1, item, $Node*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl$1",
		"java.lang.Object",
		"org.w3c.dom.NodeList",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.CharacterDataImpl"
	};
	$loadClass(CharacterDataImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterDataImpl$1);
	});
	return class$;
}

$Class* CharacterDataImpl$1::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com