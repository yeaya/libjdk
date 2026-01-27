#include <sun/text/resources/ext/FormatData_th_TH.h>

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

$MethodInfo _FormatData_th_TH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_th_TH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_th_TH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_th_TH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_th_TH",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_th_TH_MethodInfo_
};

$Object* allocate$FormatData_th_TH($Class* clazz) {
	return $of($alloc(FormatData_th_TH));
}

void FormatData_th_TH::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_th_TH::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤#,##0.00;¤-#,##0.00"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_th_TH::FormatData_th_TH() {
}

$Class* FormatData_th_TH::load$($String* name, bool initialize) {
	$loadClass(FormatData_th_TH, name, initialize, &_FormatData_th_TH_ClassInfo_, allocate$FormatData_th_TH);
	return class$;
}

$Class* FormatData_th_TH::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun