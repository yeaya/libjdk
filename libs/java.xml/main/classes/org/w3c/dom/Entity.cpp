#include <org/w3c/dom/Entity.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Entity_MethodInfo_[] = {
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getInputEncoding, $String*)},
	{"getNotationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getNotationName, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getSystemId, $String*)},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getXmlEncoding, $String*)},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Entity, getXmlVersion, $String*)},
	{}
};

$ClassInfo _Entity_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Entity",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Entity_MethodInfo_
};

$Object* allocate$Entity($Class* clazz) {
	return $of($alloc(Entity));
}

$Class* Entity::load$($String* name, bool initialize) {
	$loadClass(Entity, name, initialize, &_Entity_ClassInfo_, allocate$Entity);
	return class$;
}

$Class* Entity::class$ = nullptr;

		} // dom
	} // w3c
} // org