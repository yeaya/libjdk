#include <java/awt/Composite.h>
#include <java/awt/CompositeContext.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ColorModel.h>
#include <jcpp.h>

using $CompositeContext = ::java::awt::CompositeContext;
using $RenderingHints = ::java::awt::RenderingHints;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Composite::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createContext", "(Ljava/awt/image/ColorModel;Ljava/awt/image/ColorModel;Ljava/awt/RenderingHints;)Ljava/awt/CompositeContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Composite, createContext, $CompositeContext*, $ColorModel*, $ColorModel*, $RenderingHints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.Composite",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Composite, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Composite);
	});
	return class$;
}

$Class* Composite::class$ = nullptr;

	} // awt
} // java