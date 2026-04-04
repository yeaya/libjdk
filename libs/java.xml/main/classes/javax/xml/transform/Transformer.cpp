#include <javax/xml/transform/Transformer.h>
#include <java/lang/Package.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/URIResolver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Properties = ::java::util::Properties;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $URIResolver = ::javax::xml::transform::URIResolver;

namespace javax {
	namespace xml {
		namespace transform {

void Transformer::init$() {
}

void Transformer::reset() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("This Transformer, \""_s);
	var$0->append($(this->getClass()->getName()));
	var$0->append("\", does not support the reset functionality.  Specification \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationTitle()));
	var$0->append("\" version \""_s);
	var$0->append($($$nc(this->getClass()->getPackage())->getSpecificationVersion()));
	var$0->append("\""_s);
	$throwNew($UnsupportedOperationException, $$str(var$0));
}

Transformer::Transformer() {
}

$Class* Transformer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(Transformer, init$, void)},
		{"clearParameters", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, clearParameters, void)},
		{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, getErrorListener, $ErrorListener*)},
		{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, getOutputProperties, $Properties*)},
		{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, getOutputProperty, $String*, $String*), "java.lang.IllegalArgumentException"},
		{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, getParameter, $Object*, $String*)},
		{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, getURIResolver, $URIResolver*)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(Transformer, reset, void)},
		{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, setErrorListener, void, $ErrorListener*), "java.lang.IllegalArgumentException"},
		{"setOutputProperties", "(Ljava/util/Properties;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, setOutputProperties, void, $Properties*)},
		{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, setOutputProperty, void, $String*, $String*), "java.lang.IllegalArgumentException"},
		{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, setParameter, void, $String*, Object$*)},
		{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, setURIResolver, void, $URIResolver*)},
		{"transform", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transformer, transform, void, $Source*, $Result*), "javax.xml.transform.TransformerException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.transform.Transformer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Transformer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transformer);
	});
	return class$;
}

$Class* Transformer::class$ = nullptr;

		} // transform
	} // xml
} // javax