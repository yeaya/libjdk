#include <sun/text/resources/ext/FormatData_pt_PT.h>

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

$MethodInfo _FormatData_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pt_PT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pt_PT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_pt_PT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_pt_PT",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pt_PT_MethodInfo_
};

$Object* allocate$FormatData_pt_PT($Class* clazz) {
	return $of($alloc(FormatData_pt_PT));
}

void FormatData_pt_PT::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_pt_PT::getContents() {
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

FormatData_pt_PT::FormatData_pt_PT() {
}

$Class* FormatData_pt_PT::load$($String* name, bool initialize) {
	$loadClass(FormatData_pt_PT, name, initialize, &_FormatData_pt_PT_ClassInfo_, allocate$FormatData_pt_PT);
	return class$;
}

$Class* FormatData_pt_PT::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun