#include <sun/text/resources/ext/FormatData_fr_FR.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_fr_FR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_FR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_FR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_FR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fr_FR",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_FR_MethodInfo_
};

$Object* allocate$FormatData_fr_FR($Class* clazz) {
	return $of($alloc(FormatData_fr_FR));
}

void FormatData_fr_FR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_FR::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_fr_FR::FormatData_fr_FR() {
}

$Class* FormatData_fr_FR::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_FR, name, initialize, &_FormatData_fr_FR_ClassInfo_, allocate$FormatData_fr_FR);
	return class$;
}

$Class* FormatData_fr_FR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun