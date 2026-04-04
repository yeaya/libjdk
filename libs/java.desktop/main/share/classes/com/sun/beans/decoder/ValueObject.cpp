#include <com/sun/beans/decoder/ValueObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$Class* ValueObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueObject, getValue, $Object*)},
		{"isVoid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueObject, isVoid, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.beans.decoder.ValueObject",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ValueObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValueObject);
	});
	return class$;
}

$Class* ValueObject::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com