#include <javax/imageio/metadata/IIODOMException.h>
#include <org/w3c/dom/DOMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;

namespace javax {
	namespace imageio {
		namespace metadata {

void IIODOMException::init$(int16_t code, $String* message) {
	$DOMException::init$(code, message);
}

IIODOMException::IIODOMException() {
}

IIODOMException::IIODOMException(const IIODOMException& e) : $DOMException(e) {
}

void IIODOMException::throw$() {
	throw *this;
}

$Class* IIODOMException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IIODOMException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(IIODOMException, init$, void, int16_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.metadata.IIODOMException",
		"org.w3c.dom.DOMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IIODOMException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIODOMException);
	});
	return class$;
}

$Class* IIODOMException::class$ = nullptr;

		} // metadata
	} // imageio
} // javax