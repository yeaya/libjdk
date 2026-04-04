#include <javax/imageio/IIOParamController.h>
#include <javax/imageio/IIOParam.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOParam = ::javax::imageio::IIOParam;

namespace javax {
	namespace imageio {

$Class* IIOParamController::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"activate", "(Ljavax/imageio/IIOParam;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOParamController, activate, bool, $IIOParam*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.imageio.IIOParamController",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IIOParamController, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIOParamController);
	});
	return class$;
}

$Class* IIOParamController::class$ = nullptr;

	} // imageio
} // javax