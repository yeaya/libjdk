#include <sun/text/resources/ext/FormatData_mt_MT.h>

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

$MethodInfo _FormatData_mt_MT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_mt_MT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_mt_MT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_mt_MT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_mt_MT",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mt_MT_MethodInfo_
};

$Object* allocate$FormatData_mt_MT($Class* clazz) {
	return $of($alloc(FormatData_mt_MT));
}

void FormatData_mt_MT::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_mt_MT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###"_s,
			u"¤#,##0.00"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_mt_MT::FormatData_mt_MT() {
}

$Class* FormatData_mt_MT::load$($String* name, bool initialize) {
	$loadClass(FormatData_mt_MT, name, initialize, &_FormatData_mt_MT_ClassInfo_, allocate$FormatData_mt_MT);
	return class$;
}

$Class* FormatData_mt_MT::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun