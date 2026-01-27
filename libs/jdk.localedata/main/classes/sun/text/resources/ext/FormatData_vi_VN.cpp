#include <sun/text/resources/ext/FormatData_vi_VN.h>

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

$MethodInfo _FormatData_vi_VN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_vi_VN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_vi_VN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_vi_VN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_vi_VN",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_vi_VN_MethodInfo_
};

$Object* allocate$FormatData_vi_VN($Class* clazz) {
	return $of($alloc(FormatData_vi_VN));
}

void FormatData_vi_VN::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_vi_VN::getContents() {
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

FormatData_vi_VN::FormatData_vi_VN() {
}

$Class* FormatData_vi_VN::load$($String* name, bool initialize) {
	$loadClass(FormatData_vi_VN, name, initialize, &_FormatData_vi_VN_ClassInfo_, allocate$FormatData_vi_VN);
	return class$;
}

$Class* FormatData_vi_VN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun