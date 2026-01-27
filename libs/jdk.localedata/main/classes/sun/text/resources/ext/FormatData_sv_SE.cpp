#include <sun/text/resources/ext/FormatData_sv_SE.h>

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

$MethodInfo _FormatData_sv_SE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sv_SE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sv_SE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sv_SE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sv_SE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sv_SE_MethodInfo_
};

$Object* allocate$FormatData_sv_SE($Class* clazz) {
	return $of($alloc(FormatData_sv_SE));
}

void FormatData_sv_SE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sv_SE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.00 ¤;-#,##0.00 ¤"_s,
			"#,##0 %"_s
		}))
	})});
}

FormatData_sv_SE::FormatData_sv_SE() {
}

$Class* FormatData_sv_SE::load$($String* name, bool initialize) {
	$loadClass(FormatData_sv_SE, name, initialize, &_FormatData_sv_SE_ClassInfo_, allocate$FormatData_sv_SE);
	return class$;
}

$Class* FormatData_sv_SE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun