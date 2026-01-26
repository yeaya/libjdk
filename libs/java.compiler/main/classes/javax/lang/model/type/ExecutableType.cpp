#include <javax/lang/model/type/ExecutableType.h>

#include <java/util/List.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _ExecutableType_MethodInfo_[] = {
	{"getParameterTypes", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableType, getParameterTypes, $List*)},
	{"getReceiverType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableType, getReceiverType, $TypeMirror*)},
	{"getReturnType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableType, getReturnType, $TypeMirror*)},
	{"getThrownTypes", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableType, getThrownTypes, $List*)},
	{"getTypeVariables", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeVariable;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExecutableType, getTypeVariables, $List*)},
	{}
};

$ClassInfo _ExecutableType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.ExecutableType",
	nullptr,
	"javax.lang.model.type.TypeMirror",
	nullptr,
	_ExecutableType_MethodInfo_
};

$Object* allocate$ExecutableType($Class* clazz) {
	return $of($alloc(ExecutableType));
}

$Class* ExecutableType::load$($String* name, bool initialize) {
	$loadClass(ExecutableType, name, initialize, &_ExecutableType_ClassInfo_, allocate$ExecutableType);
	return class$;
}

$Class* ExecutableType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax