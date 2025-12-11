#include <javax/lang/model/type/ErrorType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$ClassInfo _ErrorType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.ErrorType",
	nullptr,
	"javax.lang.model.type.DeclaredType"
};

$Object* allocate$ErrorType($Class* clazz) {
	return $of($alloc(ErrorType));
}

$Class* ErrorType::load$($String* name, bool initialize) {
	$loadClass(ErrorType, name, initialize, &_ErrorType_ClassInfo_, allocate$ErrorType);
	return class$;
}

$Class* ErrorType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax