#include <com/sun/source/util/ParameterNameProvider.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VariableElement = ::javax::lang::model::element::VariableElement;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$Class* ParameterNameProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParameterName", "(Ljavax/lang/model/element/VariableElement;)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterNameProvider, getParameterName, $CharSequence*, $VariableElement*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.util.ParameterNameProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ParameterNameProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterNameProvider);
	});
	return class$;
}

$Class* ParameterNameProvider::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com