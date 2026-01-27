#include <org/w3c/dom/DocumentType.h>

#include <org/w3c/dom/NamedNodeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _DocumentType_MethodInfo_[] = {
	{"getEntities", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getEntities, $NamedNodeMap*)},
	{"getInternalSubset", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getInternalSubset, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getName, $String*)},
	{"getNotations", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getNotations, $NamedNodeMap*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentType, getSystemId, $String*)},
	{}
};

$ClassInfo _DocumentType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.DocumentType",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_DocumentType_MethodInfo_
};

$Object* allocate$DocumentType($Class* clazz) {
	return $of($alloc(DocumentType));
}

$Class* DocumentType::load$($String* name, bool initialize) {
	$loadClass(DocumentType, name, initialize, &_DocumentType_ClassInfo_, allocate$DocumentType);
	return class$;
}

$Class* DocumentType::class$ = nullptr;

		} // dom
	} // w3c
} // org