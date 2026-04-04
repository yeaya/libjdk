#include <javax/imageio/metadata/IIONodeList.h>
#include <java/util/List.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace imageio {
		namespace metadata {

void IIONodeList::init$($List* nodes) {
	$set(this, nodes, nodes);
}

int32_t IIONodeList::getLength() {
	return $nc(this->nodes)->size();
}

$Node* IIONodeList::item(int32_t index) {
	if (index < 0 || index >= $nc(this->nodes)->size()) {
		return nullptr;
	}
	return $cast($Node, $nc(this->nodes)->get(index));
}

IIONodeList::IIONodeList() {
}

$Class* IIONodeList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nodes", "Ljava/util/List;", "Ljava/util/List<+Lorg/w3c/dom/Node;>;", 0, $field(IIONodeList, nodes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+Lorg/w3c/dom/Node;>;)V", $PUBLIC, $method(IIONodeList, init$, void, $List*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(IIONodeList, getLength, int32_t)},
		{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(IIONodeList, item, $Node*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.metadata.IIONodeList",
		"java.lang.Object",
		"org.w3c.dom.NodeList",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IIONodeList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIONodeList);
	});
	return class$;
}

$Class* IIONodeList::class$ = nullptr;

		} // metadata
	} // imageio
} // javax