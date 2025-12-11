#include <javax/lang/model/element/ModuleElement.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ModuleElement_MethodInfo_[] = {
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDirectives", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/ModuleElement$Directive;>;", $PUBLIC | $ABSTRACT},
	{"getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isUnnamed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleElement_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$UsesDirective", "javax.lang.model.element.ModuleElement", "UsesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$ProvidesDirective", "javax.lang.model.element.ModuleElement", "ProvidesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$OpensDirective", "javax.lang.model.element.ModuleElement", "OpensDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$ExportsDirective", "javax.lang.model.element.ModuleElement", "ExportsDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$RequiresDirective", "javax.lang.model.element.ModuleElement", "RequiresDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$DirectiveVisitor", "javax.lang.model.element.ModuleElement", "DirectiveVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$DirectiveKind", "javax.lang.model.element.ModuleElement", "DirectiveKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ModuleElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement",
	nullptr,
	"javax.lang.model.element.QualifiedNameable",
	nullptr,
	_ModuleElement_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement$UsesDirective,javax.lang.model.element.ModuleElement$ProvidesDirective,javax.lang.model.element.ModuleElement$OpensDirective,javax.lang.model.element.ModuleElement$ExportsDirective,javax.lang.model.element.ModuleElement$RequiresDirective,javax.lang.model.element.ModuleElement$DirectiveVisitor,javax.lang.model.element.ModuleElement$Directive,javax.lang.model.element.ModuleElement$DirectiveKind"
};

$Object* allocate$ModuleElement($Class* clazz) {
	return $of($alloc(ModuleElement));
}

$Class* ModuleElement::load$($String* name, bool initialize) {
	$loadClass(ModuleElement, name, initialize, &_ModuleElement_ClassInfo_, allocate$ModuleElement);
	return class$;
}

$Class* ModuleElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax