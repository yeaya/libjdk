#include <javax/xml/transform/sax/TransformerHandler.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Transformer.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Transformer = ::javax::xml::transform::Transformer;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

int32_t TransformerHandler::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool TransformerHandler::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* TransformerHandler::clone() {
	 return this->$ContentHandler::clone();
}

$String* TransformerHandler::toString() {
	 return this->$ContentHandler::toString();
}

void TransformerHandler::finalize() {
	this->$ContentHandler::finalize();
}

$Class* TransformerHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformerHandler, getSystemId, $String*)},
		{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformerHandler, getTransformer, $Transformer*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"setResult", "(Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformerHandler, setResult, void, $Result*), "java.lang.IllegalArgumentException"},
		{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransformerHandler, setSystemId, void, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.sax.TransformerHandler",
		nullptr,
		"org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler",
		nullptr,
		methodInfos$$
	};
	$loadClass(TransformerHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TransformerHandler));
	});
	return class$;
}

$Class* TransformerHandler::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax