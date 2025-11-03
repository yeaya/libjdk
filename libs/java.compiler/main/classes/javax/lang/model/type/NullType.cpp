#include <javax/lang/model/type/NullType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ReferenceType = ::javax::lang::model::type::ReferenceType;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$ClassInfo _NullType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.NullType",
	nullptr,
	"javax.lang.model.type.ReferenceType"
};

$Object* allocate$NullType($Class* clazz) {
	return $of($alloc(NullType));
}

$Class* NullType::load$($String* name, bool initialize) {
	$loadClass(NullType, name, initialize, &_NullType_ClassInfo_, allocate$NullType);
	return class$;
}

$Class* NullType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax