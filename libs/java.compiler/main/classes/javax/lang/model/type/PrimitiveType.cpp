#include <javax/lang/model/type/PrimitiveType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$ClassInfo _PrimitiveType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.PrimitiveType",
	nullptr,
	"javax.lang.model.type.TypeMirror"
};

$Object* allocate$PrimitiveType($Class* clazz) {
	return $of($alloc(PrimitiveType));
}

$Class* PrimitiveType::load$($String* name, bool initialize) {
	$loadClass(PrimitiveType, name, initialize, &_PrimitiveType_ClassInfo_, allocate$PrimitiveType);
	return class$;
}

$Class* PrimitiveType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax