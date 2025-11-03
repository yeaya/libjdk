#include <javax/lang/model/type/WildcardType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _WildcardType_MethodInfo_[] = {
	{"getExtendsBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSuperBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _WildcardType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.WildcardType",
	nullptr,
	"javax.lang.model.type.TypeMirror",
	nullptr,
	_WildcardType_MethodInfo_
};

$Object* allocate$WildcardType($Class* clazz) {
	return $of($alloc(WildcardType));
}

$Class* WildcardType::load$($String* name, bool initialize) {
	$loadClass(WildcardType, name, initialize, &_WildcardType_ClassInfo_, allocate$WildcardType);
	return class$;
}

$Class* WildcardType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax