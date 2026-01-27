#include <sun/text/resources/ext/FormatData_sr_ME.h>

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

$MethodInfo _FormatData_sr_ME_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_ME, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_ME, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_ME_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr_ME",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_ME_MethodInfo_
};

$Object* allocate$FormatData_sr_ME($Class* clazz) {
	return $of($alloc(FormatData_sr_ME));
}

void FormatData_sr_ME::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_ME::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_sr_ME::FormatData_sr_ME() {
}

$Class* FormatData_sr_ME::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_ME, name, initialize, &_FormatData_sr_ME_ClassInfo_, allocate$FormatData_sr_ME);
	return class$;
}

$Class* FormatData_sr_ME::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun