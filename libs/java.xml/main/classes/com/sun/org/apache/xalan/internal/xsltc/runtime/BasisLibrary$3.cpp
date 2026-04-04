#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary$3.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

void BasisLibrary$3::init$($Node* val$inNode) {
	$set(this, val$inNode, val$inNode);
}

int32_t BasisLibrary$3::getLength() {
	return 1;
}

$Node* BasisLibrary$3::item(int32_t index) {
	if (index == 0) {
		return this->val$inNode;
	} else {
		return nullptr;
	}
}

BasisLibrary$3::BasisLibrary$3() {
}

$Class* BasisLibrary$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$inNode", "Lorg/w3c/dom/Node;", nullptr, $FINAL | $SYNTHETIC, $field(BasisLibrary$3, val$inNode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/w3c/dom/Node;)V", "()V", 0, $method(BasisLibrary$3, init$, void, $Node*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(BasisLibrary$3, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(BasisLibrary$3, item, $Node*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary",
		"node2Iterator",
		"(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary$3",
		"java.lang.Object",
		"org.w3c.dom.NodeList",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.BasisLibrary"
	};
	$loadClass(BasisLibrary$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasisLibrary$3);
	});
	return class$;
}

$Class* BasisLibrary$3::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com