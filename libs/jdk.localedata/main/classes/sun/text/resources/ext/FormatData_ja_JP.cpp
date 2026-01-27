#include <sun/text/resources/ext/FormatData_ja_JP.h>

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

$MethodInfo _FormatData_ja_JP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ja_JP, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ja_JP, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ja_JP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ja_JP",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ja_JP_MethodInfo_
};

$Object* allocate$FormatData_ja_JP($Class* clazz) {
	return $of($alloc(FormatData_ja_JP));
}

void FormatData_ja_JP::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ja_JP::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤#,##0;-¤#,##0"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_ja_JP::FormatData_ja_JP() {
}

$Class* FormatData_ja_JP::load$($String* name, bool initialize) {
	$loadClass(FormatData_ja_JP, name, initialize, &_FormatData_ja_JP_ClassInfo_, allocate$FormatData_ja_JP);
	return class$;
}

$Class* FormatData_ja_JP::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun