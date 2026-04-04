#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$1.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/List.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMImplementationRegistry = ::org::w3c::dom::bootstrap::DOMImplementationRegistry;

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

void DOMImplementationRegistry$1::init$($DOMImplementationRegistry* this$0, $List* val$implementations) {
	$set(this, this$0, this$0);
	$set(this, val$implementations, val$implementations);
}

$DOMImplementation* DOMImplementationRegistry$1::item(int32_t index) {
	if (index >= 0 && index < $nc(this->val$implementations)->size()) {
		try {
			return $cast($DOMImplementation, this->val$implementations->get(index));
		} catch ($IndexOutOfBoundsException& e) {
			return nullptr;
		}
	}
	return nullptr;
}

int32_t DOMImplementationRegistry$1::getLength() {
	return $nc(this->val$implementations)->size();
}

DOMImplementationRegistry$1::DOMImplementationRegistry$1() {
}

$Class* DOMImplementationRegistry$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lorg/w3c/dom/bootstrap/DOMImplementationRegistry;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$1, this$0)},
		{"val$implementations", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$1, val$implementations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lorg/w3c/dom/bootstrap/DOMImplementationRegistry;Ljava/util/List;)V", "()V", 0, $method(DOMImplementationRegistry$1, init$, void, $DOMImplementationRegistry*, $List*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$1, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$1, item, $DOMImplementation*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.w3c.dom.bootstrap.DOMImplementationRegistry",
		"getDOMImplementationList",
		"(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.w3c.dom.bootstrap.DOMImplementationRegistry$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry$1",
		"java.lang.Object",
		"org.w3c.dom.DOMImplementationList",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.w3c.dom.bootstrap.DOMImplementationRegistry"
	};
	$loadClass(DOMImplementationRegistry$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMImplementationRegistry$1);
	});
	return class$;
}

$Class* DOMImplementationRegistry$1::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org