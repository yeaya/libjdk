#include <javax/lang/model/type/ArrayType.h>

#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _ArrayType_MethodInfo_[] = {
	{"getComponentType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ArrayType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.ArrayType",
	nullptr,
	"javax.lang.model.type.ReferenceType",
	nullptr,
	_ArrayType_MethodInfo_
};

$Object* allocate$ArrayType($Class* clazz) {
	return $of($alloc(ArrayType));
}

$Class* ArrayType::load$($String* name, bool initialize) {
	$loadClass(ArrayType, name, initialize, &_ArrayType_ClassInfo_, allocate$ArrayType);
	return class$;
}

$Class* ArrayType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax