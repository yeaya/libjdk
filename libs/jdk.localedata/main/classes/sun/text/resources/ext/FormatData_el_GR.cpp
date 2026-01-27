#include <sun/text/resources/ext/FormatData_el_GR.h>

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

$MethodInfo _FormatData_el_GR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_el_GR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_el_GR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_el_GR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_el_GR",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_el_GR_MethodInfo_
};

$Object* allocate$FormatData_el_GR($Class* clazz) {
	return $of($alloc(FormatData_el_GR));
}

void FormatData_el_GR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_el_GR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.00 ¤;-#,##0.00 ¤"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_el_GR::FormatData_el_GR() {
}

$Class* FormatData_el_GR::load$($String* name, bool initialize) {
	$loadClass(FormatData_el_GR, name, initialize, &_FormatData_el_GR_ClassInfo_, allocate$FormatData_el_GR);
	return class$;
}

$Class* FormatData_el_GR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun