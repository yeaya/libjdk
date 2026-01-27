#include <com/sun/org/apache/xml/internal/utils/NodeConsumer.h>

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
						namespace utils {

$MethodInfo _NodeConsumer_MethodInfo_[] = {
	{"setOriginatingNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeConsumer, setOriginatingNode, void, $Node*)},
	{}
};

$ClassInfo _NodeConsumer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.utils.NodeConsumer",
	nullptr,
	nullptr,
	nullptr,
	_NodeConsumer_MethodInfo_
};

$Object* allocate$NodeConsumer($Class* clazz) {
	return $of($alloc(NodeConsumer));
}

$Class* NodeConsumer::load$($String* name, bool initialize) {
	$loadClass(NodeConsumer, name, initialize, &_NodeConsumer_ClassInfo_, allocate$NodeConsumer);
	return class$;
}

$Class* NodeConsumer::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com