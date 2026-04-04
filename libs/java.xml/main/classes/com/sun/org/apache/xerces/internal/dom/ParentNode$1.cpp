#include <com/sun/org/apache/xerces/internal/dom/ParentNode$1.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
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
				namespace xerces {
					namespace internal {
						namespace dom {

void ParentNode$1::init$($ParentNode* this$0) {
	$set(this, this$0, this$0);
}

int32_t ParentNode$1::getLength() {
	return this->this$0->nodeListGetLength();
}

$Node* ParentNode$1::item(int32_t index) {
	return this->this$0->nodeListItem(index);
}

ParentNode$1::ParentNode$1() {
}

$Class* ParentNode$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/ParentNode;", nullptr, $FINAL | $SYNTHETIC, $field(ParentNode$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/ParentNode;)V", nullptr, 0, $method(ParentNode$1, init$, void, $ParentNode*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(ParentNode$1, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(ParentNode$1, item, $Node*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.dom.ParentNode",
		"getChildNodesUnoptimized",
		"()Lorg/w3c/dom/NodeList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.ParentNode$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.ParentNode$1",
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
		"com.sun.org.apache.xerces.internal.dom.ParentNode"
	};
	$loadClass(ParentNode$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParentNode$1);
	});
	return class$;
}

$Class* ParentNode$1::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com