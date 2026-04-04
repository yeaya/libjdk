#include <javax/xml/transform/Templates.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/Transformer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $Transformer = ::javax::xml::transform::Transformer;

namespace javax {
	namespace xml {
		namespace transform {

$Class* Templates::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Templates, getOutputProperties, $Properties*)},
		{"newTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Templates, newTransformer, $Transformer*), "javax.xml.transform.TransformerConfigurationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.transform.Templates",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Templates, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Templates);
	});
	return class$;
}

$Class* Templates::class$ = nullptr;

		} // transform
	} // xml
} // javax