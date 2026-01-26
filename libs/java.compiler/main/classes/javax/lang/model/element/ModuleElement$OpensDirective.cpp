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

$MethodInfo _ModuleElement$OpensDirective_MethodInfo_[] = {
	{"getPackage", "()Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$OpensDirective, getPackage, $PackageElement*)},
	{"getTargetModules", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ModuleElement$OpensDirective, getTargetModules, $List*)},
	{}
};

$InnerClassInfo _ModuleElement$OpensDirective_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$OpensDirective", "javax.lang.model.element.ModuleElement", "OpensDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleElement$OpensDirective_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement$OpensDirective",
	nullptr,
	"javax.lang.model.element.ModuleElement$Directive",
	nullptr,
	_ModuleElement$OpensDirective_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleElement$OpensDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$OpensDirective($Class* clazz) {
	return $of($alloc(ModuleElement$OpensDirective));
}

$Class* ModuleElement$OpensDirective::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$OpensDirective, name, initialize, &_ModuleElement$OpensDirective_ClassInfo_, allocate$ModuleElement$OpensDirective);
	return class$;
}

$Class* ModuleElement$OpensDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax