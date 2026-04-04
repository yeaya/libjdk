#include <sun/print/AttributeUpdater.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;

namespace sun {
	namespace print {

$Class* AttributeUpdater::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getUpdatedAttributes", "()Ljavax/print/attribute/PrintServiceAttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeUpdater, getUpdatedAttributes, $PrintServiceAttributeSet*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.print.AttributeUpdater",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AttributeUpdater, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeUpdater);
	});
	return class$;
}

$Class* AttributeUpdater::class$ = nullptr;

	} // print
} // sun