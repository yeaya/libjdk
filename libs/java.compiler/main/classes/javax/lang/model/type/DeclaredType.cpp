#include <javax/lang/model/type/DeclaredType.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Element = ::javax::lang::model::element::Element;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* DeclaredType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclaredType, asElement, $Element*)},
		{"getEnclosingType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeclaredType, getEnclosingType, $TypeMirror*)},
		{"getTypeArguments", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DeclaredType, getTypeArguments, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.DeclaredType",
		nullptr,
		"javax.lang.model.type.ReferenceType",
		nullptr,
		methodInfos$$
	};
	$loadClass(DeclaredType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeclaredType);
	});
	return class$;
}

$Class* DeclaredType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax