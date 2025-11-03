#include <javax/lang/model/element/ModuleElement$Directive.h>

#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$DirectiveVisitor = ::javax::lang::model::element::ModuleElement$DirectiveVisitor;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ModuleElement$Directive_MethodInfo_[] = {
	{"accept", "(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<TR;TP;>;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"getKind", "()Ljavax/lang/model/element/ModuleElement$DirectiveKind;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleElement$Directive_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleElement$Directive_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement$Directive",
	nullptr,
	nullptr,
	nullptr,
	_ModuleElement$Directive_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleElement$Directive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$Directive($Class* clazz) {
	return $of($alloc(ModuleElement$Directive));
}

$Class* ModuleElement$Directive::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$Directive, name, initialize, &_ModuleElement$Directive_ClassInfo_, allocate$ModuleElement$Directive);
	return class$;
}

$Class* ModuleElement$Directive::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax