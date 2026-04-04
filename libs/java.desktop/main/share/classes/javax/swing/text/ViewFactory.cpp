#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$Class* ViewFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ViewFactory, create, $View*, $Element*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.ViewFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ViewFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ViewFactory);
	});
	return class$;
}

$Class* ViewFactory::class$ = nullptr;

		} // text
	} // swing
} // javax