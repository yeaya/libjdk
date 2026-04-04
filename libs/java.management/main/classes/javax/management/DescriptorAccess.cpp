#include <javax/management/DescriptorAccess.h>
#include <javax/management/Descriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Descriptor = ::javax::management::Descriptor;

namespace javax {
	namespace management {

$Class* DescriptorAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setDescriptor", "(Ljavax/management/Descriptor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DescriptorAccess, setDescriptor, void, $Descriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.DescriptorAccess",
		nullptr,
		"javax.management.DescriptorRead",
		nullptr,
		methodInfos$$
	};
	$loadClass(DescriptorAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DescriptorAccess);
	});
	return class$;
}

$Class* DescriptorAccess::class$ = nullptr;

	} // management
} // javax