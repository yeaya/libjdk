#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>

#include <java/util/List.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $PackageElement = ::javax::lang::model::element::PackageElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ModuleElement$ExportsDirective_MethodInfo_[] = {
	{"getPackage", "()Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetModules", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleElement$ExportsDirective_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$ExportsDirective", "javax.lang.model.element.ModuleElement", "ExportsDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleElement$ExportsDirective_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement$ExportsDirective",
	nullptr,
	"javax.lang.model.element.ModuleElement$Directive",
	nullptr,
	_ModuleElement$ExportsDirective_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleElement$ExportsDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$ExportsDirective($Class* clazz) {
	return $of($alloc(ModuleElement$ExportsDirective));
}

$Class* ModuleElement$ExportsDirective::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$ExportsDirective, name, initialize, &_ModuleElement$ExportsDirective_ClassInfo_, allocate$ModuleElement$ExportsDirective);
	return class$;
}

$Class* ModuleElement$ExportsDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax