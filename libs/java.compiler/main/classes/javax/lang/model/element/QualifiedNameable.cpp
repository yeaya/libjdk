#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* QualifiedNameable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QualifiedNameable, getQualifiedName, $Name*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.QualifiedNameable",
		nullptr,
		"javax.lang.model.element.Element",
		nullptr,
		methodInfos$$
	};
	$loadClass(QualifiedNameable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(QualifiedNameable);
	});
	return class$;
}

$Class* QualifiedNameable::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax