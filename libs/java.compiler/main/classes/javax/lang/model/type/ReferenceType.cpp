#include <javax/lang/model/type/ReferenceType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$ClassInfo _ReferenceType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.ReferenceType",
	nullptr,
	"javax.lang.model.type.TypeMirror"
};

$Object* allocate$ReferenceType($Class* clazz) {
	return $of($alloc(ReferenceType));
}

$Class* ReferenceType::load$($String* name, bool initialize) {
	$loadClass(ReferenceType, name, initialize, &_ReferenceType_ClassInfo_, allocate$ReferenceType);
	return class$;
}

$Class* ReferenceType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax