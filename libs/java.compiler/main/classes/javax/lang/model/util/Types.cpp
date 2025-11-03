#include <javax/lang/model/util/Types.h>

#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/NullType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/WildcardType.h>
#include <jcpp.h>

using $TypeMirrorArray = $Array<::javax::lang::model::type::TypeMirror>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ExecutableType = ::javax::lang::model::type::ExecutableType;
using $NoType = ::javax::lang::model::type::NoType;
using $NullType = ::javax::lang::model::type::NullType;
using $PrimitiveType = ::javax::lang::model::type::PrimitiveType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $WildcardType = ::javax::lang::model::type::WildcardType;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$MethodInfo _Types_MethodInfo_[] = {
	{"asElement", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"asMemberOf", "(Ljavax/lang/model/type/DeclaredType;Ljavax/lang/model/element/Element;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"boxedClass", "(Ljavax/lang/model/type/PrimitiveType;)Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"capture", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"directSupertypes", "(Ljavax/lang/model/type/TypeMirror;)Ljava/util/List;", "(Ljavax/lang/model/type/TypeMirror;)Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT},
	{"erasure", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getArrayType", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/ArrayType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeclaredType", "(Ljavax/lang/model/element/TypeElement;[Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getDeclaredType", "(Ljavax/lang/model/type/DeclaredType;Ljavax/lang/model/element/TypeElement;[Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getNoType", "(Ljavax/lang/model/type/TypeKind;)Ljavax/lang/model/type/NoType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNullType", "()Ljavax/lang/model/type/NullType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimitiveType", "(Ljavax/lang/model/type/TypeKind;)Ljavax/lang/model/type/PrimitiveType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWildcardType", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/WildcardType;", nullptr, $PUBLIC | $ABSTRACT},
	{"isAssignable", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSameType", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSubsignature", "(Ljavax/lang/model/type/ExecutableType;Ljavax/lang/model/type/ExecutableType;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isSubtype", "(Ljavax/lang/model/type/TypeMirror;Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unboxedType", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/type/PrimitiveType;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Types_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.util.Types",
	nullptr,
	nullptr,
	nullptr,
	_Types_MethodInfo_
};

$Object* allocate$Types($Class* clazz) {
	return $of($alloc(Types));
}

$Class* Types::load$($String* name, bool initialize) {
	$loadClass(Types, name, initialize, &_Types_ClassInfo_, allocate$Types);
	return class$;
}

$Class* Types::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax