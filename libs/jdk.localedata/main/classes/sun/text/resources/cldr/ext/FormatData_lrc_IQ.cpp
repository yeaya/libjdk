#include <sun/text/resources/cldr/ext/FormatData_lrc_IQ.h>

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

$MethodInfo _FormatData_lrc_IQ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_lrc_IQ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_lrc_IQ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_lrc_IQ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_lrc_IQ",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lrc_IQ_MethodInfo_
};

$Object* allocate$FormatData_lrc_IQ($Class* clazz) {
	return $of($alloc(FormatData_lrc_IQ));
}

void FormatData_lrc_IQ::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_lrc_IQ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
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

FormatData_lrc_IQ::FormatData_lrc_IQ() {
}

$Class* FormatData_lrc_IQ::load$($String* name, bool initialize) {
	$loadClass(FormatData_lrc_IQ, name, initialize, &_FormatData_lrc_IQ_ClassInfo_, allocate$FormatData_lrc_IQ);
	return class$;
}

$Class* FormatData_lrc_IQ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun