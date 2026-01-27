#include <org/w3c/dom/UserDataHandler.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NODE_ADOPTED
#undef NODE_CLONED
#undef NODE_DELETED
#undef NODE_IMPORTED
#undef NODE_RENAMED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {

$FieldInfo _UserDataHandler_FieldInfo_[] = {
	{"NODE_CLONED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UserDataHandler, NODE_CLONED)},
	{"NODE_IMPORTED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UserDataHandler, NODE_IMPORTED)},
	{"NODE_DELETED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UserDataHandler, NODE_DELETED)},
	{"NODE_RENAMED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UserDataHandler, NODE_RENAMED)},
	{"NODE_ADOPTED", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UserDataHandler, NODE_ADOPTED)},
	{}
};

$MethodInfo _UserDataHandler_MethodInfo_[] = {
	{"handle", "(SLjava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserDataHandler, handle, void, int16_t, $String*, Object$*, $Node*, $Node*)},
	{}
};

$ClassInfo _UserDataHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.UserDataHandler",
	nullptr,
	nullptr,
	_UserDataHandler_FieldInfo_,
	_UserDataHandler_MethodInfo_
};

$Object* allocate$UserDataHandler($Class* clazz) {
	return $of($alloc(UserDataHandler));
}

$Class* UserDataHandler::load$($String* name, bool initialize) {
	$loadClass(UserDataHandler, name, initialize, &_UserDataHandler_ClassInfo_, allocate$UserDataHandler);
	return class$;
}

$Class* UserDataHandler::class$ = nullptr;

		} // dom
	} // w3c
} // org