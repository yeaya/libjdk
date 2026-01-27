#include <sun/util/resources/cldr/ext/TimeZoneNames_km.h>

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

$MethodInfo _TimeZoneNames_km_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_km, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_km, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_km_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_km",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_km_MethodInfo_
};

$Object* allocate$TimeZoneNames_km($Class* clazz) {
	return $of($alloc(TimeZoneNames_km));
}

void TimeZoneNames_km::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_km::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"ម៉ោងនៅគ្រីនវិច"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដា\u200bនៅ\u200bអាប្យា"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអាប្យា"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាប្យា"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bប្រជុំកោះ\u200bខូក"_s,
		""_s,
		u"ម៉ោង\u200bនៅប្រជុំ\u200bកោះ\u200bខូកនាពាក់កណ្ដាល\u200bរដូវ\u200b\u200b\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅប្រជុំ\u200bកោះ\u200bខូក"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bគុយបា"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bគុយបា"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bគុយបា"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bហ្វីជី"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200b\u200bហ្វីជីនា\u200b\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហ្វីជី"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដា\u200bនៅ\u200bកាល់"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅហូវ"_s,
		""_s,
		u"ម៉ោងនៅ\u200bហូវនា\u200bរដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហូវ"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអ៊ីរ៉ង់"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអ៊ីរ៉ង់"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ីរ៉ង់"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"ម៉ោងនៅ\u200bនីវ៉េ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអូម"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអូមនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអូម"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bប៉េរូ"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bប៉េរូនារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប៉េរូ"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bចូអុក"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះវេក"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"ម៉ោងស្តង់ដារនៅស៊ីលី"_s,
		""_s,
		u"ម៉ោងនៅស៊ីលីនារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោងនៅស៊ីលី"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bចិន"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bចិន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bចិន"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bប្រជុំកោះ\u200bកូកូស"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bដាវីស"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារនៅ\u200bឥណ្ឌា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bជប៉ុន"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅជប៉ុន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bជប៉ុន"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bកូរ៉េ"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bកូរ៉េ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bកូរ៉េ"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bណូរូ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"ម៉ោងនៅនេប៉ាល់"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bផាឡៅ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារនៅ\u200bសាម័រ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bសាម័រនារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bសាម័រ"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bស៊ីអូវ៉ា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200b\u200bនៅ\u200bតុងហ្គា"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bតុងហ្គានារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bតុងហ្គា"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអាឡាស្កា"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200b\u200bអាឡាស្កា"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាឡាស្កា"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"ម៉ោងស្តង់ដារ\u200bនៅ\u200bអាម៉ាហ្សូន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាម៉ាហ្សូននារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាម៉ាហ្សូន"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអេហ្សស"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bអេហ្សសនារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអេហ្សស"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"ម៉ោងនៅប៊ូតង់"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"ម៉ោងនៅព្រុយណេដារូសាឡឹម"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"ម៉ោងស្តង់ដារនៅកោះអ៊ីស្ទ័រ"_s,
		""_s,
		u"ម៉ោងនៅកោះអ៊ីស្ទ័រនារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោងនៅកោះអ៊ីស្ទ័រ"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bហ្គីយ៉ាន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអ៊ីស្រាអែល"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអ៊ីស្រាអែល"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ីស្រាអែល"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកូស្រៃ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bម៉ៅ\u200bសាន់"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bមូស្គូ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bមូស្គូ\u200bនារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bមូស្គូ"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bប៉ូណាប់"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bតាហិទី"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bតៃប៉ិ"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bតៃប៉ិ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bតៃប៉ិ"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bទុយវ៉ាលូ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bវ័រស្តុក"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bវ៉ាលីស និងហ្វ៊ុទូណា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអារ៉ាប់"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអារ៉ាប់"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអារ៉ាប់"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"ម៉ោង\u200bស្ដង់ដារ\u200bនៅ\u200bអាមេនី"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាមេនីនារដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាមេនី"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bបូលីវី"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bចាថាំ"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bចាថាំ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bចាថាំ"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"ម៉ោងសកលដែលមានការសម្រួល"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bអេក្វាទ័រ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកាំបៀ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bហ្សកហ្ស៊ី"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហ្សកហ្ស៊ីនា\u200b\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហ្សកហ្ស៊ី"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"ម៉ោងស្តង់ដារនៅអៀរគុតស្កិ៍"_s,
		""_s,
		u"ម៉ោងនៅអៀរគុតស្កិ៍នារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោងនៅអៀរគុតស្កិ៍"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bម៉ាហ្កាដាន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bម៉ាហ្កាដាន\u200bនារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bម៉ាហ្កាដាន"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bមីយ៉ាន់ម៉ា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"ម៉ោង\u200bស្ដង់ដារ\u200bនៅ\u200bណ័រហ្វក់"_s,
		""_s,
		u"ម៉ោងនៅ\u200bណ័រហ្វក់នា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bណ័រហ្វក់"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារនៅហ្វ៊ែណាន់ដូ\u200bដឺណូរ៉ូញ៉ា"_s,
		""_s,
		u"ម៉ោង\u200bនៅហ្វ៊ែណាន់ដូ\u200bដឺណូរ៉ូញ៉ានារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅហ្វ៊ែណាន់ដូ\u200bដឺណូរ៉ូញ៉ា"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"ម៉ោងនៅរេអ៊ុយ៉ុង"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bរ៉ូធឺរ៉ា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bសូឡូម៉ុន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bតូខេឡៅ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអ៊ុយរូហ្គាយ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ុយរូហ្គាយនា\u200b\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ុយរូហ្គាយ"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"ម៉ោង\u200b\u200bស្តង់ដារ\u200bនៅ\u200bវ៉ានូទូ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bវ៉ានូទូនារដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bវ៉ានូទូ"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bយ៉ាគុតស្កិ៍"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bយ៉ាគុតស្កិ៍នា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bយ៉ាគុតស្កិ៍"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអាត្លង់ទិក"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអាត្លង់ទិក"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាត្លង់ទិក"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bប្រាស៊ីលីយ៉ា"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប្រាស៊ីលីយ៉ានា\u200b\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប្រាស៊ីលីយ៉ា"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារនៅ\u200bចាំម៉ូរ៉ូ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bកូឡុំប៊ី"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bកូឡុំប៊ីនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bកូឡុំប៊ី"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅប្រជុំ\u200bកោះ\u200bហ្វក់ឡែន"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅប្រជុំ\u200bកោះ\u200bហ្វក់ឡែននារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប្រជុំកោះ\u200bហ្វក់ឡែន"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bម៉ាឡេស៊ី"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bម៉ាល់ឌីវ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអ៊ូឡាន\u200bបាទូ"_s,
		""_s,
		u"ម៉ោងនៅ\u200bអ៊ូឡាន\u200bបាទូនា\u200bរដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ូឡាន\u200bបាទូ"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"ម៉ោង\u200bស្ដង់ដារ\u200bនៅ\u200bប៉ាគីស្ថាន"_s,
		""_s,
		u"ម៉ោងនៅ\u200bប៉ាគីស្ថាននា\u200bរដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប៉ាគីស្ថាន"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bប៉ារ៉ាហ្គាយ"_s,
		""_s,
		u"ម៉ោង\u200bនៅប៉ារ៉ាហ្គាយនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប៉ារ៉ាហ្គាយ"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bភីឃឺន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bសាក់ខាលីន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bសាក់ខាលីននា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bសាក់ខាលីន"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bសូរីណាម"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"ម៉ោងស្តង់ដារ\u200bនៅ\u200bអាហ្សង់ទីន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាហ្សង់ទីននារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាហ្សង់ទីន"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bគ្រីស្មាស"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកាឡាប៉ាកូស"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bហុងកុង"_s,
		""_s,
		u"ម៉ោងនៅ\u200bហុងកុងនា\u200bរដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហុងកុង"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bឥណ្ឌូចិន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"ម៉ោងនៅកៀហ្ស៊ីស៊ីស្ថាន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bឡត\u200bហៅ"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bឡតហៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bឡតហៅ"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bម៉ាគឺសាស់"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bម៉ូរីស"_s,
		""_s,
		u"ម៉ោង\u200b\u200bរដូវ\u200bក្ដៅនៅ\u200bម៉ូរីស"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bម៉ូរីស"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bសិង្ហបូរី"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bវ៉េណេស៊ុយអេឡា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bវ៉ូហ្កោក្រាដ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bវ៉ូហ្កោក្រាដនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bវ៉ូហ្កោក្រាដ"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអាស៊ែបៃហ្សង់"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bអាស៊ែបៃហ្សង់នារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាស៊ែបៃហ្សង់"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"ម៉ោង\u200bស្ដង់ដារ\u200bនៅ\u200bបង់ក្លាដែស"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bបង់ក្លាដែសនារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bបង់ក្លាដែស"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bកាប់វែរ"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bកាប់វែរនារដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bកាប់វែរ"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200b\u200bទីម័រ\u200bខាង\u200bកើត"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bសីស្ហែល"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"ម៉ោងនៅតាជីគីស្ថាន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអ៊ូសបេគីស្ថាន"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ូសបេគីស្ថាននារដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ូសបេគីស្ថាន"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bអាហ្វហ្គានីស្ថាន"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bក្រាណូយ៉ាស"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bក្រាណូយ៉ាសនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bក្រាណូយ៉ាស"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bនូវែលសេឡង់"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bនូវែលសេឡង់"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bនូវែលសេឡង់"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bណូវ៉ូស៊ីប៊ីក"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bណូវ៉ូស៊ីប៊ីកនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bណូវ៉ូស៊ីប៊ីក"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bហ្វីលីពីន"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bហ្វីលីពីននា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហ្វីលីពីន"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bវ៉្លាឌីវ៉ូស្តុក"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bវ៉្លាឌីវ៉ូស្តុកនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bវ៉្លាឌីវ៉ូស្តុក"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bមហាសមុទ្រ\u200bឥណ្ឌា"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bឡាញ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"ម៉ោង\u200b\u200bស្តង់ដារ\u200b\u200bនៅ\u200bញូវហ្វោនឡែន"_s,
		""_s,
		u"ម៉ោង\u200bពេលថ្ងៃ\u200bនៅ\u200bញូវហ្វោនឡែន"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅញូវហ្វោនឡែន"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅតួកម៉េនីស្ថាន"_s,
		""_s,
		u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200bនៅ\u200bតួកម៉េនីស្ថាន\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bតួកម៉េនីស្ថាន"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bហ្គីយ៉ាន\u200bបារាំង"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"ម៉ោងស្តង់ដារ\u200bនៅណូវ៉ែលកាឡេដូនៀ"_s,
		""_s,
		u"ម៉ោង\u200bនៅណូវ៉ែលកាឡេដូនៀនារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅណូវ៉ែលកាឡេដូនៀ"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bហ្សកហ្ស៊ី"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអ៊ិខាធឺរីនប៊័ក"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ិខាធឺរីនប៊័កនា\u200bរដូវ\u200b\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអ៊ិខាធឺរីនប៊័ក"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bអាហ្វ្រិក\u200bកណ្ដាល"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bអាហ្វ្រិក\u200bខាង\u200bកើត"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអាហ្វ្រិក\u200bខាង\u200bលិច"_s,
		""_s,
		u"ម៉ោងនៅ\u200bអាហ្វ្រិក\u200b\u200b\u200bខាងលិច\u200b\u200bនារដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអាហ្វ្រិក\u200bខាង\u200bលិច"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bឌុយម៉ុងដឺអ៊ុយវីល"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអឺរ៉ុប\u200bកណ្ដាល"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអឺរ៉ុប\u200bកណ្ដាលនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអឺរ៉ុប\u200bកណ្ដាល"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200b\u200bនៅ\u200bអឺរ៉ុប\u200b\u200bខាង\u200bកើត\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអឺរ៉ុប\u200b\u200bខាង\u200bកើត\u200bនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអឺរ៉ុប\u200b\u200bខាង\u200bកើត\u200b"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអឺរ៉ុប\u200bខាង\u200bលិច"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអឺរ៉ុប\u200bខាង\u200bលិចនារដូវ\u200bក្ដៅ\u200b"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអឺរ៉ុប\u200bខាង\u200bលិច"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដា\u200bនៅ\u200bប៉ាស៊ីហ្វិក\u200bម៉ិកស៊ិក"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bប៉ាស៊ីហ្វិក\u200bម៉ិកស៊ិក"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bប៉ាស៊ីហ្វិក\u200bម៉ិកស៊ិក"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bអាហ្វ្រិក\u200bខាង\u200bត្បូង"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"ម៉ោង\u200b\u200bស្តង់ដារនៅ\u200bទ្វីបអាមេរិក\u200bខាង\u200bជើងភាគកណ្តាល"_s,
		""_s,
		u"ម៉ោង\u200b\u200bពេលថ្ងៃនៅ\u200bទ្វីបអាមេរិក\u200bខាង\u200bជើងភាគកណ្តាល"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bទ្វីបអាមេរិក\u200bខាង\u200bជើងភាគកណ្តាល"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"ម៉ោងស្តង់ដារនៅទ្វីបអាមេរិកខាងជើងភាគខាងកើត"_s,
		""_s,
		u"ម៉ោងពេលថ្ងៃនៅទ្វីបអាមេរិកខាងជើងភាគខាងកើត"_s,
		""_s,
		u"ម៉ោងនៅទ្វីបអាមរិកខាងជើងភាគខាងកើត"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"ម៉ោងស្ដង់ដារនៅប៉ាស៊ីហ្វិកអាមេរិក"_s,
		""_s,
		u"ម៉ោងពេលថ្ងៃនៅប៉ាស៊ីហ្វិកអាមេរិក"_s,
		""_s,
		u"ម៉ោងនៅប៉ាស៊ីហ្វិកអាមេរិក"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"ម៉ោងនៅបារាំងខាងត្បូង និងនៅអង់តាំងទិក"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bកីប៊ឺត"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200b\u200bនៅ\u200bហាវៃ-អាល់ដ្យូសិន"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bហាវៃ-អាល់ដ្យូសិន"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bហាវៃ-អាល់ដ្យូសិន"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកោះ\u200bផូនីក"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅសង់\u200bព្យែរ និង\u200bមីគុយឡុង"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅសង់\u200bព្យែរ និង\u200bមីគុយឡុង"_s,
		""_s,
		u"ម៉ោង\u200b\u200b\u200bនៅសង់\u200bព្យែរ និង\u200bមីគុយឡុង"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"ម៉ោងស្តង់ដារ\u200bនៅតំបន់ភ្នំនៃទ្វីប\u200bអាមេរិក\u200b\u200b\u200bខាង\u200bជើង"_s,
		""_s,
		u"ម៉ោង\u200bពេលថ្ងៃនៅតំបន់ភ្នំនៃទ្វីប\u200bអាមេរិក\u200b\u200b\u200bខាង\u200bជើង"_s,
		""_s,
		u"ម៉ោង\u200bនៅតំបន់ភ្នំនៃទ្វីប\u200bអាមេរិក\u200b\u200b\u200bខាង\u200bជើង"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bម៉ាសាល"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារនៅ\u200bម៉ិកស៊ិកភាគពាយព្យ"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bម៉ិកស៊ិកភាគពាយព្យ"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bម៉ិកស៊ិកភាគពាយព្យ"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"ម៉ោង\u200bនៅប៉ាពូអាស៊ី នូវែលហ្គីណេ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអូស្ត្រាលី\u200bកណ្ដាល"_s,
		""_s,
		u"ម៉ោង\u200bពេលថ្ងៃ\u200b\u200b\u200b\u200bនៅ\u200bអូស្ត្រាលី\u200bកណ្ដាល"_s,
		""_s,
		u"ម៉ោង\u200bនៅអូស្ត្រាលី\u200bកណ្ដាល"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bអូស្ត្រាលី\u200bខាង\u200bកើត"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអូស្ត្រាលី\u200bខាង\u200bកើត"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bអូស្ត្រាលី\u200bខាង\u200bកើត"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"ម៉ោង\u200b\u200bស្តង់ដារ\u200bនៅ\u200bអូស្ត្រាលី\u200bខាង\u200bលិច"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200bអូស្ត្រាលី\u200bខាង\u200bលិច"_s,
		""_s,
		u"ម៉ោង\u200b\u200b\u200bនៅ\u200bអូស្ត្រាលី\u200bខាង\u200bលិច"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"ម៉ោង\u200b\u200b\u200bស្តង់ដារ\u200bនៅ\u200b\u200bហ្គ្រីនលែន\u200bខាង\u200bកើត"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200bហ្គ្រីនលែនខាង\u200bកើតនា\u200bរដូវ\u200bក្ដៅ"_s,
		""_s,
		u"ម៉ោង\u200b\u200bនៅ\u200bហ្គ្រីនលែន\u200bខាង\u200bកើត"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"ម៉ោងស្តង់ដារនៅហ្គ្រីនលែនខាងលិច"_s,
		""_s,
		u"ម៉ោងនៅហ្គ្រីនលែនខាងលិចនារដូវក្តៅ"_s,
		""_s,
		u"ម៉ោងនៅហ្គ្រីនលែនខាងលិច"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bឥណ្ឌូណេស៊ី\u200b\u200b\u200bកណ្ដាល"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bឥណ្ឌូណេស៊ី\u200b\u200bខាង\u200bកើត"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bឥណ្ឌូណេស៊ី\u200b\u200bខាង\u200bលិច"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"ម៉ោង\u200bកាហ្សាក់ស្ថាន\u200b\u200bខាង\u200bកើត"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"ម៉ោង\u200bនៅ\u200bកាហ្សាក់ស្ថាន\u200bខាង\u200b\u200b\u200bលិច"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"ម៉ោង\u200bស្តង់ដារ\u200bនៅ\u200bភាគ\u200bខាង\u200bលិច\u200bនៃ\u200bអូស្ត្រាលី\u200bកណ្ដាល"_s,
		""_s,
		u"ម៉ោង\u200bពេល\u200bថ្ងៃ\u200bនៅ\u200b\u200bភាគ\u200bខាង\u200bលិច\u200bនៃ\u200bអូស្ត្រាលី\u200bកណ្ដាល"_s,
		""_s,
		u"ម៉ោង\u200bនៅ\u200b\u200b\u200bភាគ\u200bខាង\u200bលិច\u200bនៅ\u200bអូស្ត្រាលី\u200bកណ្ដាល"_s,
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
				u"ម៉ោងនៅគ្រីនវិច"_s,
				""_s,
				u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200bនៅ\u200bអៀរឡង់\u200b"_s,
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
				u"ម៉ោងនៅគ្រីនវិច"_s,
				""_s,
				u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200b\u200bនៅ\u200bចក្រភព\u200bអង់គ្លេស"_s,
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
				u"ម៉ោងនៅគ្រីនវិច"_s,
				""_s,
				u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200b\u200bនៅ\u200bចក្រភព\u200bអង់គ្លេស"_s,
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
			$of(u"អាដែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baku"_s),
			$of(u"បាគូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dili"_s),
			$of(u"ដេលី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Gaza"_s),
			$of(u"កាសា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hovd"_s),
			$of(u"ហូវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Omsk"_s),
			$of(u"អូមស្កិ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Oral"_s),
			$of(u"អូរ៉ាល់"_s)
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
			$of(u"អាម៉ាន់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtau"_s),
			$of(u"អាកទូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Chita"_s),
			$of(u"ឈីតា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dhaka"_s),
			$of(u"ដាក្កា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dubai"_s),
			$of(u"ឌុយបៃ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kabul"_s),
			$of(u"កាប៊ុល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Macau"_s),
			$of(u"ម៉ាកាវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qatar"_s),
			$of(u"កាតា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Seoul"_s),
			$of(u"សេអ៊ូល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tokyo"_s),
			$of(u"តូក្យូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tomsk"_s),
			$of(u"ថមស្កិ៍"_s)
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
			$of(u"ជូបា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"ឡូម៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Almaty"_s),
			$of(u"អាល់ម៉ាទី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Anadyr"_s),
			$of(u"អាណាឌី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Aqtobe"_s),
			$of(u"អាកទូប៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Atyrau"_s),
			$of(u"អាទីរ៉ូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Beirut"_s),
			$of(u"បេរូត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Brunei"_s),
			$of(u"ព្រុយណេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hebron"_s),
			$of(u"ហេបរុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuwait"_s),
			$of(u"កូវ៉ែត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Manila"_s),
			$of(u"ម៉ានីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Muscat"_s),
			$of(u"ម៉ាស្កាត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Riyadh"_s),
			$of(u"រីយ៉ាដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Saigon"_s),
			$of(u"ហូជីមីញ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Taipei"_s),
			$of(u"តៃប៉ិ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tehran"_s),
			$of(u"តេហេរ៉ង់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Urumqi"_s),
			$of(u"អ៊ូរាំហ្គី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"ទីក្រុង\u200bមិនស្គាល់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kiev"_s),
			$of(u"កៀវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Oslo"_s),
			$of(u"អូស្លូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Riga"_s),
			$of(u"រីហ្កា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Rome"_s),
			$of(u"រ៉ូម"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mahe"_s),
			$of(u"ម៉ាហេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Accra"_s),
			$of(u"អាក្រា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"គែរ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ceuta"_s),
			$of(u"ឈៀតា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"ដាកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lagos"_s),
			$of(u"ឡាហ្គូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"ទុយនីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Adak"_s),
			$of(u"អាដាក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lima"_s),
			$of(u"លីម៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nome"_s),
			$of(u"ណូម"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Baghdad"_s),
			$of(u"បាកដាដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"បារ៉ែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bangkok"_s),
			$of(u"បាងកក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Barnaul"_s),
			$of(u"បានូល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bishkek"_s),
			$of(u"ប៊ីស្កេក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Colombo"_s),
			$of(u"កូឡុំបូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Irkutsk"_s),
			$of(u"អៀរគុតស្កិ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jakarta"_s),
			$of(u"ហ្សាការតា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Karachi"_s),
			$of(u"ការ៉ាជី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuching"_s),
			$of(u"ឃឺតចីង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Magadan"_s),
			$of(u"ម៉ាហ្គាដាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Nicosia"_s),
			$of(u"នីកូស៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Rangoon"_s),
			$of(u"រ៉ង់ហ្គូន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tbilisi"_s),
			$of(u"ប៊ីលីស៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"ធីមភូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yakutsk"_s),
			$of(u"យ៉ាគុតស្កិ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yerevan"_s),
			$of(u"យ៉េរ៉េវ៉ាន់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kirov"_s),
			$of(u"គីរ៉ូវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Malta"_s),
			$of(u"ម៉ាល់ត៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Minsk"_s),
			$of(u"មីនស្កិ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Paris"_s),
			$of(u"ប៉ារីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sofia"_s),
			$of(u"សូហ៊្វីយ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vaduz"_s),
			$of(u"វ៉ាឌូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Cocos"_s),
			$of(u"កូកូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"អាពី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fiji"_s),
			$of(u"ហ្វីជី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guam"_s),
			$of(u"ហ្គាំ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Niue"_s),
			$of(u"នីវ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Truk"_s),
			$of(u"ឈូអុក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wake"_s),
			$of(u"វ៉ាគី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Asmera"_s),
			$of(u"អាស្មារ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bamako"_s),
			$of(u"បាម៉ាកូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bangui"_s),
			$of(u"បង់ហ្គី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Banjul"_s),
			$of(u"បង់ហ្ស៊ុល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bissau"_s),
			$of(u"ប៊ីស្សូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Douala"_s),
			$of(u"ឌូអ៊ូឡា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Harare"_s),
			$of(u"ហារ៉ារ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kigali"_s),
			$of(u"គីហ្គាលី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Luanda"_s),
			$of(u"លូអង់ដា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lusaka"_s),
			$of(u"លូសាកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Malabo"_s),
			$of(u"ម៉ាឡាបូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maputo"_s),
			$of(u"ម៉ាពុយតូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Maseru"_s),
			$of(u"ម៉ាសេរុយ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Niamey"_s),
			$of(u"នីញ៉ាម៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Aruba"_s),
			$of(u"អារ៉ូបា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia"_s),
			$of(u"បាហៀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belem"_s),
			$of(u"បេឡឹម"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boise"_s),
			$of(u"ប៊ូស៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jujuy"_s),
			$of(u"សូសុយ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sitka"_s),
			$of(u"ស៊ីតកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thule"_s),
			$of(u"ធុឡេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ashgabat"_s),
			$of(u"អាសហ្គាបាត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Calcutta"_s),
			$of(u"កុលកាតា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Damascus"_s),
			$of(u"ដាម៉ាស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Dushanbe"_s),
			$of(u"ឌូស្ហាន់បេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jayapura"_s),
			$of(u"ចាយ៉ាភូរ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Katmandu"_s),
			$of(u"កាត់ម៉ាន់ឌូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Khandyga"_s),
			$of(u"ខាន់ឌីហ្គា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Makassar"_s),
			$of(u"ម៉ាកាសសារ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qostanay"_s),
			$of(u"កូស្ដេណេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Sakhalin"_s),
			$of(u"សាខាលីន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Shanghai"_s),
			$of(u"សៀងហៃ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Tashkent"_s),
			$of(u"តាស្កិន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ust-Nera"_s),
			$of(u"អូស្តណេរ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"អាថែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Berlin"_s),
			$of(u"បែរឡាំង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Dublin"_s),
			$of(u"ឌុយប្លាំង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Jersey"_s),
			$of(u"ជេស៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Lisbon"_s),
			$of(u"លីសបោន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/London"_s),
			$of(u"ឡុងដ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Madrid"_s),
			$of(u"ម៉ាឌ្រីដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Monaco"_s),
			$of(u"ម៉ូណាកូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Moscow"_s),
			$of(u"មូស្គូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Prague"_s),
			$of(u"ប្រាក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Samara"_s),
			$of(u"សាម៉ារ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Skopje"_s),
			$of(u"ស្កុបជេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tirane"_s),
			$of(u"ទីរ៉ាណេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vienna"_s),
			$of(u"វីយែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Warsaw"_s),
			$of(u"វ៉ាសូវី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zagreb"_s),
			$of(u"សាគ្រែប"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zurich"_s),
			$of(u"ហ៊្សូរីច"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Chagos"_s),
			$of(u"កាហ្គោ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Comoro"_s),
			$of(u"កូម័រ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Efate"_s),
			$of(u"អ៊ីហ្វាតេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Nauru"_s),
			$of(u"ណូរូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Palau"_s),
			$of(u"ប៉ាឡៅ"_s)
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
			$of(u"អាប៊ីដ្យាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Algiers"_s),
			$of(u"អាល់ហ្សេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Conakry"_s),
			$of(u"កូណាគ្រី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kampala"_s),
			$of(u"កំប៉ាឡា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mbabane"_s),
			$of(u"បាបាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nairobi"_s),
			$of(u"ណៃរ៉ូប៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"ទ្រីប៉ូលី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"បេលី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"បូហ្គោតា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cancun"_s),
			$of(u"ខានខុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayman"_s),
			$of(u"កៃមែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cuiaba"_s),
			$of(u"គុយអាបា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"ដាវសុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Denver"_s),
			$of(u"ដែនវើ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guyana"_s),
			$of(u"ហ្គីយ៉ាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Havana"_s),
			$of(u"ឡាហាវ៉ាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"អ៊ីនូវីក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Juneau"_s),
			$of(u"ហ្យូនៀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"ឡាប៉ាស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Maceio"_s),
			$of(u"ម៉ាកសេអូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Manaus"_s),
			$of(u"ម៉ាណាអ៊ូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Merida"_s),
			$of(u"ម៉េរីដា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nassau"_s),
			$of(u"ណាស្សូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"ប៉ាណាម៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Recife"_s),
			$of(u"រ៉េស៊ីហ្វី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"រ៉េហ្គីណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Famagusta"_s),
			$of(u"ហ្វ៉ាម៉ាហ្គុស្តា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Hong_Kong"_s),
			$of(u"ហុងកុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Jerusalem"_s),
			$of(u"ហ្ស៊េរុយសាឡិម"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kamchatka"_s),
			$of(u"កាំឆាតកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pontianak"_s),
			$of(u"ប៉ុនទីអាណាក់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Pyongyang"_s),
			$of(u"ព្យុងយ៉ាង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Qyzylorda"_s),
			$of(u"គីហ្ស៊ីឡូដា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Samarkand"_s),
			$of(u"សាម៉ាកាន់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Singapore"_s),
			$of(u"សិង្ហបូរី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vientiane"_s),
			$of(u"វៀងចន្ទន៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Andorra"_s),
			$of(u"អង់ដូរ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Saratov"_s),
			$of(u"សារ៉ាតាវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"តាលិន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vatican"_s),
			$of(u"វ៉ាទីកង់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Vilnius"_s),
			$of(u"វីលនីញូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mayotte"_s),
			$of(u"ម៉ាយុត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Reunion"_s),
			$of(u"រេអ៊ុយ៉ុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Easter"_s),
			$of(u"អ៊ីស្ទ័រ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kosrae"_s),
			$of(u"កូស្រែ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Majuro"_s),
			$of(u"ម៉ាហ្សូរ៉ូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Midway"_s),
			$of(u"មីតវ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Noumea"_s),
			$of(u"ណូមៀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Ponape"_s),
			$of(u"ផុនប៉ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Saipan"_s),
			$of(u"សៃប៉ាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tahiti"_s),
			$of(u"តាហីទី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tarawa"_s),
			$of(u"តារ៉ាវ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Wallis"_s),
			$of(u"វ៉ាលីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Blantyre"_s),
			$of(u"ប្លាំងទីរ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Djibouti"_s),
			$of(u"ជីប៊ូទី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/El_Aaiun"_s),
			$of(u"អែល\u200bអ៊ុយញៀន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Freetown"_s),
			$of(u"ហ្វ្រីថោន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Gaborone"_s),
			$of(u"ហ្គាបូរ៉ូន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"ខាទុំ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Kinshasa"_s),
			$of(u"គីនស្ហាសា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Monrovia"_s),
			$of(u"ម៉ុងរ៉ូវីយ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ndjamena"_s),
			$of(u"ដ្យាមេណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Sao_Tome"_s),
			$of(u"សៅតូម៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Windhoek"_s),
			$of(u"វីនដុក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"អង់ទីហ្គា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Caracas"_s),
			$of(u"ការ៉ាកាស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cayenne"_s),
			$of(u"កាយ៉េន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"ស៊ីកាហ្គោ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cordoba"_s),
			$of(u"កូដូបា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Creston"_s),
			$of(u"ក្រេស្តុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Curacao"_s),
			$of(u"កូរ៉ាកៅ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Detroit"_s),
			$of(u"ដេត្រូអ៊ីត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Godthab"_s),
			$of(u"នូក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grenada"_s),
			$of(u"ហ្គ្រើណាដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"ហាលីហ្វាក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Iqaluit"_s),
			$of(u"អ៊ីកាឡូអ៊ីត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Jamaica"_s),
			$of(u"ហ្សាម៉ាអ៊ីក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Managua"_s),
			$of(u"ម៉ាណាហ្គា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Marigot"_s),
			$of(u"ម៉ារីហ្គុត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mendoza"_s),
			$of(u"ម៉ែនឌូហ្សា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"ម៉ុងតុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"នីពីកុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Noronha"_s),
			$of(u"ណូរ៉ុនញ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Ojinaga"_s),
			$of(u"អូជីណាហ្កា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Phoenix"_s),
			$of(u"ផូនីក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"ទីយ្យូអាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"តូរ៉ុនតូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tortola"_s),
			$of(u"តូតូឡា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"យ៉ាគូតាត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Choibalsan"_s),
			$of(u"ឈូបាល់សាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Phnom_Penh"_s),
			$of(u"ភ្នំពេញ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Azores"_s),
			$of(u"អាសូរ៉េស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Canary"_s),
			$of(u"កាណារី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"ហ្វារ៉ូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Eucla"_s),
			$of(u"អ៊ុយក្លា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Perth"_s),
			$of(u"ភឺធ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Belgrade"_s),
			$of(u"បែលក្រាដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Brussels"_s),
			$of(u"ព្រុចសែល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Budapest"_s),
			$of(u"ប៊ុយដាប៉ែស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Busingen"_s),
			$of(u"ប៊ូស៊ីងហ្គែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Chisinau"_s),
			$of(u"ជីស៊ីណូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Guernsey"_s),
			$of(u"ហ្គេនស៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"ហែលស៊ិនគី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Istanbul"_s),
			$of(u"អ៊ីស្តង់ប៊ុល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Sarajevo"_s),
			$of(u"សារ៉ាយ៉េវ៉ូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Uzhgorod"_s),
			$of(u"អ៊ុយហ្គោរ៉ូដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Maldives"_s),
			$of(u"ម៉ាល់ឌីវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Chatham"_s),
			$of(u"ចាថាំ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Fakaofo"_s),
			$of(u"ហ្វាកៅហ្វូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Gambier"_s),
			$of(u"ហ្គាំបៀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Norfolk"_s),
			$of(u"ណ័រហ្វុក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Bujumbura"_s),
			$of(u"ប៊ូយ៉ាំប៊ូរ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Mogadishu"_s),
			$of(u"ម៉ូហ្គាឌីស្យូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anguilla"_s),
			$of(u"អង់ហ្គីឡា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Asuncion"_s),
			$of(u"អាសង់ស្យុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"បាបាដុស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"ដូមីនីក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"អែតម៉ុងតុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Eirunepe"_s),
			$of(u"អ៊ីរ៉ុយណេភី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mazatlan"_s),
			$of(u"ម៉ាហ្សាតឡង់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Miquelon"_s),
			$of(u"មីហ្គីឡុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/New_York"_s),
			$of(u"ញូវយ៉ក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"រ៉េ\u200bស៊ូឡូត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santarem"_s),
			$of(u"សាន់តារឹម"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"សាន់ទីអេហ្គោ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"សាំង\u200bចន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Kitts"_s),
			$of(u"សាំង\u200bឃីត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Lucia"_s),
			$of(u"សាំង\u200bលូសៀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Winnipeg"_s),
			$of(u"វីនីភិក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Casey"_s),
			$of(u"កាសី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"ដាវីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Syowa"_s),
			$of(u"ស៊ីយ៉ូវ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Troll"_s),
			$of(u"ត្រូល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Krasnoyarsk"_s),
			$of(u"ក្រាសនុយ៉ាក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novosibirsk"_s),
			$of(u"ណូវ៉ូស៊ីប៊ឺក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Ulaanbaatar"_s),
			$of(u"អ៊ូឡង់បាទ័រ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Vladivostok"_s),
			$of(u"វ៉្លាដីវ៉ូស្តុក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"ប៉ឺមុយដា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Madeira"_s),
			$of(u"ម៉ាដៀរ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Stanley"_s),
			$of(u"ស្តង់លី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Currie"_s),
			$of(u"ខូរៀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Darwin"_s),
			$of(u"ដាវីន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Hobart"_s),
			$of(u"ហូបាត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Sydney"_s),
			$of(u"ស៊ីដនី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Amsterdam"_s),
			$of(u"អាំស្ទែដាំ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Astrakhan"_s),
			$of(u"អាស្ត្រាខាន់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bucharest"_s),
			$of(u"ប៊ុយការ៉េស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Gibraltar"_s),
			$of(u"ហ្ស៊ីប្រាល់តា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ljubljana"_s),
			$of(u"ជូបហ្សាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Mariehamn"_s),
			$of(u"ម៉ារៀហាំ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Podgorica"_s),
			$of(u"ប៉ូដហ្គោរីកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Stockholm"_s),
			$of(u"ស្តុកខុល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Ulyanovsk"_s),
			$of(u"អុលយ៉ាណូវស្កិ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Volgograd"_s),
			$of(u"វ៉ុលហ្គោហ្គ្រាដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Christmas"_s),
			$of(u"គ្រីស្មាស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Kerguelen"_s),
			$of(u"ឃឺហ្គុយឡែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Mauritius"_s),
			$of(u"ម៉ូរីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Auckland"_s),
			$of(u"អកឡែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Funafuti"_s),
			$of(u"ហ៊្វូណាហ៊្វូទី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Honolulu"_s),
			$of(u"ហូណូលូលូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Johnston"_s),
			$of(u"ចនស្តុន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pitcairn"_s),
			$of(u"ភីតខៃរ៉ិន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Casablanca"_s),
			$of(u"កាសាប្លាំងកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Libreville"_s),
			$of(u"លីប្រីវីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Lubumbashi"_s),
			$of(u"លូប៊ុមបាស៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Nouakchott"_s),
			$of(u"ណួកសុត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Porto-Novo"_s),
			$of(u"ព័រតូណូវ៉ូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Anchorage"_s),
			$of(u"អង់ចូរ៉ាក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Araguaina"_s),
			$of(u"អារ៉ាហ្គុយណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Boa_Vista"_s),
			$of(u"បៅ\u200bវីស្តា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Catamarca"_s),
			$of(u"កាតាម៉ាកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chihuahua"_s),
			$of(u"ជីហួហួ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fortaleza"_s),
			$of(u"ហ្វ័រតាឡេហ្សារ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Glace_Bay"_s),
			$of(u"ក្លាស\u200bបេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"កូសេបេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"ក្វាតេម៉ាឡា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guayaquil"_s),
			$of(u"ហ្គុយ៉ាគីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Matamoros"_s),
			$of(u"ម៉ាតាម៉ូរ៉ូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Menominee"_s),
			$of(u"ម៉េណូមីនី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Monterrey"_s),
			$of(u"ម៉ុនតេរ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Sao_Paulo"_s),
			$of(u"សៅ\u200bប៉ូឡូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Thomas"_s),
			$of(u"សាំង\u200bតូម៉ាស់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Vancouver"_s),
			$of(u"វ៉ាន់កូវើ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"ម៉ៅសាន់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Palmer"_s),
			$of(u"ផាល់ម័រ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Vostok"_s),
			$of(u"វ៉ូស្តុក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Kuala_Lumpur"_s),
			$of(u"កូឡាឡាំពួរ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Novokuznetsk"_s),
			$of(u"ណូវ៉ូឃូសណេតស្កិ៍"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Bratislava"_s),
			$of(u"ប្រាទីស្លាវ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"កូប៉ិនហាក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Luxembourg"_s),
			$of(u"លុចសំបួ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/San_Marino"_s),
			$of(u"សាំងម៉ារ៉ាំង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Simferopol"_s),
			$of(u"ស៊ីមហ្វើរ៉ុប៉ូល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Zaporozhye"_s),
			$of(u"ហ្សាប៉ូរ៉ូហ្ស៊ីយ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Enderbury"_s),
			$of(u"អ៊ីនដឺប៊ូរី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Galapagos"_s),
			$of(u"ហ្គាឡាប៉ាហ្គោស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kwajalein"_s),
			$of(u"ក្វាហ្សាលៀន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Marquesas"_s),
			$of(u"ម៉ាហ្គីសាស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Pago_Pago"_s),
			$of(u"ប៉ាហ្គោ ប៉ាហ្គោ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Rarotonga"_s),
			$of(u"រ៉ារ៉ូតុងហ្គា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Tongatapu"_s),
			$of(u"តុងហ្គាតាពូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Addis_Ababa"_s),
			$of(u"អាឌីសអាបេបា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Brazzaville"_s),
			$of(u"ប្រាស្ហាវីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Ouagadougou"_s),
			$of(u"អៅហ្គាឌូហ្គូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"កូស្តារីកា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Grand_Turk"_s),
			$of(u"ហ្គ្រេន\u200bទូក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guadeloupe"_s),
			$of(u"ហ្គោដេលូប៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Hermosillo"_s),
			$of(u"ហ៊ែម៉ូស៊ីឡូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kralendijk"_s),
			$of(u"ក្រាលែនឌីក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Louisville"_s),
			$of(u"លូអ៊ីវីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Martinique"_s),
			$of(u"ម៉ាទីនីក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Metlakatla"_s),
			$of(u"មេត្លា កាត្លា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montevideo"_s),
			$of(u"ម៉ុងតេវីដេអូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Montserrat"_s),
			$of(u"ម៉ុងស៊ែរ៉ាត\u200b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Paramaribo"_s),
			$of(u"ប៉ារ៉ាម៉ារីបូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rio_Branco"_s),
			$of(u"រីយ៉ូប្រានកូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Vincent"_s),
			$of(u"សាំង\u200bវីនសេន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Whitehorse"_s),
			$of(u"វ៉ាយហស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/McMurdo"_s),
			$of(u"ម៉ាក់មុយដូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Rothera"_s),
			$of(u"រ៉ូធីរ៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Srednekolymsk"_s),
			$of(u"ស្រីតនីកូលីម"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Yekaterinburg"_s),
			$of(u"យ៉េកាធឺរិនប៊ើក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Reykjavik"_s),
			$of(u"រ៉ៃក្យាវិក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/St_Helena"_s),
			$of(u"សាំងហេឡេណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Adelaide"_s),
			$of(u"អាដេឡែត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Brisbane"_s),
			$of(u"ប្រីសប៊ែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lindeman"_s),
			$of(u"លីនឌីម៉ែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Isle_of_Man"_s),
			$of(u"អែលអុហ្វម៉ែន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Kaliningrad"_s),
			$of(u"កាលីនីងហ្រ្គាដ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Kiritimati"_s),
			$of(u"គិរីទីម៉ាទិ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Johannesburg"_s),
			$of(u"ជូហានណេប៊ឺហ្គ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"អែលសាល់វ៉ាឌ័រ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Fort_Nelson"_s),
			$of(u"ហ្វតណេលសាន់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Los_Angeles"_s),
			$of(u"ឡូអង់ហ្គិឡេស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"ទីក្រុងម៉ិចស៊ីកូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"ប៉ាងនីទុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Porto_Velho"_s),
			$of(u"ព័រតូ\u200bវិលហូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Puerto_Rico"_s),
			$of(u"ព័រតូរីកូ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"រ៉េនីរីវើ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"តេហ្គូស៊ីហ្គាល់ប៉ា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"សាន់ដឺ\u200bបេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yellowknife"_s),
			$of(u"យេឡូណៃ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Arctic/Longyearbyen"_s),
			$of(u"ឡុង\u200bយ៉ា\u200bប៊ីយេន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Cape_Verde"_s),
			$of(u"កាប់វែរ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Lord_Howe"_s),
			$of(u"ឡតហូវ៉េ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Melbourne"_s),
			$of(u"ម៉េលប៊ន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Indian/Antananarivo"_s),
			$of(u"អង់តាណាណារីវ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Guadalcanal"_s),
			$of(u"ហ្គាដាល់ខាណាល់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dar_es_Salaam"_s),
			$of(u"ដាអ៊ីសាឡាំ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Blanc-Sablon"_s),
			$of(u"ប្លង់\u200bសាប់ឡុង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Buenos_Aires"_s),
			$of(u"ប៊ុយណូស៊ែ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Campo_Grande"_s),
			$of(u"ខេមប៉ូហ្គ្រង់\u200b"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Danmarkshavn"_s),
			$of(u"ដានម៉ាកស្ហាវិន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"ដាវសុន\u200bក្រិក"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Knox"_s),
			$of(u"ណុក ឥណ្ឌាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indianapolis"_s),
			$of(u"ឥណ្ឌាណាប៉ូលីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Punta_Arenas"_s),
			$of(u"ពុនតា អារ៉េណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"រ៉ាន់ឃីន\u200bអ៊ីនឡិត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santa_Isabel"_s),
			$of(u"សាន់តាអ៊ីសាប៊ែល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Scoresbysund"_s),
			$of(u"អ៊ីតូគ័រតូមីត"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Macquarie"_s),
			$of(u"ម៉ាកខ្វារី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Bougainville"_s),
			$of(u"បូហ្គែនវីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Port_Moresby"_s),
			$of(u"ព័រម៉ូរេសប៊ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"ខេមប្រីដបេ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"អាទីកូកាន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vevay"_s),
			$of(u"វេវ៉ៃ ឥណ្ឌាយ៉ាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Lower_Princes"_s),
			$of(u"ឡូវើ\u200bព្រីន\u200bហ្គ័រទ័រ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port_of_Spain"_s),
			$of(u"ព័រអេស្ប៉ាញ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"សាន់ដូម៉ាំង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Barthelemy"_s),
			$of(u"សាំង\u200bបាធីលីម៉ី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"ស្វីត\u200bខឺរិន"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Australia/Broken_Hill"_s),
			$of(u"ប្រូកខិនហីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bahia_Banderas"_s),
			$of(u"បាហៀបង់ដេរ៉ាស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Port-au-Prince"_s),
			$of(u"ព័រអូប្រ៉ាំង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/South_Georgia"_s),
			$of(u"ហ្សកហ្ស៊ី\u200bខាង\u200bត្បូង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Salta"_s),
			$of(u"សាល់តា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Marengo"_s),
			$of(u"ម៉ារេនកូ ឥណ្ឌាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Winamac"_s),
			$of(u"វីណាម៉ាក់ ឥណ្ឌាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Tucuman"_s),
			$of(u"ទូគូម៉ង់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Ushuaia"_s),
			$of(u"អ៊ុយសូអៃ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Tell_City"_s),
			$of(u"ទីក្រុងថែល ឥណ្ឌាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Vincennes"_s),
			$of(u"វិនសេណេស ឥណ្ឌាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/DumontDUrville"_s),
			$of(u"ឌុយម៉ុងដឺអ៊ុយវីល"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/La_Rioja"_s),
			$of(u"ឡារីយ៉ូហា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Juan"_s),
			$of(u"សាំងហ្សង់"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/San_Luis"_s),
			$of(u"សាន់លូអ៊ីស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Indiana/Petersburg"_s),
			$of(u"ភីធើ\u200bប៊ឹក ឥណ្ឌាណា"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Kentucky/Monticello"_s),
			$of(u"ម៉ងទីសេឡូ កេនទូគី"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Beulah"_s),
			$of(u"ប៊ឺឡា ដាកូតា\u200bខាងជើង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/Center"_s),
			$of(u"សិនធឺ ដាកូតា\u200bខាង\u200bជើង"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Argentina/Rio_Gallegos"_s),
			$of(u"រីយ៉ូហ្គាឡេហ្គូស"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/North_Dakota/New_Salem"_s),
			$of(u"ញូវ\u200bសាឡឹម ដាកូតា\u200bខាង\u200bជើង"_s)
		})
	}));
	return data;
}

TimeZoneNames_km::TimeZoneNames_km() {
}

$Class* TimeZoneNames_km::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_km, name, initialize, &_TimeZoneNames_km_ClassInfo_, allocate$TimeZoneNames_km);
	return class$;
}

$Class* TimeZoneNames_km::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun