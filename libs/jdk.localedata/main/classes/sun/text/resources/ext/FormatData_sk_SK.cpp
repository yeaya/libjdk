#include <sun/text/resources/ext/FormatData_sk_SK.h>

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

$MethodInfo _FormatData_sk_SK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sk_SK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sk_SK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sk_SK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sk_SK",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sk_SK_MethodInfo_
};

$Object* allocate$FormatData_sk_SK($Class* clazz) {
	return $of($alloc(FormatData_sk_SK));
}

void FormatData_sk_SK::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sk_SK::getContents() {
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

FormatData_sk_SK::FormatData_sk_SK() {
}

$Class* FormatData_sk_SK::load$($String* name, bool initialize) {
	$loadClass(FormatData_sk_SK, name, initialize, &_FormatData_sk_SK_ClassInfo_, allocate$FormatData_sk_SK);
	return class$;
}

$Class* FormatData_sk_SK::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun