#include <javax/lang/model/element/Parameterizable.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _Parameterizable_MethodInfo_[] = {
	{"getTypeParameters", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/TypeParameterElement;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Parameterizable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.Parameterizable",
	nullptr,
	"javax.lang.model.element.Element",
	nullptr,
	_Parameterizable_MethodInfo_
};

$Object* allocate$Parameterizable($Class* clazz) {
	return $of($alloc(Parameterizable));
}

$Class* Parameterizable::load$($String* name, bool initialize) {
	$loadClass(Parameterizable, name, initialize, &_Parameterizable_ClassInfo_, allocate$Parameterizable);
	return class$;
}

$Class* Parameterizable::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax