#include <javax/lang/model/type/UnionType.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _UnionType_MethodInfo_[] = {
	{"getAlternatives", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnionType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.UnionType",
	nullptr,
	"javax.lang.model.type.TypeMirror",
	nullptr,
	_UnionType_MethodInfo_
};

$Object* allocate$UnionType($Class* clazz) {
	return $of($alloc(UnionType));
}

$Class* UnionType::load$($String* name, bool initialize) {
	$loadClass(UnionType, name, initialize, &_UnionType_ClassInfo_, allocate$UnionType);
	return class$;
}

$Class* UnionType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax