#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$MethodInfo _DTMNodeListBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMNodeListBase, init$, void)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(DTMNodeListBase, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNodeListBase, item, $Node*, int32_t)},
	{}
};

$ClassInfo _DTMNodeListBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeListBase",
	"java.lang.Object",
	"org.w3c.dom.NodeList",
	nullptr,
	_DTMNodeListBase_MethodInfo_
};

$Object* allocate$DTMNodeListBase($Class* clazz) {
	return $of($alloc(DTMNodeListBase));
}

void DTMNodeListBase::init$() {
}

$Node* DTMNodeListBase::item(int32_t index) {
	return nullptr;
}

int32_t DTMNodeListBase::getLength() {
	return 0;
}

DTMNodeListBase::DTMNodeListBase() {
}

$Class* DTMNodeListBase::load$($String* name, bool initialize) {
	$loadClass(DTMNodeListBase, name, initialize, &_DTMNodeListBase_ClassInfo_, allocate$DTMNodeListBase);
	return class$;
}

$Class* DTMNodeListBase::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com