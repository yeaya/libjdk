#include <javax/lang/model/element/PackageElement.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _PackageElement_MethodInfo_[] = {
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"isUnnamed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PackageElement, isUnnamed, bool)},
	{}
};

$ClassInfo _PackageElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.PackageElement",
	nullptr,
	"javax.lang.model.element.QualifiedNameable",
	nullptr,
	_PackageElement_MethodInfo_
};

$Object* allocate$PackageElement($Class* clazz) {
	return $of($alloc(PackageElement));
}

$Class* PackageElement::load$($String* name, bool initialize) {
	$loadClass(PackageElement, name, initialize, &_PackageElement_ClassInfo_, allocate$PackageElement);
	return class$;
}

$Class* PackageElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax