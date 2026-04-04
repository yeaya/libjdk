#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* ModuleElement$Directive::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$Directive, accept, $Object*, $ModuleElement$DirectiveVisitor*, Object$*)},
		{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$Directive, getKind, $ModuleElement$DirectiveKind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.ModuleElement$Directive",
		nullptr,
		nullptr,
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
	$loadClass(ModuleElement$Directive, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleElement$Directive);
	});
	return class$;
}

$Class* ModuleElement$Directive::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax