#include <sun/util/resources/cldr/ext/TimeZoneNames_zh_Hans_SG.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_zh_Hans_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_zh_Hans_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_zh_Hans_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_zh_Hans_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_zh_Hans_SG",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_zh_Hans_SG_MethodInfo_
};

$Object* allocate$TimeZoneNames_zh_Hans_SG($Class* clazz) {
	return $of($alloc(TimeZoneNames_zh_Hans_SG));
}

void TimeZoneNames_zh_Hans_SG::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_zh_Hans_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Malaysia, $new($StringArray, {
		u"马来西亚时间"_s,
		"MYT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"新加坡标准时间"_s,
		"SGT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"斯考斯伯松德"_s)
		})
	}));
	return data;
}

TimeZoneNames_zh_Hans_SG::TimeZoneNames_zh_Hans_SG() {
}

$Class* TimeZoneNames_zh_Hans_SG::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_zh_Hans_SG, name, initialize, &_TimeZoneNames_zh_Hans_SG_ClassInfo_, allocate$TimeZoneNames_zh_Hans_SG);
	return class$;
}

$Class* TimeZoneNames_zh_Hans_SG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun