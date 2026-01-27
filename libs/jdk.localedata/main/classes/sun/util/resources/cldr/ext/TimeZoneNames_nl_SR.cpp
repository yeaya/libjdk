#include <sun/util/resources/cldr/ext/TimeZoneNames_nl_SR.h>

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

$MethodInfo _TimeZoneNames_nl_SR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_nl_SR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_nl_SR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_nl_SR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_nl_SR",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_nl_SR_MethodInfo_
};

$Object* allocate$TimeZoneNames_nl_SR($Class* clazz) {
	return $of($alloc(TimeZoneNames_nl_SR));
}

void TimeZoneNames_nl_SR::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_nl_SR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Suriname, $new($StringArray, {
		"Surinaamse tijd"_s,
		"SRT"_s,
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
			$of("America/Paramaribo"_s),
			$of(Suriname)
		})
	}));
	return data;
}

TimeZoneNames_nl_SR::TimeZoneNames_nl_SR() {
}

$Class* TimeZoneNames_nl_SR::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_nl_SR, name, initialize, &_TimeZoneNames_nl_SR_ClassInfo_, allocate$TimeZoneNames_nl_SR);
	return class$;
}

$Class* TimeZoneNames_nl_SR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun