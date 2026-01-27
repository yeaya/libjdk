#include <sun/util/resources/cldr/ext/TimeZoneNames_kn.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ETC_UTC
#undef GMT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_kn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_kn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_kn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_kn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_kn",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_kn_MethodInfo_
};

$Object* allocate$TimeZoneNames_kn($Class* clazz) {
	return $of($alloc(TimeZoneNames_kn));
}

void TimeZoneNames_kn::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_kn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"ಗ್ರೀನ್\u200cವಿಚ್ ಸರಾಸರಿ ಕಾಲಮಾನ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"ಏಕರ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಏಕರ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಏಕರ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"ಅಪಿಯಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅಪಿಯಾ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಅಪಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"ಕುಕ್ ದ್ವೀಪಗಳ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಕುಕ್ ದ್ವೀಪಗಳ ಮಧ್ಯಕಾಲೀನ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಕುಕ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"ಕ್ಯೂಬಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಕ್ಯೂಬಾ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ಕ್ಯೂಬಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"ಫಿಜಿ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಫಿಜಿ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಫಿಜಿ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"ಗಲ್ಫ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"ಹವ್ಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಹವ್ಡ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಹವ್ಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"ಇರಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಇರಾನ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಇರಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"ನಿಯು ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"ಒಮಾಸ್ಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಒಮಾಸ್ಕ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಒಮಾಸ್ಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"ಪೆರು ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪೆರು ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪೆರು ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"ಚುಕ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"ವೇಕ್ ದ್ವೀಪ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"ಚಿಲಿ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಚಿಲಿ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಚಿಲಿ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"ಚೀನಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಚೀನಾ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಚೀನಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"ಕೋಕೋಸ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"ಡೇವಿಸ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"ಭಾರತೀಯ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"ಜಪಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಜಪಾನ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಜಪಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"ಕೊರಿಯನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಕೊರಿಯನ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಕೊರಿಯನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"ನೌರು ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"ನೇಪಾಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"ಪಾಲಾವ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"ಸಮೋವಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಸಮೋವಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಸಮೋವಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"ಸ್ಯೊವಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"ಟೊಂಗಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಟೊಂಗಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಟೊಂಗಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"ಅಲಸ್ಕಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"\u200cಅಲಾಸ್ಕಾ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಅಲಾಸ್ಕಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"ಅಮೆಜಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅಮೆಜಾನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಅಮೆಜಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"ಅನಡೀರ್\u200c ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅನಡೀರ್\u200c ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಅನಡೀರ್\u200c ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"ಅಜೋರಸ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅಜೋರಸ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಅಜೋರಸ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"ಭೂತಾನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"ಬ್ರೂನಿ ದಾರುಸಲೆಮ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"ಈಸ್ಟರ್ ದ್ವೀಪ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಈಸ್ಟರ್ ದ್ವೀಪ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಈಸ್ಟರ್ ದ್ವೀಪ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"ಗಯಾನಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"ಇಸ್ರೇಲ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಇಸ್ರೇಲ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಇಸ್ರೇಲ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"ಕೊಸರೆ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"ಮಾವ್\u200cಸನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"ಮಾಸ್ಕೋ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಮಾಸ್ಕೋ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಮಾಸ್ಕೋ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"ಪೊನಾಪೆ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"ಸಮರ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಸಮರ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಸಮರ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"ತಾಹಿತಿ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"ತೈಪೆ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ತೈಪೆ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ತೈಪೆ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"ತುವಾಲು ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"ವೋಸ್ಟೊಕ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"ವ್ಯಾಲೀಸ್ ಮತ್ತು ಫ್ಯುಟುನಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"ಅರೇಬಿಯನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅರೇಬಿಯನ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಅರೇಬಿಯನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"ಅರ್ಮೇನಿಯ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅರ್ಮೇನಿಯ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಅರ್ಮೇನಿಯ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"ಬೊಲಿವಿಯಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"ಚಥಾಮ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಚಥಾಮ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಚಥಾಮ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"ಸಂಘಟಿತ ಸಾರ್ವತ್ರಿಕ ಸಮಯ"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"ಈಕ್ವೆಡಾರ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"ಗ್ಯಾಂಬಿಯರ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"ಜಾರ್ಜಿಯಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಜಾರ್ಜಿಯಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಜಾರ್ಜಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"ಇರ್\u200cಕುಟಸ್ಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಇರ್\u200cಕುಟಸ್ಕ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಇರ್\u200cಕುಟಸ್ಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"ಮಗಡಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಮಗಡಾನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಮಗಡಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"ಮ್ಯಾನ್ಮಾರ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"ನಾರ್ಫೋಕ್ ದ್ವೀಪ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ನಾರ್ಫೋಕ್ ದ್ವೀಪ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ನಾರ್ಫೋಕ್ ದ್ವೀಪ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"ಫೆರ್ನಾಂಡೋ ಡೆ ನೊರೊನ್ಹಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಫರ್ನಾಂಡೋ ದೆ ನೊರೊನ್ಹಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಫೆರ್ನಾಂಡೋ ಡೆ ನೊರೊನ್ಹಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"ರಿಯೂನಿಯನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"ರೊತೇರಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"ಸಾಲಮನ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"ಟೊಕೆಲಾವ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"ಉರುಗ್ವೇ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉರುಗ್ವೇ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಉರುಗ್ವೇ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"ವನೌತು ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ವನೌತು ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ವನೌತು ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"ಯಾಕುಟ್ಸಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಯಾಕುಟ್ಸಕ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಯಾಕುಟ್ಸಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"ಅಟ್ಲಾಂಟಿಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅಟ್ಲಾಂಟಿಕ್ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ಅಟ್ಲಾಂಟಿಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"ಬ್ರೆಸಿಲಿಯಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಬ್ರೆಸಿಲಿಯಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಬ್ರೆಸಿಲಿಯಾದ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"ಚಮೋರೋ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"ಕೊಲಂಬಿಯಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಕೊಲಂಬಿಯಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಕೊಲಂಬಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"ಫಾಕ್\u200cಲ್ಯಾಂಡ್ ದ್ವೀಪಗಳ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಫಾಕ್\u200cಲ್ಯಾಂಡ್ ದ್ವೀಪಗಳ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಫಾಕ್\u200cಲ್ಯಾಂಡ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"ಮಲೇಷಿಯಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"ಮಾಲ್ಡೀವ್ಸ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"ಉಲಾನ್ ಬತೊರ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉಲಾನ್ ಬತೊರ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಉಲಾನ್ ಬತೊರ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"ಪಾಕಿಸ್ತಾನ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪಾಕಿಸ್ತಾನ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪಾಕಿಸ್ತಾನ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"ಪರಾಗ್ವೇ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪರಾಗ್ವೇ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪರಾಗ್ವೇ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"ಪಿಟ್\u200cಕೈರ್ನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"ಸ್ಯಾಕ್\u200cಹಲಿನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಸ್ಯಾಕ್\u200cಹಲಿನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಸ್ಯಾಕ್\u200cಹಲಿನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"ಸುರಿನೇಮ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"ಅರ್ಜೆಂಟೀನಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅರ್ಜೆಂಟಿನಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಅರ್ಜೆಂಟಿನಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"ಕ್ರಿಸ್ಮಸ್ ದ್ವೀಪ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"ಗಾಲಾಪಾಗೋಸ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"ಹಾಂಗ್ ಕಾಂಗ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಹಾಂಗ್ ಕಾಂಗ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಹಾಂಗ್ ಕಾಂಗ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"ಇಂಡೊಚೈನಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"ಪೆತ್ರೋಪಾವ್ಲೋಸ್ಕ್\u200c\u200c-ಕಮ್ಚತ್ಸ್\u200cಕೀ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪೆತ್ರೋಪಾವ್ಲೋಸ್ಕ್\u200c\u200c-ಕಮ್ಚತ್ಸ್\u200cಕೀ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪೆತ್ರೋಪಾವ್ಲೋಸ್ಕ್\u200c\u200c-ಕಮ್ಚತ್ಸ್\u200cಕೀ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"ಕಿರ್ಗಿಸ್ತಾನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"ಲಾರ್ಡ್ ಹೋವ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಲಾರ್ಡ್ ಹೋವ್ ಬೆಳಗಿನ ಸಮಯ"_s,
		""_s,
		u"ಲಾರ್ಡ್ ಹೋವ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"ಮಾರ್ಕ್ಯುಸಸ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"ಮಾರಿಷಸ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಮಾರಿಷಸ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಮಾರಿಷಸ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"ಸಿಂಗಪುರ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"ವೆನಿಜುವೆಲಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"ವೋಲ್ಗೋಗಾರ್ಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ವೋಲ್ಗೋಗಾರ್ಡ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ವೋಲ್ಗೋಗಾರ್ಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"ಅಜರ್ಬೈಜಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಅಜರ್ಬೈಜಾನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಅಜರ್ಬೈಜಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"ಬಾಂಗ್ಲಾದೇಶ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಬಾಂಗ್ಲಾದೇಶ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಬಾಂಗ್ಲಾದೇಶ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"ಕೇಪ್ ವರ್ಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಕೇಪ್ ವರ್ಡ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಕೇಪ್ ವರ್ಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"ಪೂರ್ವ ಟಿಮೋರ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"ಸೀಷೆಲ್ಸ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"ತಝಕಿಸ್ತಾನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"ಉಜ್ಬೇಕಿಸ್ತಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉಜ್ಬೇಕಿಸ್ತಾನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಉಜ್ಬೇಕಿಸ್ತಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"ಅಫಘಾನಿಸ್ತಾನ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"ಕ್ರಾಸ್\u200cನೊಯಾರ್ಸ್ಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಕ್ರಾಸ್\u200cನೊಯಾರ್ಸ್ಕ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಕ್ರಾಸ್\u200cನೊಯಾರ್ಸ್ಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"ನ್ಯೂಜಿಲ್ಯಾಂಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ನ್ಯೂಜಿಲ್ಯಾಂಡ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ನ್ಯೂಜಿಲ್ಯಾಂಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"ನೊವೊಸಿಬಿರ್\u200cಸ್ಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ನೊವೊಸಿಬಿರ್\u200cಸ್ಕ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ನೊವೊಸಿಬಿರ್\u200cಸ್ಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"ಫಿಲಿಫೈನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಫಿಲಿಫೈನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಫಿಲಿಫೈನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"ವ್ಲಾಡಿವೋಸ್ಟೋಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ವ್ಲಾಡಿವೋಸ್ಟೋಕ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ವ್ಲಾಡಿವೋಸ್ಟೋಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"ಹಿಂದೂ ಮಹಾಸಾಗರ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"ಲೈನ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"ನ್ಯೂಫೌಂಡ್\u200cಲ್ಯಾಂಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ನ್ಯೂಫೌಂಡ್\u200cಲ್ಯಾಂಡ್ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ನ್ಯೂಫೌಂಡ್\u200cಲ್ಯಾಂಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"ತುರ್ಕ್\u200cಮೇನಿಸ್ತಾನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ತುರ್ಕ್\u200cಮೇನಿಸ್ತಾನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ತುರ್ಕ್\u200cಮೇನಿಸ್ತಾನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"ಫ್ರೆಂಚ್ ಗಯಾನಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"ಹೊಸ ಕ್ಯಾಲೆಡೋನಿಯಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಹೊಸ ಕ್ಯಾಲೆಡೋನಿಯಾ ಬೇಸಿಗೆಯ ಸಮಯ"_s,
		""_s,
		u"ಹೊಸ ಕ್ಯಾಲೆಡೋನಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"ದಕ್ಷಿಣ ಜಾರ್ಜಿಯಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"ಯೇಕಟರಿನ್\u200cಬರ್ಗ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಯೇಕೇಟರಿನ್\u200dಬರ್ಗ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಯೇಕಟರಿನ್\u200cಬರ್ಗ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"ಮಧ್ಯ ಆಫ್ರಿಕಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"ಪೂರ್ವ ಆಫ್ರಿಕಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"ಪಶ್ಚಿಮ ಆಫ್ರಿಕಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಆಫ್ರಿಕಾ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಆಫ್ರಿಕಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"ಡುಮಂಟ್-ಡಿ ಉರ್ವಿಲೆ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"ಮಧ್ಯ ಯುರೋಪಿಯನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಮಧ್ಯ ಯುರೋಪಿಯನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಮಧ್ಯ ಯುರೋಪಿಯನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"ಪೂರ್ವ ಯುರೋಪಿಯನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪೂರ್ವ ಯುರೋಪಿಯನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪೂರ್ವ ಯುರೋಪಿಯನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"ಪಶ್ಚಿಮ ಯುರೋಪಿಯನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಯುರೋಪಿಯನ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಯುರೋಪಿಯನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"ಮೆಕ್ಸಿಕನ್ ಪೆಸಿಫಿಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಮೆಕ್ಸಿಕನ್ ಪೆಸಿಫಿಕ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಮೆಕ್ಸಿಕನ್ ಪೆಸಿಫಿಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"ದಕ್ಷಿಣ ಆಫ್ರಿಕಾ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಕೇಂದ್ರ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಕೇಂದ್ರೀಯ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಕೇಂದ್ರ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪೂರ್ವದ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪೂರ್ವದ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪೂರ್ವದ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪೆಸಿಫಿಕ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪೆಸಿಫಿಕ್ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪೆಸಿಫಿಕ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"ದಕ್ಷಿಣ ಫ್ರೆಂಚ್ ಮತ್ತು ಅಂಟಾರ್ಟಿಕಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"ಗಿಲ್ಬರ್ಟ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"ಹವಾಯಿ-ಅಲ್ಯುಟಿಯನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಹವಾಯಿ-ಅಲ್ಯುಟಿಯನ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಹವಾಯಿ-ಅಲ್ಯುಟಿಯನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"ಫಿನಿಕ್ಸ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"ಸೇಂಟ್ ಪಿಯರ್ ಮತ್ತು ಮಿಕ್ವೆಲನ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಸೇಂಟ್ ಪಿಯರ್ ಮತ್ತು ಮಿಕ್ವೆಲನ್ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಸೇಂಟ್ ಪಿಯರ್ ಮತ್ತು ಮಿಕ್ವೆಲನ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪರ್ವತ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪರ್ವತ ದಿನದ ಸಮಯ"_s,
		""_s,
		u"ಉತ್ತರ ಅಮೆರಿಕದ ಪರ್ವತ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"ಮಾರ್ಷಲ್ ದ್ವೀಪಗಳ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"ವಾಯವ್ಯ ಮೆಕ್ಸಿಕೊ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ವಾಯವ್ಯ ಮೆಕ್ಸಿಕೊ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ವಾಯವ್ಯ ಮೆಕ್ಸಿಕೊ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"ಪಪುವಾ ನ್ಯೂ ಗಿನಿಯಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಕೇಂದ್ರ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಕೇಂದ್ರ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಕೇಂದ್ರ ಆಸ್ಟ್ರೇಲಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಪೂರ್ವ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪೂರ್ವ ಆಸ್ಟ್ರೇಲಿಯಾದ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಪೂರ್ವ ಆಸ್ಟ್ರೇಲಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಪಶ್ಚಿಮ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಪಶ್ಚಿಮ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಆಸ್ಟ್ರೇಲಿಯಾ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"ಪೂರ್ವ ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪೂರ್ವ ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪೂರ್ವ ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"ಪಶ್ಚಿಮ ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
		""_s,
		u"ಪಶ್ಚಿಮ ಗ್ರೀನ್\u200cಲ್ಯಾಂಡ್ ಸಮಯ"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"ಮಧ್ಯ ಇಂಡೋನೇಷಿಯಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"ಪೂರ್ವ ಇಂಡೋನೇಷಿಯಾ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"ಪಶ್ಚಿಮ ಇಂಡೋನೇಷಿಯ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"ಪೂರ್ವ ಕಜಕಿಸ್ತಾನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"ಪಶ್ಚಿಮ ಕಜಕಿಸ್ತಾನ್ ಸಮಯ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಕೇಂದ್ರ ಪಶ್ಚಿಮ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
		""_s,
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಕೇಂದ್ರ ಪಶ್ಚಿಮ ಹಗಲು ಸಮಯ"_s,
		""_s,
		u"ಆಸ್ಟ್ರೇಲಿಯಾದ ಕೇಂದ್ರ ಪಶ್ಚಿಮ ಸಮಯ"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(Israel)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(Newfoundland)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(Japan)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Etc/GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(ETC_UTC)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of(Azerbaijan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of(East_Timor)
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of(Hovd)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(Bangladesh)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of(Afghanistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of(Anadyr)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Atyrau"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of(Brunei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of(Philippines)
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(Gulf)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(Taipei)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(Iran)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of(Seychelles)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of(Peru)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(Arabian)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of(Kyrgystan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(Irkutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(Pakistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(Myanmar)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of(Georgia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(Bhutan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(Armenia)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of(Cocos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(Apia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of(Fiji)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of(Niue)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(Truk)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of(Wake)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Banjul"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bissau"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(Turkmenistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of(Tajikistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of(Indonesia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(Nepal)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(Yakutsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(Indonesia_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qostanay"_s),
			$of(Kazakhstan_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of($$new($StringArray, {
				u"ಗ್ರೀನ್\u200cವಿಚ್ ಸರಾಸರಿ ಕಾಲಮಾನ"_s,
				""_s,
				u"ಐರಿಷ್ ಪ್ರಮಾಣಿತ ಸಮಯ"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of($$new($StringArray, {
				u"ಗ್ರೀನ್\u200cವಿಚ್ ಸರಾಸರಿ ಕಾಲಮಾನ"_s,
				""_s,
				u"ಬ್ರಿಟಿಷ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Samara"_s),
			$of(Samara)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of(Indian_Ocean)
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of(Vanuatu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of(Nauru)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of(Palau)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tripoli"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of(Colombia)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of(Guyana)
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(Cuba)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of(Bolivia)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(China)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(Hong_Kong)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of(Kamchatka)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of(Kazakhstan_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(Uzbekistan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(Singapore)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of($$new($StringArray, {
				u"ಗ್ರೀನ್\u200cವಿಚ್ ಸರಾಸರಿ ಕಾಲಮಾನ"_s,
				""_s,
				u"ಬ್ರಿಟಿಷ್ ಬೇಸಿಗೆ ಸಮಯ"_s,
				""_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of(Reunion)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(Easter)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of(Kosrae)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of(New_Caledonia)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(Ponape)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(Chamorro)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of(Tahiti)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of(Gilbert_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of(Wallis)
		}),
		$$new($ObjectArray, {
			$of("Africa/Blantyre"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Sao_Tome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Timbuktu"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of(Venezuela)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of(French_Guiana)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(Greenland_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(Noronha)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(Indochina)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of(Azores)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of(Australia_CentralWestern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(Australia_Western)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of(Maldives)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(Chatham)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of(Tokelau)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(Gambier)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of(Norfolk)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of(Paraguay)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Eirunepe"_s),
			$of(Acre)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of(Pierre_Miquelon)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(Chile)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of(Davis)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of(Syowa)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(Novosibirsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(Mongolia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of(Vladivostok)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(Europe_Western)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of(Falkland)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(Volgograd)
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of(Christmas)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of(French_Southern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of(Tuvalu)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(Pitcairn)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(Africa_Central)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(Brasilia)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(America_Pacific)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of(Mawson)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of(Vostok)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(Malaysia)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(Krasnoyarsk)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(Moscow)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of(Phoenix_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(Marshall_Islands)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of(Marquesas)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(Samoa)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of(Cook)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of(Tonga)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(Africa_Western)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(Mexico_Pacific)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(Alaska)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of(Uruguay)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of(Suriname)
		}),
		$$new($ObjectArray, {
			$of("America/Rio_Branco"_s),
			$of(Acre)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of(Rothera)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of(Yekaterinburg)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of(Line_Islands)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(Africa_Southern)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(Europe_Central)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of(Cape_Verde)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(Lord_Howe)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(Solomon)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(Africa_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(Amazon)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(Mexico_Northwest)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of(Papua_New_Guinea)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(America_Mountain)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(Atlantic)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(Australia_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of(South_Georgia)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of(DumontDUrville)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aden"_s),
			$of(u"ಏಡನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"ಬಕು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of(u"ದಿಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"ಗಾಜಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of(u"ಹೋವ್ಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"ಒಮ್ಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of(u"ಒರಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Amman"_s),
			$of(u"ಅಮ್ಮಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of(u"ಅಕ್ತಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"ಚಿಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"ಢಾಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"ದುಬೈ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"ಕಾಬೂಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of(u"ಮಕಾವು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"ಖತಾರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"ಸಿಯೋಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of(u"ಟೋಕಿಯೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of(u"ಟೋಮ್\u200cಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(America_Eastern)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Juba"_s),
			$of(u"ಜುಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"ಲೋಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"ಅಲ್ಮಾಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"ಅನದ್ಯರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of(u"ಅಕ್ಟೋಬೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"ಅಟ್ರಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of(u"ಬೀರಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of(u"ಬ್ರೂನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"ಹೆಬ್ರಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"ಕುವೈತ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of(u"ಮನಿಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"ಮಸ್ಕಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"ರಿಯಾದ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"ಹೊ ಚಿ ಮಿನ್ ಸಿಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of(u"ತೈಪೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"ತೆಹ್ರಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"ಉರುಮ್\u200dಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"ಅಪರಿಚಿತ ನಗರ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of(u"ಕಿವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of(u"ಓಸ್ಲೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of(u"ರಿಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of(u"ರೋಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"ಮಾಹೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"ಅಕ್ರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"ಕೈರೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of(u"ಸೆಯುಟಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"ಡಾಕರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"ಲಾಗೋಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"ಟುನೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"ಅಡಕ್\u200c\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of(u"ಲಿಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of(u"ನೋಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"ಬಾಗ್ದಾದ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"ಬಹ್ರೇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of(u"ಬ್ಯಾಂಕಾಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"ಬಾರ್ನೌಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"ಬಿಶ್ಕೆಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"ಕೊಲಂಬೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"ಇರಕುಟ್ಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of(u"ಜಕಾರ್ತಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"ಕರಾಚಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"ಕುಚಿಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"ಮಗದನ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"ನಿಕೋಸಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of(u"ಯಾಂಗೊನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"ಟಿಬಿಲಿಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"ಥಿಂಪು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"ಯಕುಟ್ಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"ಯೆರೆವಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of(u"ಕಿರಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"ಮಾಲ್ಟಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"ಮಿನ್\u200cಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of(u"ಪ್ಯಾರಿಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"ಸೋಫಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"ವಡೂಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"ಕೊಕೋಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"ಅಪಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"ಫಿಜಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of(u"ಗ್ವಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of(u"ನಿಯು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"ಚುಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"ವೇಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"ಅಸ್ಮಾರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of(u"ಬಮಾಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"ಬಾಂಗಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of(u"ಬಂಜುಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of(u"ಬಿಸ್ಸಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of(u"ದೌಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"ಹರಾರೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of(u"ಕಿಗಾಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"ಲುವಾಂಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"ಲುಸಾಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of(u"ಮಲಾಬೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of(u"ಮ್ಯಾಪುಟೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"ಮಸೇರು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of(u"ನಿಯಾಮೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"ಅರುಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"ಬಹೀಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"ಬೇಲೆಂ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"ಬ್ವಾಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of(u"ಜುಜೈ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of(u"ಸಿತ್ಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"ಥೂಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"ಅಶ್ಗಬಾತ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"ಕೊಲ್ಕತ್ತಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"ಡಮಾಸ್ಕಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"ದುಶಾಂಬೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"ಜಯಪುರ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"ಕಠ್ಮಂಡು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"ಖಂಡ್ಯಾಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"ಮೆಕಾಸ್ಸರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of(u"ಕೊಸ್ಟನಯ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"ಸಖಾಲಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"ಶಾಂಘೈ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"ತಾಶ್ಕೆಂಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"ಉಸ್ತ್-ನೆರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"ಅಥೆನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"ಬರ್ಲಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"ಡುಬ್ಲಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of(u"ಜೆರ್ಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of(u"ಲಿಸ್ಬನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of(u"ಲಂಡನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of(u"ಮ್ಯಾಡ್ರಿಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"ಮೊನಾಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"ಮಾಸ್ಕೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of(u"ಪ್ರಾಗ್ವೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"ಸಮರ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"ಸ್ಕಾಪಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of(u"ಟಿರಾನೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of(u"ವಿಯೆನ್ನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"ವಾರ್ಸಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"ಜಾಗ್ರೆಬ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"ಜ್ಯೂರಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"ಚಾಗೊಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"ಕೊಮೋರೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of(u"ಇಫೇಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"ನೌರು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of(u"ಪಾಲಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(Argentina)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(America_Central)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Abidjan"_s),
			$of(u"ಅಬಿದ್\u200cಜನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"ಅಲ್ಜೀರ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"ಕೊನಾಕ್ರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of(u"ಕಂಪಾಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of(u"ಅಂಬಬಾನೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"ನೈರೋಬಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"ಟ್ರೈಪೋಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"ಬೆಲೀಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"ಬೊಗೋಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"ಕ್ಯಾಂಕನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"ಕೇಮನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"ಕ್ಯೂಇಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"ಡಾಸನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of(u"ಡೆನ್ವರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"ಗಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"ಹವಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"ಇನುವಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of(u"ಜುನೇವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"ಲಾ ಪೆಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"ಮೆಸೀಯೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of(u"ಮನಾವ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"ಮೆರಿದಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"ನಸ್ಸೌವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"ಪನಾಮಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"ರೆಸಿಫಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"ರೆಜಿನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of(u"ಫಮಾಗುಸ್ತಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of(u"ಹಾಂಗ್ ಕಾಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"ಜೆರುಸಲೆಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"ಕಂಚಟ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of(u"ಪೊಂಟಿಯಾನಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"ಪ್ಯೊಂಗ್\u200dಯಾಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"ಕಿಜೈಲೋರ್ದ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"ಸಮರಖಂಡ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of(u"ಸಿಂಗಪುರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of(u"ವಿಯೆಂಟಿಯಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of(u"ಅಂಡೋರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of(u"ಸರಾಟೋವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"ಟ್ಯಾಲಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of(u"ವ್ಯಾಟಿಕನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"ವಿಲ್ನಿಯಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"ಮಯೊಟ್ಟೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"ರೀಯೂನಿಯನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"ಈಸ್ಟರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"ಕೋಸ್ರೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"ಮಜುರೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of(u"ಮಿಡ್\u200cವೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"ನ್ಯೂಮಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of(u"ಪೋನ್\u200cಪೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of(u"ಸೈಪನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"ತಹಿತಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of(u"ತರಾವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of(u"ವ್ಯಾಲಿಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of(u"ಬ್ಲ್ಯಾಂಟೈರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"ಜಿಬೂಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"ಎಲ್ ಔನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of(u"ಫ್ರೀಟೌನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of(u"ಗ್ಯಾಬರೋನೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"ಖರ್ಟೋಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"ಕಿನ್ಷಾಸಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of(u"ಮೊನ್ರೋವಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"ಡ್ಜಮೇನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"ಸಾವ್ ಟೊಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"ವಿಂಡ್ಹೋಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"ಆಂಟಿಗುವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"ಕ್ಯಾರಕಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"ಕೆಯೆನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"ಚಿಕಾಗೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"ಕೊರ್ಡೊಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of(u"ಕ್ರೆಸ್ಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"ಕುರಾಕಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of(u"ಡೆಟ್ರಾಯ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of(u"ನೂಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"ಗ್ರೆನಾಡ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"ಹ್ಯಾಲಿಫೆಕ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"ಈಕ್ವಾಲಿಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of(u"ಜಮೈಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"ಮನಾಗುವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of(u"ಮರಿಗೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of(u"ಮೆಂಡೊಜಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"ಮಾಂಕ್ಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"ನಿಪಿಗನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"ನೊರೊನ್ಹಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of(u"ಓಜಿನಾಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of(u"ಫಿನಿಕ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"ತಿಜ್ವಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"ಟೊರೊಂಟೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"ಟಾರ್ಟೊಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"ಯಾಕುಟಾಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"ಚೊಯ್\u200dಬಾಲ್ಸನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of(u"ನೋಮ್ ಪೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of(u"ಅಝೋರಿಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"ಕ್ಯಾನರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"ಫ್ಯಾರೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of(u"ಯುಕ್ಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"ಪರ್ಥ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"ಬೆಲ್\u200cಗ್ರೇಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"ಬ್ರಸ್ಸೆಲ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"ಬುಡಾಪೆಸ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"ಬುಸಿಂಜೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"ಚಿಸಿನಾವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"ಗ್ಯುರ್ನ್\u200dಸೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"ಹೆಲ್ಸಿಂಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"ಇಸ್ತಾನ್\u200cಬುಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"ಸರಯೇವೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"ಉಜ್\u200cಗೊರೊದ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"ಮಾಲ್ಡೀವ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"ಚಥಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"ಫಕೋಫೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"ಗ್ಯಾಂಬಿಯರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of(u"ನಾರ್ಫೋಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of(u"ಬುಜುಂಬುರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"ಮೊಗಾದಿಶು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"ಆಂಗ್ವಿಲ್ಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"ಅಸುನ್ಸಿಯಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"ಬಾರ್ಬಡೋಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"ಡೊಮಿನಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"ಎಡ್ಮಂಟನ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"ಇರುನಿಪೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"ಮಜಟ್ಲಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"ಮಿಕೆಲಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of(u"ನ್ಯೂಯಾರ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"ರೆಸೊಲ್ಯೂಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"ಸಾಂಟರೆಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"ಸ್ಯಾಂಟಿಯಾಗೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"ಸೇಂಟ್ ಜಾನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"ಸೇಂಟ್ ಕಿಟ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"ಸೇಂಟ್ ಲೂಸಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of(u"ವಿನ್ನಿಪೆಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"ಕೇಸಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"ಡೇವೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"ಸ್ಯೋವಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"ಟ್ರಾಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"ಕ್ರಾಸ್ನೊಯಾರ್ಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"ನೊವೋಸಿಬಿಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"ಉಲಾನ್ ಬತೊರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of(u"ವ್ಲಾದಿವೊಸ್ಟಾಕ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"ಬರ್ಮುಡಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"ಮೆಡಿರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"ಸ್ಟ್ಯಾನ್ಲಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"ಕರೀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of(u"ಡಾರ್ವಿನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"ಹೋಬಾರ್ಟ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"ಸಿಡ್ನಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of(u"ಆಮ್\u200cಸ್ಟೆರ್\u200cಡ್ಯಾಂ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"ಆಸ್ಟ್ರಾಖಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of(u"ಬುಕಾರೆಸ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"ಜಿಬ್ರಾಲ್ಟರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"ಲ್ಯೂಬ್ಲ್ಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of(u"ಮರಿಹಮ್ನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"ಪೊಡ್ಗೊರಿಕ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of(u"ಸ್ಟಾಕ್\u200dಹೋಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"ಉಲ್ಯಾನೊವಸ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of(u"ವೊಲ್ಗೊಗ್ರಾಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of(u"ಕ್ರಿಸ್ಮಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"ಕೆರ್ಗ್ಯುಲೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"ಮಾರಿಷಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"ಆಕ್ ಲ್ಯಾಂಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of(u"ಫುನಾಫುಟಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"ಹೊನಲುಲು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"ಜಾನ್\u200cಸ್ಟನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"ಪಿಟ್\u200cಕೈರ್ನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of(u"ಕ್ಯಾಸಾಬ್ಲಾಂಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"ಲಿಬ್ರೆವೀಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"ಲುಬುಂಬಾಶಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"ನೌಕ್\u200cಚೋಟ್ಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of(u"ಪೋರ್ಟೋ-ನೋವೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"ಆಂಕರೋಜ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"ಅರಾಗುಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"ಬೋವಾ ವಿಸ್ಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of(u"ಕಟಮಾರ್ಕ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"ಚಿವಾವ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"ಫೊರ್ಟಲೆಜಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"ಗ್ಲೇಸ್ ಬೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"ಗೂಸ್ ಬೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"ಗ್ವಾಟೆಮಾಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of(u"ಗುಯಾಕ್ವಿಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of(u"ಮಟಾಮೋರಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"ಮೆನೊಮಿನೀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"ಮಾಂಟೆರ್ರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"ಸಾವ್ ಪಾಲೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of(u"ಸೆಂಟ್ ಥಾಮಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of(u"ವ್ಯಾಂಕೊವರ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"ಮಾವ್ಸನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"ಪಾಲ್ಮರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of(u"ವೋಸ್ಟೋಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of(u"ಕೌಲಾ ಲಂಪುರ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of(u"ನೋವೋಕುಜೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"ಬ್ರಾಟಿಸ್ಲಾವ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"ಕೋಪೆನ್\u200cಹೇಗನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"ಲಕ್ಸೆಂಬರ್ಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of(u"ಸ್ಯಾನ್ ಮರೀನೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"ಸಿಮ್ಫೆರೋಪೋಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"ಜಾಪರೀಝಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"ಎಂಡರ್ಬರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"ಗಲಾಪಗೋಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"ಕ್ವಾಜಲೇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"ಮಾರ್ಕ್ಯೂಸಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"ಪಾಗೊ ಪಾಗೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of(u"ರರೋಟೋಂಗಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"ಟೊಂಗಾಟಾಪು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"ಆಡಿಸ್ ಅಬಾಬಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of(u"ಬ್ರೆಜಾವೀಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of(u"ಔಗಾಡೋಗು"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"ಕೋಸ್ಟಾ ರಿಕಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"ಗ್ರ್ಯಾಂಡ್ ಟರ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"ಗ್ವಾಡೆಲೋಪ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of(u"ಹರ್ಮೊಸಿಲ್ಲೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of(u"ಕ್ರೆಲೆಂಡಿಜ್ಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"ಲೂಯೀಸ್\u200cವಿಲ್ಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"ಮಾರ್ಟಿನಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of(u"ಮೆಟ್ಲಾಕಾಟ್ಲಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"ಮಾಂಟಿವೀಡಿಯೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"ಮಾಂಟ್\u200cಸೆರೇಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of(u"ಪರಮಾರಿಬೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"ರಿಯೋ ಬ್ರ್ಯಾಂಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"ಸೇಂಟ್ ವಿನ್ಸೆಂಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"ವೈಟ್\u200cಹಾರ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"ಮ್ಯಾಕ್\u200dಮುರ್ಡೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"ರೊಥೇರಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"ಸ್ರೇದ್ನೇಕೋಲೀಮಸ್ಕ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"ಎಕ್ಯಾಟೆರಿನ್ಬರ್ಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"ರೈಕ್ಜಾವಿಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"ಸೇಂಟ್ ಹೆಲೆನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"ಅಡಿಲೇಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"ಬ್ರಿಸ್ಬೇನ್\u200c"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of(u"ಲಿಂಡಿಮಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"ಐಲ್ ಆಫ್ ಮ್ಯಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"ಕಲಿನಿನ್\u200cಗ್ರಾಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of(u"ಕಿರಿತಿಮತಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"ಜೋಹಾನ್ಸ್\u200cಬರ್ಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"ಎಲ್ ಸಾಲ್ವಡೋರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of(u"ಫೋರ್ಟ್ ನೆಲ್ಸನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"ಲಾಸ್ ಏಂಜಲೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"ಮೆಕ್ಸಿಕೋ ನಗರ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"ಪಂಗ್ನೀರ್\u200cಟಂಗ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"ಪೋರ್ಟೊ ವೆಲ್ಹೋ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of(u"ಪ್ಯುರ್ಟೋ ರಿಕೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"ರೈನಿ ರಿವರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"ತೆಗುಸಿಗಲ್ಪಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"ಥಂಡರ್ ಬೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"ಯೆಲ್ಲೋ\u200cನೈಫ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"ಲಾಂಗ್ಯೀರ್ಬೆನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"ಕೇಪ್ ವೆರ್ಡ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of(u"ಲಾರ್ಡ್ ಹೋವ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of(u"ಮೆಲ್ಬರ್ನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"ಅಂಟಾನನಾರಿವೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"ಗ್ವಾಡಲ್ಕೆನಾಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"ಡಾರ್ ಎಸ್ ಸಲಾಮ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of(u"ಬ್ಲಾಂಕ್-ಸಾಬ್ಲನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of(u"ಬ್ಯೂನಸ್ ಐರಿಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"ಕಾಂಪೊ ಗ್ರಾಂಡೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"ಡನ್\u200cಮಾರ್ಕ್\u200cಶ್ವಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"ಡಾಸನ್ ಕ್ರೀಕ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"ನಾಕ್ಸ್, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"ಇಂಡಿಯಾನಾಪೊಲಿಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of(u"ಪುಂತಾ ಅರೇನಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"ರಾಂಕಿನ್ ಇನ್\u200cಲೆಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"ಸಾಂತಾ ಇಸಾಬೆಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"ಇಟ್ಟೊಕ್ಕೊರ್ಟೂಮಿಯೈಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"ಮ್ಯಾಕ್ವೆರಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"ಬೌಗೆನ್\u200dವಿಲ್ಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of(u"ಪೋರ್ಟ್ ಮೋರಿಸ್\u200cಬೈ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"ಕೇಮ್\u200cಬ್ರಿಡ್ಜ್ ಬೇ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"ಅಟಿಕೊಕಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"ವೇವಾಯ್, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"ಲೋವರ್ ಪ್ರಿನ್ಸಸ್ ಕ್ವಾರ್ಟರ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"ಪೋರ್ಟ್ ಆಫ್ ಸ್ಪೇನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"ಸ್ಯಾಂಟೋ ಡೊಮಿಂಗೊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"ಸೇಂಟ್ ಬಾರ್ತೆಲೆಮಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"ಸ್ವಿಫ್ಟ್ ಕರೆಂಟ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of(u"ಬ್ರೊಕನ್ ಹಿಲ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"ಬಾಹಿಯಾ ಬಂಡೇರಾಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"ಪೋರ್ಟ್-ಒ-ಪ್ರಿನ್ಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"ದಕ್ಷಿಣ ಜಾರ್ಜಿಯಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of(u"ಸಾಲ್ಟಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"ಮರೆಂಗೊ, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"ವಿನಾಮ್ಯಾಕ್, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"ಟುಕುಮಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"ಉಶ್ವಾಯ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"ಟೆಲ್ ಸಿಟಿ, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"ವಿನ್\u200cಸೆನ್ನೀಸ್, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"ಡುಮಂಟ್ ಡಿ ಉರ್ವಿಲೆ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"ಲಾ ರಿಯೋಜಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of(u"ಸ್ಯಾನ್ ಜುವಾನ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of(u"ಸ್ಯಾನ್ ಲೂಯೀಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"ಪೀಟರ್ಸ್\u200cಬರ್ಗ್, ಇಂಡಿಯಾನಾ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"ಮೊಂಟಿಸೆಲ್ಲೋ, ಕೆಂಟುಕಿ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"ಬ್ಯೂಲಾ, ಉತ್ತರ ಡಕೊಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"ಸೆಂಟರ್, ಉತ್ತರ ಡಕೊಟ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"ರಿಯೋ ಗಲ್ಲೆಗೊಸ್"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"ನ್ಯೂ ಸಲೇಂ, ಉತ್ತರ ಡಕೊಟ"_s)
		})
	}));
	return data;
}

TimeZoneNames_kn::TimeZoneNames_kn() {
}

$Class* TimeZoneNames_kn::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_kn, name, initialize, &_TimeZoneNames_kn_ClassInfo_, allocate$TimeZoneNames_kn);
	return class$;
}

$Class* TimeZoneNames_kn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun