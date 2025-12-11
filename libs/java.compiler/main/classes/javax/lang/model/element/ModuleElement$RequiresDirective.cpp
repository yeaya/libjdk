#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>

#include <javax/lang/model/element/ModuleElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ModuleElement$RequiresDirective_MethodInfo_[] = {
	{"getDependency", "()Ljavax/lang/model/element/ModuleElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"isStatic", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTransitive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleElement$RequiresDirective_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$RequiresDirective", "javax.lang.model.element.ModuleElement", "RequiresDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleElement$RequiresDirective_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement$RequiresDirective",
	nullptr,
	"javax.lang.model.element.ModuleElement$Directive",
	nullptr,
	_ModuleElement$RequiresDirective_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleElement$RequiresDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$RequiresDirective($Class* clazz) {
	return $of($alloc(ModuleElement$RequiresDirective));
}

$Class* ModuleElement$RequiresDirective::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$RequiresDirective, name, initialize, &_ModuleElement$RequiresDirective_ClassInfo_, allocate$ModuleElement$RequiresDirective);
	return class$;
}

$Class* ModuleElement$RequiresDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax