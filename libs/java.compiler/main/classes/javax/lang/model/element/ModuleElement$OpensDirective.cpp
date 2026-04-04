#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $PackageElement = ::javax::lang::model::element::PackageElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* ModuleElement$OpensDirective::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPackage", "()Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$OpensDirective, getPackage, $PackageElement*)},
		{"getTargetModules", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$OpensDirective, getTargetModules, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.element.ModuleElement$OpensDirective", "javax.lang.model.element.ModuleElement", "OpensDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.ModuleElement$OpensDirective",
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
	$loadClass(ModuleElement$OpensDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleElement$OpensDirective);
	});
	return class$;
}

$Class* ModuleElement$OpensDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax