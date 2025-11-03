#include <javax/lang/model/type/DeclaredType.h>

#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $ReferenceType = ::javax::lang::model::type::ReferenceType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _DeclaredType_MethodInfo_[] = {
	{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DeclaredType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.DeclaredType",
	nullptr,
	"javax.lang.model.type.ReferenceType",
	nullptr,
	_DeclaredType_MethodInfo_
};

$Object* allocate$DeclaredType($Class* clazz) {
	return $of($alloc(DeclaredType));
}

$Class* DeclaredType::load$($String* name, bool initialize) {
	$loadClass(DeclaredType, name, initialize, &_DeclaredType_ClassInfo_, allocate$DeclaredType);
	return class$;
}

$Class* DeclaredType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax