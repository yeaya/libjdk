#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* ModuleElement$ProvidesDirective::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getImplementations", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/TypeElement;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$ProvidesDirective, getImplementations, $List*)},
		{"getService", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$ProvidesDirective, getService, $TypeElement*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.element.ModuleElement$ProvidesDirective", "javax.lang.model.element.ModuleElement", "ProvidesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.ModuleElement$ProvidesDirective",
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
	$loadClass(ModuleElement$ProvidesDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleElement$ProvidesDirective);
	});
	return class$;
}

$Class* ModuleElement$ProvidesDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax