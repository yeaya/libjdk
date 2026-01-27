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

$FieldInfo _DOMImplementationRegistry$1_FieldInfo_[] = {
	{"this$0", "Lorg/w3c/dom/bootstrap/DOMImplementationRegistry;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$1, this$0)},
	{"val$implementations", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(DOMImplementationRegistry$1, val$implementations)},
	{}
};

$MethodInfo _DOMImplementationRegistry$1_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/bootstrap/DOMImplementationRegistry;Ljava/util/List;)V", "()V", 0, $method(DOMImplementationRegistry$1, init$, void, $DOMImplementationRegistry*, $List*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$1, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationRegistry$1, item, $DOMImplementation*, int32_t)},
	{}
};

$EnclosingMethodInfo _DOMImplementationRegistry$1_EnclosingMethodInfo_ = {
	"org.w3c.dom.bootstrap.DOMImplementationRegistry",
	"getDOMImplementationList",
	"(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;"
};

$InnerClassInfo _DOMImplementationRegistry$1_InnerClassesInfo_[] = {
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMImplementationRegistry$1_ClassInfo_ = {
	$ACC_SUPER,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry$1",
	"java.lang.Object",
	"org.w3c.dom.DOMImplementationList",
	_DOMImplementationRegistry$1_FieldInfo_,
	_DOMImplementationRegistry$1_MethodInfo_,
	nullptr,
	&_DOMImplementationRegistry$1_EnclosingMethodInfo_,
	_DOMImplementationRegistry$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry"
};

$Object* allocate$DOMImplementationRegistry$1($Class* clazz) {
	return $of($alloc(DOMImplementationRegistry$1));
}

void DOMImplementationRegistry$1::init$($DOMImplementationRegistry* this$0, $List* val$implementations) {
	$set(this, this$0, this$0);
	$set(this, val$implementations, val$implementations);
}

$DOMImplementation* DOMImplementationRegistry$1::item(int32_t index) {
	if (index >= 0 && index < $nc(this->val$implementations)->size()) {
		try {
			return $cast($DOMImplementation, $nc(this->val$implementations)->get(index));
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
	$loadClass(DOMImplementationRegistry$1, name, initialize, &_DOMImplementationRegistry$1_ClassInfo_, allocate$DOMImplementationRegistry$1);
	return class$;
}

$Class* DOMImplementationRegistry$1::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org