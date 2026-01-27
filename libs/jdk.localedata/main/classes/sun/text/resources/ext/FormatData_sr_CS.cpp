#include <sun/text/resources/ext/FormatData_sr_CS.h>

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

$MethodInfo _FormatData_sr_CS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_CS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_CS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_CS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr_CS",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_CS_MethodInfo_
};

$Object* allocate$FormatData_sr_CS($Class* clazz) {
	return $of($alloc(FormatData_sr_CS));
}

void FormatData_sr_CS::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_CS::getContents() {
	return $new($ObjectArray2, 0);
}

FormatData_sr_CS::FormatData_sr_CS() {
}

$Class* FormatData_sr_CS::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_CS, name, initialize, &_FormatData_sr_CS_ClassInfo_, allocate$FormatData_sr_CS);
	return class$;
}

$Class* FormatData_sr_CS::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun