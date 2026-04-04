#include <javax/management/DescriptorRead.h>
#include <javax/management/Descriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Descriptor = ::javax::management::Descriptor;

namespace javax {
	namespace management {

$Class* DescriptorRead::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DescriptorRead, getDescriptor, $Descriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.DescriptorRead",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DescriptorRead, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DescriptorRead);
	});
	return class$;
}

$Class* DescriptorRead::class$ = nullptr;

	} // management
} // javax