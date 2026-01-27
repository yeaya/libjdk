#include <sun/text/resources/cldr/ext/FormatData_ckb_IR.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_ckb_IR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ckb_IR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ckb_IR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ckb_IR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ckb_IR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ckb_IR_MethodInfo_
};

$Object* allocate$FormatData_ckb_IR($Class* clazz) {
	return $of($alloc(FormatData_ckb_IR));
}

void FormatData_ckb_IR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ckb_IR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		})
	}));
	return data;
}

FormatData_ckb_IR::FormatData_ckb_IR() {
}

$Class* FormatData_ckb_IR::load$($String* name, bool initialize) {
	$loadClass(FormatData_ckb_IR, name, initialize, &_FormatData_ckb_IR_ClassInfo_, allocate$FormatData_ckb_IR);
	return class$;
}

$Class* FormatData_ckb_IR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun