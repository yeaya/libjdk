#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* ModuleElement$UsesDirective::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getService", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$UsesDirective, getService, $TypeElement*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.element.ModuleElement$UsesDirective", "javax.lang.model.element.ModuleElement", "UsesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.ModuleElement$UsesDirective",
		nullptr,
		"javax.lang.model.element.ModuleElement$Directive",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.lang.model.element.ModuleElement"
	};
	$loadClass(ModuleElement$UsesDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleElement$UsesDirective);
	});
	return class$;
}

$Class* ModuleElement$UsesDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax