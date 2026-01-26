#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>

#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>
#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/UnknownDirectiveException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $ModuleElement$ExportsDirective = ::javax::lang::model::element::ModuleElement$ExportsDirective;
using $ModuleElement$OpensDirective = ::javax::lang::model::element::ModuleElement$OpensDirective;
using $ModuleElement$ProvidesDirective = ::javax::lang::model::element::ModuleElement$ProvidesDirective;
using $ModuleElement$RequiresDirective = ::javax::lang::model::element::ModuleElement$RequiresDirective;
using $ModuleElement$UsesDirective = ::javax::lang::model::element::ModuleElement$UsesDirective;
using $UnknownDirectiveException = ::javax::lang::model::element::UnknownDirectiveException;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ModuleElement$DirectiveVisitor_MethodInfo_[] = {
	{"visit", "(Ljavax/lang/model/element/ModuleElement$Directive;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$Directive;)TR;", $PUBLIC, $virtualMethod(ModuleElement$DirectiveVisitor, visit, $Object*, $ModuleElement$Directive*)},
	{"visit", "(Ljavax/lang/model/element/ModuleElement$Directive;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$Directive;TP;)TR;", $PUBLIC, $virtualMethod(ModuleElement$DirectiveVisitor, visit, $Object*, $ModuleElement$Directive*, Object$*)},
	{"visitExports", "(Ljavax/lang/model/element/ModuleElement$ExportsDirective;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$ExportsDirective;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$DirectiveVisitor, visitExports, $Object*, $ModuleElement$ExportsDirective*, Object$*)},
	{"visitOpens", "(Ljavax/lang/model/element/ModuleElement$OpensDirective;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$OpensDirective;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$DirectiveVisitor, visitOpens, $Object*, $ModuleElement$OpensDirective*, Object$*)},
	{"visitProvides", "(Ljavax/lang/model/element/ModuleElement$ProvidesDirective;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$ProvidesDirective;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$DirectiveVisitor, visitProvides, $Object*, $ModuleElement$ProvidesDirective*, Object$*)},
	{"visitRequires", "(Ljavax/lang/model/element/ModuleElement$RequiresDirective;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$RequiresDirective;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$DirectiveVisitor, visitRequires, $Object*, $ModuleElement$RequiresDirective*, Object$*)},
	{"visitUnknown", "(Ljavax/lang/model/element/ModuleElement$Directive;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$Directive;TP;)TR;", $PUBLIC, $virtualMethod(ModuleElement$DirectiveVisitor, visitUnknown, $Object*, $ModuleElement$Directive*, Object$*)},
	{"visitUses", "(Ljavax/lang/model/element/ModuleElement$UsesDirective;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement$UsesDirective;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$DirectiveVisitor, visitUses, $Object*, $ModuleElement$UsesDirective*, Object$*)},
	{}
};

$InnerClassInfo _ModuleElement$DirectiveVisitor_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$DirectiveVisitor", "javax.lang.model.element.ModuleElement", "DirectiveVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleElement$DirectiveVisitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement$DirectiveVisitor",
	nullptr,
	nullptr,
	nullptr,
	_ModuleElement$DirectiveVisitor_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ModuleElement$DirectiveVisitor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$DirectiveVisitor($Class* clazz) {
	return $of($alloc(ModuleElement$DirectiveVisitor));
}

$Object* ModuleElement$DirectiveVisitor::visit($ModuleElement$Directive* d) {
	return $of($nc(d)->accept(this, nullptr));
}

$Object* ModuleElement$DirectiveVisitor::visit($ModuleElement$Directive* d, Object$* p) {
	return $of($nc(d)->accept(this, p));
}

$Object* ModuleElement$DirectiveVisitor::visitUnknown($ModuleElement$Directive* d, Object$* p) {
	$throwNew($UnknownDirectiveException, d, p);
	$shouldNotReachHere();
}

$Class* ModuleElement$DirectiveVisitor::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$DirectiveVisitor, name, initialize, &_ModuleElement$DirectiveVisitor_ClassInfo_, allocate$ModuleElement$DirectiveVisitor);
	return class$;
}

$Class* ModuleElement$DirectiveVisitor::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax