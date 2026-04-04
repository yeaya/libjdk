#include <javax/swing/Renderer.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$Class* Renderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Renderer, getComponent, $Component*)},
		{"setValue", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Renderer, setValue, void, Object$*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.Renderer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Renderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Renderer);
	});
	return class$;
}

$Class* Renderer::class$ = nullptr;

	} // swing
} // javax