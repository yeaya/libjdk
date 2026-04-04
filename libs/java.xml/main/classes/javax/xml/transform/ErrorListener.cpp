#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace javax {
	namespace xml {
		namespace transform {

$Class* ErrorListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"error", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorListener, error, void, $TransformerException*), "javax.xml.transform.TransformerException"},
		{"fatalError", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorListener, fatalError, void, $TransformerException*), "javax.xml.transform.TransformerException"},
		{"warning", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ErrorListener, warning, void, $TransformerException*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.ErrorListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorListener);
	});
	return class$;
}

$Class* ErrorListener::class$ = nullptr;

		} // transform
	} // xml
} // javax