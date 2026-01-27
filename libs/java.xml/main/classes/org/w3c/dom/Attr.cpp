#include <org/w3c/dom/Attr.h>

#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _Attr_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, getName, $String*)},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, getOwnerElement, $Element*)},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, getSchemaTypeInfo, $TypeInfo*)},
	{"getSpecified", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, getSpecified, bool)},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, getValue, $String*)},
	{"isId", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, isId, bool)},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attr, setValue, void, $String*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _Attr_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.Attr",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_Attr_MethodInfo_
};

$Object* allocate$Attr($Class* clazz) {
	return $of($alloc(Attr));
}

$Class* Attr::load$($String* name, bool initialize) {
	$loadClass(Attr, name, initialize, &_Attr_ClassInfo_, allocate$Attr);
	return class$;
}

$Class* Attr::class$ = nullptr;

		} // dom
	} // w3c
} // org