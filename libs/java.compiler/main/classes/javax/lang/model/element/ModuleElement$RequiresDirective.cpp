#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* ModuleElement$RequiresDirective::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDependency", "()Ljavax/lang/model/element/ModuleElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$RequiresDirective, getDependency, $ModuleElement*)},
		{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$RequiresDirective, isStatic, bool)},
		{"isTransitive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$RequiresDirective, isTransitive, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.element.ModuleElement$RequiresDirective", "javax.lang.model.element.ModuleElement", "RequiresDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.ModuleElement$RequiresDirective",
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
	$loadClass(ModuleElement$RequiresDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleElement$RequiresDirective);
	});
	return class$;
}

$Class* ModuleElement$RequiresDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax