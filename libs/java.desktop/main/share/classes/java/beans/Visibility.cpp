#include <java/beans/Visibility.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _Visibility_MethodInfo_[] = {
	{"avoidingGui", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, avoidingGui, bool)},
	{"dontUseGui", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, dontUseGui, void)},
	{"needsGui", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, needsGui, bool)},
	{"okToUseGui", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visibility, okToUseGui, void)},
	{}
};

$ClassInfo _Visibility_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.beans.Visibility",
	nullptr,
	nullptr,
	nullptr,
	_Visibility_MethodInfo_
};

$Object* allocate$Visibility($Class* clazz) {
	return $of($alloc(Visibility));
}

$Class* Visibility::load$($String* name, bool initialize) {
	$loadClass(Visibility, name, initialize, &_Visibility_ClassInfo_, allocate$Visibility);
	return class$;
}

$Class* Visibility::class$ = nullptr;

	} // beans
} // java