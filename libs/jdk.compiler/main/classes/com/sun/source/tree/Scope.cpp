#include <com/sun/source/tree/Scope.h>
#include <java/lang/Iterable.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$Class* Scope::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getEnclosingClass", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope, getEnclosingClass, $TypeElement*)},
		{"getEnclosingMethod", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope, getEnclosingMethod, $ExecutableElement*)},
		{"getEnclosingScope", "()Lcom/sun/source/tree/Scope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope, getEnclosingScope, Scope*)},
		{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Scope, getLocalElements, $Iterable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.tree.Scope",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Scope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope);
	});
	return class$;
}

$Class* Scope::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com