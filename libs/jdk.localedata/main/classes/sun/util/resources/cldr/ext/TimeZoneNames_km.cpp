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

void TimeZoneNames_km::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_km::getContents() {
	$useLocalObjectStack();
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
			"America/Los_Angeles"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Denver"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Phoenix"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Chicago"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/New_York"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indianapolis"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Honolulu"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Anchorage"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Halifax"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Sitka"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/St_Johns"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"Europe/Paris"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Jerusalem"_s,
			Israel
		}),
		$$new($ObjectArray, {
			"Asia/Tokyo"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"Europe/Bucharest"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Shanghai"_s,
			China
		}),
		$$new($ObjectArray, {
			"UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"ACT"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"AET"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"ART"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"AST"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"BET"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"BST"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"CAT"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"CNT"_s,
			Newfoundland
		}),
		$$new($ObjectArray, {
			"CST"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"CTT"_s,
			China
		}),
		$$new($ObjectArray, {
			"EAT"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"ECT"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"JST"_s,
			Japan
		}),
		$$new($ObjectArray, {
			"MIT"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"NET"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"NST"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"PLT"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"PNT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PRT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"PST"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SST"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Etc/GMT"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Etc/UTC"_s,
			ETC_UTC
		}),
		$$new($ObjectArray, {
			"MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Asia/Aden"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Baku"_s,
			Azerbaijan
		}),
		$$new($ObjectArray, {
			"Asia/Dili"_s,
			East_Timor
		}),
		$$new($ObjectArray, {
			"Asia/Gaza"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Hovd"_s,
			Hovd
		}),
		$$new($ObjectArray, {
			"Asia/Omsk"_s,
			Omsk
		}),
		$$new($ObjectArray, {
			"Asia/Oral"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Amman"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Aqtau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Chita"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Dhaka"_s,
			Bangladesh
		}),
		$$new($ObjectArray, {
			"Asia/Dubai"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Kabul"_s,
			Afghanistan
		}),
		$$new($ObjectArray, {
			"Asia/Macau"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Qatar"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Seoul"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Africa/Juba"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Lome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Almaty"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Aqtobe"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Atyrau"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Beirut"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Brunei"_s,
			Brunei
		}),
		$$new($ObjectArray, {
			"Asia/Harbin"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hebron"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Kuwait"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Manila"_s,
			Philippines
		}),
		$$new($ObjectArray, {
			"Asia/Muscat"_s,
			Gulf
		}),
		$$new($ObjectArray, {
			"Asia/Riyadh"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Saigon"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Taipei"_s,
			Taipei
		}),
		$$new($ObjectArray, {
			"Asia/Tehran"_s,
			Iran
		}),
		$$new($ObjectArray, {
			"Europe/Kiev"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Oslo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Riga"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Rome"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Mahe"_s,
			Seychelles
		}),
		$$new($ObjectArray, {
			"Pacific/Yap"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Africa/Accra"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Cairo"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Ceuta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Dakar"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Lagos"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Tunis"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"America/Adak"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"America/Lima"_s,
			Peru
		}),
		$$new($ObjectArray, {
			"America/Nome"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Baghdad"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bahrain"_s,
			Arabian
		}),
		$$new($ObjectArray, {
			"Asia/Bangkok"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Asia/Bishkek"_s,
			Kyrgystan
		}),
		$$new($ObjectArray, {
			"Asia/Colombo"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Irkutsk"_s,
			Irkutsk
		}),
		$$new($ObjectArray, {
			"Asia/Jakarta"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Karachi"_s,
			Pakistan
		}),
		$$new($ObjectArray, {
			"Asia/Kuching"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Magadan"_s,
			Magadan
		}),
		$$new($ObjectArray, {
			"Asia/Nicosia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Rangoon"_s,
			Myanmar
		}),
		$$new($ObjectArray, {
			"Asia/Tbilisi"_s,
			Georgia
		}),
		$$new($ObjectArray, {
			"Asia/Thimphu"_s,
			Bhutan
		}),
		$$new($ObjectArray, {
			"Asia/Yakutsk"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Yerevan"_s,
			Armenia
		}),
		$$new($ObjectArray, {
			"Europe/Malta"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Minsk"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Sofia"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vaduz"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Cocos"_s,
			Cocos
		}),
		$$new($ObjectArray, {
			"Pacific/Apia"_s,
			Apia
		}),
		$$new($ObjectArray, {
			"Pacific/Fiji"_s,
			Fiji
		}),
		$$new($ObjectArray, {
			"Pacific/Guam"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Niue"_s,
			Niue
		}),
		$$new($ObjectArray, {
			"Pacific/Truk"_s,
			Truk
		}),
		$$new($ObjectArray, {
			"Pacific/Wake"_s,
			Wake
		}),
		$$new($ObjectArray, {
			"SystemV/AST4"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"SystemV/YST9"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Africa/Asmera"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Bamako"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bangui"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Banjul"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Bissau"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Douala"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Harare"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kigali"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Luanda"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lusaka"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Malabo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Maputo"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Maseru"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Niamey"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Aruba"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Bahia"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Belem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boise"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Jujuy"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Thule"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Asia/Ashgabat"_s,
			Turkmenistan
		}),
		$$new($ObjectArray, {
			"Asia/Calcutta"_s,
			India
		}),
		$$new($ObjectArray, {
			"Asia/Damascus"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Dushanbe"_s,
			Tajikistan
		}),
		$$new($ObjectArray, {
			"Asia/Jayapura"_s,
			Indonesia_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Katmandu"_s,
			Nepal
		}),
		$$new($ObjectArray, {
			"Asia/Khandyga"_s,
			Yakutsk
		}),
		$$new($ObjectArray, {
			"Asia/Makassar"_s,
			Indonesia_Central
		}),
		$$new($ObjectArray, {
			"Asia/Qostanay"_s,
			Kazakhstan_Eastern
		}),
		$$new($ObjectArray, {
			"Asia/Sakhalin"_s,
			Sakhalin
		}),
		$$new($ObjectArray, {
			"Asia/Tashkent"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Ust-Nera"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Europe/Athens"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Berlin"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Dublin"_s,
			$$new($StringArray, {
				u"ម៉ោងនៅគ្រីនវិច"_s,
				""_s,
				u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200bនៅ\u200bអៀរឡង់\u200b"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Jersey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Lisbon"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Europe/London"_s,
			$$new($StringArray, {
				u"ម៉ោងនៅគ្រីនវិច"_s,
				""_s,
				u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200b\u200bនៅ\u200bចក្រភព\u200bអង់គ្លេស"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Madrid"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Monaco"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Moscow"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Prague"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Skopje"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Tirane"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vienna"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Warsaw"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zagreb"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Zurich"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Indian/Chagos"_s,
			Indian_Ocean
		}),
		$$new($ObjectArray, {
			"Indian/Comoro"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Efate"_s,
			Vanuatu
		}),
		$$new($ObjectArray, {
			"Pacific/Nauru"_s,
			Nauru
		}),
		$$new($ObjectArray, {
			"Pacific/Palau"_s,
			Palau
		}),
		$$new($ObjectArray, {
			"SystemV/HST10"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Africa/Abidjan"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Algiers"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Africa/Conakry"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Kampala"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Mbabane"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"Africa/Nairobi"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Tripoli"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"America/Belize"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Bogota"_s,
			Colombia
		}),
		$$new($ObjectArray, {
			"America/Cancun"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cayman"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Cuiaba"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Dawson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Guyana"_s,
			Guyana
		}),
		$$new($ObjectArray, {
			"America/Havana"_s,
			Cuba
		}),
		$$new($ObjectArray, {
			"America/Inuvik"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Juneau"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/La_Paz"_s,
			Bolivia
		}),
		$$new($ObjectArray, {
			"America/Maceio"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Manaus"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Merida"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Nassau"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Panama"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Recife"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Regina"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Asia/Chongqing"_s,
			China
		}),
		$$new($ObjectArray, {
			"Asia/Hong_Kong"_s,
			Hong_Kong
		}),
		$$new($ObjectArray, {
			"Asia/Pontianak"_s,
			Indonesia_Western
		}),
		$$new($ObjectArray, {
			"Asia/Pyongyang"_s,
			Korea
		}),
		$$new($ObjectArray, {
			"Asia/Qyzylorda"_s,
			Kazakhstan_Western
		}),
		$$new($ObjectArray, {
			"Asia/Samarkand"_s,
			Uzbekistan
		}),
		$$new($ObjectArray, {
			"Asia/Singapore"_s,
			Singapore
		}),
		$$new($ObjectArray, {
			"Asia/Vientiane"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Europe/Andorra"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Belfast"_s,
			$$new($StringArray, {
				u"ម៉ោងនៅគ្រីនវិច"_s,
				""_s,
				u"ម៉ោង\u200bរដូវ\u200bក្ដៅ\u200b\u200bនៅ\u200bចក្រភព\u200bអង់គ្លេស"_s,
				""_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"Europe/Tallinn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Vatican"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Vilnius"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Mayotte"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Reunion"_s,
			Reunion
		}),
		$$new($ObjectArray, {
			"Pacific/Easter"_s,
			Easter
		}),
		$$new($ObjectArray, {
			"Pacific/Kosrae"_s,
			Kosrae
		}),
		$$new($ObjectArray, {
			"Pacific/Majuro"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Midway"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Noumea"_s,
			New_Caledonia
		}),
		$$new($ObjectArray, {
			"Pacific/Ponape"_s,
			Ponape
		}),
		$$new($ObjectArray, {
			"Pacific/Saipan"_s,
			Chamorro
		}),
		$$new($ObjectArray, {
			"Pacific/Tahiti"_s,
			Tahiti
		}),
		$$new($ObjectArray, {
			"Pacific/Tarawa"_s,
			Gilbert_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Wallis"_s,
			Wallis
		}),
		$$new($ObjectArray, {
			"Africa/Blantyre"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Djibouti"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Freetown"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Gaborone"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Khartoum"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Kinshasa"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Monrovia"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Ndjamena"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Sao_Tome"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Timbuktu"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Windhoek"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"America/Antigua"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Caracas"_s,
			Venezuela
		}),
		$$new($ObjectArray, {
			"America/Cayenne"_s,
			French_Guiana
		}),
		$$new($ObjectArray, {
			"America/Cordoba"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Creston"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Curacao"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Detroit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Godthab"_s,
			Greenland_Western
		}),
		$$new($ObjectArray, {
			"America/Grenada"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Iqaluit"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Jamaica"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Managua"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Marigot"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Mendoza"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Moncton"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Nipigon"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Noronha"_s,
			Noronha
		}),
		$$new($ObjectArray, {
			"America/Ojinaga"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Tijuana"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"America/Toronto"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Tortola"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Yakutat"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Asia/Choibalsan"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Phnom_Penh"_s,
			Indochina
		}),
		$$new($ObjectArray, {
			"Atlantic/Azores"_s,
			Azores
		}),
		$$new($ObjectArray, {
			"Atlantic/Canary"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Faeroe"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Australia/Eucla"_s,
			Australia_CentralWestern
		}),
		$$new($ObjectArray, {
			"Australia/Perth"_s,
			Australia_Western
		}),
		$$new($ObjectArray, {
			"Europe/Belgrade"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Brussels"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Budapest"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Busingen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Chisinau"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Guernsey"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Helsinki"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Sarajevo"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Uzhgorod"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Maldives"_s,
			Maldives
		}),
		$$new($ObjectArray, {
			"Pacific/Chatham"_s,
			Chatham
		}),
		$$new($ObjectArray, {
			"Pacific/Fakaofo"_s,
			Tokelau
		}),
		$$new($ObjectArray, {
			"Pacific/Gambier"_s,
			Gambier
		}),
		$$new($ObjectArray, {
			"Pacific/Norfolk"_s,
			Norfolk
		}),
		$$new($ObjectArray, {
			"SystemV/AST4ADT"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"SystemV/CST6CDT"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"SystemV/EST5EDT"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"SystemV/MST7MDT"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"SystemV/PST8PDT"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"SystemV/YST9YDT"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"Africa/Bujumbura"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Mogadishu"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Anguilla"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Asuncion"_s,
			Paraguay
		}),
		$$new($ObjectArray, {
			"America/Barbados"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Dominica"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Edmonton"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mazatlan"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Miquelon"_s,
			Pierre_Miquelon
		}),
		$$new($ObjectArray, {
			"America/Montreal"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Resolute"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santarem"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Santiago"_s,
			Chile
		}),
		$$new($ObjectArray, {
			"America/Shiprock"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/St_Kitts"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Lucia"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Winnipeg"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/Davis"_s,
			Davis
		}),
		$$new($ObjectArray, {
			"Antarctica/Syowa"_s,
			Syowa
		}),
		$$new($ObjectArray, {
			"Antarctica/Troll"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Asia/Krasnoyarsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Asia/Novosibirsk"_s,
			Novosibirsk
		}),
		$$new($ObjectArray, {
			"Asia/Ulaanbaatar"_s,
			Mongolia
		}),
		$$new($ObjectArray, {
			"Asia/Vladivostok"_s,
			Vladivostok
		}),
		$$new($ObjectArray, {
			"Atlantic/Bermuda"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"Atlantic/Madeira"_s,
			Europe_Western
		}),
		$$new($ObjectArray, {
			"Atlantic/Stanley"_s,
			Falkland
		}),
		$$new($ObjectArray, {
			"Australia/Currie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Darwin"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Hobart"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Sydney"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Amsterdam"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Gibraltar"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Ljubljana"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Mariehamn"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Podgorica"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Stockholm"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Volgograd"_s,
			Volgograd
		}),
		$$new($ObjectArray, {
			"Indian/Christmas"_s,
			Christmas
		}),
		$$new($ObjectArray, {
			"Indian/Kerguelen"_s,
			French_Southern
		}),
		$$new($ObjectArray, {
			"Indian/Mauritius"_s,
			Mauritius
		}),
		$$new($ObjectArray, {
			"Pacific/Auckland"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Pacific/Funafuti"_s,
			Tuvalu
		}),
		$$new($ObjectArray, {
			"Pacific/Johnston"_s,
			Hawaii_Aleutian
		}),
		$$new($ObjectArray, {
			"Pacific/Pitcairn"_s,
			Pitcairn
		}),
		$$new($ObjectArray, {
			"Africa/Libreville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Lubumbashi"_s,
			Africa_Central
		}),
		$$new($ObjectArray, {
			"Africa/Nouakchott"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Africa/Porto-Novo"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"America/Araguaina"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Boa_Vista"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Catamarca"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Chihuahua"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Fortaleza"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/Glace_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Goose_Bay"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Guatemala"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Guayaquil"_s,
			Ecuador
		}),
		$$new($ObjectArray, {
			"America/Matamoros"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Menominee"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Monterrey"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Sao_Paulo"_s,
			Brasilia
		}),
		$$new($ObjectArray, {
			"America/St_Thomas"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Vancouver"_s,
			America_Pacific
		}),
		$$new($ObjectArray, {
			"Antarctica/Mawson"_s,
			Mawson
		}),
		$$new($ObjectArray, {
			"Antarctica/Vostok"_s,
			Vostok
		}),
		$$new($ObjectArray, {
			"Asia/Kuala_Lumpur"_s,
			Malaysia
		}),
		$$new($ObjectArray, {
			"Asia/Novokuznetsk"_s,
			Krasnoyarsk
		}),
		$$new($ObjectArray, {
			"Europe/Bratislava"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Copenhagen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Luxembourg"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/San_Marino"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Europe/Simferopol"_s,
			Moscow
		}),
		$$new($ObjectArray, {
			"Europe/Zaporozhye"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Enderbury"_s,
			Phoenix_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Galapagos"_s,
			Galapagos
		}),
		$$new($ObjectArray, {
			"Pacific/Kwajalein"_s,
			Marshall_Islands
		}),
		$$new($ObjectArray, {
			"Pacific/Marquesas"_s,
			Marquesas
		}),
		$$new($ObjectArray, {
			"Pacific/Pago_Pago"_s,
			Samoa
		}),
		$$new($ObjectArray, {
			"Pacific/Rarotonga"_s,
			Cook
		}),
		$$new($ObjectArray, {
			"Pacific/Tongatapu"_s,
			Tonga
		}),
		$$new($ObjectArray, {
			"Africa/Addis_Ababa"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Africa/Brazzaville"_s,
			Africa_Western
		}),
		$$new($ObjectArray, {
			"Africa/Ouagadougou"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Costa_Rica"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Grand_Turk"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Guadeloupe"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Hermosillo"_s,
			Mexico_Pacific
		}),
		$$new($ObjectArray, {
			"America/Kralendijk"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Louisville"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Martinique"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Metlakatla"_s,
			Alaska
		}),
		$$new($ObjectArray, {
			"America/Montevideo"_s,
			Uruguay
		}),
		$$new($ObjectArray, {
			"America/Montserrat"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Paramaribo"_s,
			Suriname
		}),
		$$new($ObjectArray, {
			"America/St_Vincent"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Whitehorse"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Antarctica/McMurdo"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Antarctica/Rothera"_s,
			Rothera
		}),
		$$new($ObjectArray, {
			"Asia/Yekaterinburg"_s,
			Yekaterinburg
		}),
		$$new($ObjectArray, {
			"Atlantic/Jan_Mayen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Reykjavik"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Atlantic/St_Helena"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Australia/Adelaide"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"Australia/Brisbane"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Australia/Lindeman"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Europe/Isle_of_Man"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"Europe/Kaliningrad"_s,
			Europe_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Kiritimati"_s,
			Line_Islands
		}),
		$$new($ObjectArray, {
			"Africa/Johannesburg"_s,
			Africa_Southern
		}),
		$$new($ObjectArray, {
			"America/El_Salvador"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Fort_Nelson"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Mexico_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Pangnirtung"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Porto_Velho"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Puerto_Rico"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Rainy_River"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Tegucigalpa"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Thunder_Bay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Yellowknife"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"Arctic/Longyearbyen"_s,
			Europe_Central
		}),
		$$new($ObjectArray, {
			"Atlantic/Cape_Verde"_s,
			Cape_Verde
		}),
		$$new($ObjectArray, {
			"Australia/Lord_Howe"_s,
			Lord_Howe
		}),
		$$new($ObjectArray, {
			"Australia/Melbourne"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Indian/Antananarivo"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Guadalcanal"_s,
			Solomon
		}),
		$$new($ObjectArray, {
			"Africa/Dar_es_Salaam"_s,
			Africa_Eastern
		}),
		$$new($ObjectArray, {
			"America/Blanc-Sablon"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Buenos_Aires"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Campo_Grande"_s,
			Amazon
		}),
		$$new($ObjectArray, {
			"America/Danmarkshavn"_s,
			GMT
		}),
		$$new($ObjectArray, {
			"America/Dawson_Creek"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Indiana/Knox"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Rankin_Inlet"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Santa_Isabel"_s,
			Mexico_Northwest
		}),
		$$new($ObjectArray, {
			"America/Scoresbysund"_s,
			Greenland_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/Macquarie"_s,
			Australia_Eastern
		}),
		$$new($ObjectArray, {
			"Pacific/Port_Moresby"_s,
			Papua_New_Guinea
		}),
		$$new($ObjectArray, {
			"America/Cambridge_Bay"_s,
			America_Mountain
		}),
		$$new($ObjectArray, {
			"America/Coral_Harbour"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vevay"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Lower_Princes"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Port_of_Spain"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Santo_Domingo"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/St_Barthelemy"_s,
			Atlantic
		}),
		$$new($ObjectArray, {
			"America/Swift_Current"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"Antarctica/South_Pole"_s,
			New_Zealand
		}),
		$$new($ObjectArray, {
			"Australia/Broken_Hill"_s,
			Australia_Central
		}),
		$$new($ObjectArray, {
			"America/Bahia_Banderas"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Port-au-Prince"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Atlantic/South_Georgia"_s,
			South_Georgia
		}),
		$$new($ObjectArray, {
			"America/Argentina/Salta"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Marengo"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Indiana/Winamac"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/Argentina/Tucuman"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/Ushuaia"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Tell_City"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/Indiana/Vincennes"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"Antarctica/DumontDUrville"_s,
			DumontDUrville
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aden"_s,
			u"អាដែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"បាគូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"ដេលី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"កាសា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"ហូវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"អូមស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"អូរ៉ាល់"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/La_Rioja"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Juan"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Argentina/San_Luis"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/Indiana/Petersburg"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Amman"_s,
			u"អាម៉ាន់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"អាកទូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"ឈីតា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"ដាក្កា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"ឌុយបៃ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"កាប៊ុល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"ម៉ាកាវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"កាតា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"សេអ៊ូល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"តូក្យូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			u"ថមស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"America/Kentucky/Monticello"_s,
			America_Eastern
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Beulah"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/Center"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Juba"_s,
			u"ជូបា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"ឡូម៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"អាល់ម៉ាទី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"អាណាឌី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"អាកទូប៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			u"អាទីរ៉ូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"បេរូត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"ព្រុយណេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			u"ហេបរុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"កូវ៉ែត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"ម៉ានីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"ម៉ាស្កាត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"រីយ៉ាដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"ហូជីមីញ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"តៃប៉ិ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"តេហេរ៉ង់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"អ៊ូរាំហ្គី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"ទីក្រុង\u200bមិនស្គាល់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"កៀវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"អូស្លូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"រីហ្កា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"រ៉ូម"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"ម៉ាហេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"អាក្រា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"គែរ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"ឈៀតា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"ដាកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"ឡាហ្គូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"ទុយនីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"អាដាក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"លីម៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"ណូម"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"បាកដាដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"បារ៉ែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"បាងកក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			u"បានូល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"ប៊ីស្កេក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"កូឡុំបូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"អៀរគុតស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"ហ្សាការតា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"ការ៉ាជី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"ឃឺតចីង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"ម៉ាហ្គាដាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"នីកូស៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"រ៉ង់ហ្គូន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"ប៊ីលីស៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"ធីមភូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"យ៉ាគុតស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"យ៉េរ៉េវ៉ាន់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			u"គីរ៉ូវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"ម៉ាល់ត៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"មីនស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"ប៉ារីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"សូហ៊្វីយ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"វ៉ាឌូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"កូកូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"អាពី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"ហ្វីជី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"ហ្គាំ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"នីវ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"ឈូអុក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"វ៉ាគី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"អាស្មារ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"បាម៉ាកូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"បង់ហ្គី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"បង់ហ្ស៊ុល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"ប៊ីស្សូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"ឌូអ៊ូឡា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"ហារ៉ារ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"គីហ្គាលី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"លូអង់ដា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"លូសាកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"ម៉ាឡាបូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"ម៉ាពុយតូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"ម៉ាសេរុយ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"នីញ៉ាម៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"អារ៉ូបា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"បាហៀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"បេឡឹម"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"ប៊ូស៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"សូសុយ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			u"ស៊ីតកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"ធុឡេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"អាសហ្គាបាត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"កុលកាតា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"ដាម៉ាស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"ឌូស្ហាន់បេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"ចាយ៉ាភូរ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"កាត់ម៉ាន់ឌូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			u"ខាន់ឌីហ្គា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"ម៉ាកាសសារ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			u"កូស្ដេណេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"សាខាលីន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"សៀងហៃ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"តាស្កិន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"អូស្តណេរ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"អាថែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"បែរឡាំង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"ឌុយប្លាំង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"ជេស៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"លីសបោន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"ឡុងដ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"ម៉ាឌ្រីដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"ម៉ូណាកូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"មូស្គូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"ប្រាក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"សាម៉ារ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			u"ស្កុបជេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"ទីរ៉ាណេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"វីយែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"វ៉ាសូវី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			u"សាគ្រែប"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"ហ៊្សូរីច"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"កាហ្គោ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"កូម័រ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"អ៊ីហ្វាតេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"ណូរូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"ប៉ាឡៅ"_s
		}),
		$$new($ObjectArray, {
			"America/Argentina/Rio_Gallegos"_s,
			Argentina
		}),
		$$new($ObjectArray, {
			"America/North_Dakota/New_Salem"_s,
			America_Central
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Abidjan"_s,
			u"អាប៊ីដ្យាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"អាល់ហ្សេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"កូណាគ្រី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"កំប៉ាឡា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"បាបាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"ណៃរ៉ូប៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"ទ្រីប៉ូលី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"បេលី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"បូហ្គោតា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"ខានខុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"កៃមែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"គុយអាបា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"ដាវសុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"ដែនវើ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"ហ្គីយ៉ាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"ឡាហាវ៉ាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"អ៊ីនូវីក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"ហ្យូនៀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"ឡាប៉ាស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"ម៉ាកសេអូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"ម៉ាណាអ៊ូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"ម៉េរីដា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"ណាស្សូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"ប៉ាណាម៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"រ៉េស៊ីហ្វី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"រ៉េហ្គីណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			u"ហ្វ៉ាម៉ាហ្គុស្តា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"ហុងកុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"ហ្ស៊េរុយសាឡិម"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"កាំឆាតកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"ប៉ុនទីអាណាក់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"ព្យុងយ៉ាង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"គីហ្ស៊ីឡូដា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"សាម៉ាកាន់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"សិង្ហបូរី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"វៀងចន្ទន៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"អង់ដូរ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			u"សារ៉ាតាវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"តាលិន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"វ៉ាទីកង់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"វីលនីញូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"ម៉ាយុត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"រេអ៊ុយ៉ុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"អ៊ីស្ទ័រ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"កូស្រែ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"ម៉ាហ្សូរ៉ូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"មីតវ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"ណូមៀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"ផុនប៉ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"សៃប៉ាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"តាហីទី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"តារ៉ាវ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"វ៉ាលីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"ប្លាំងទីរ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"ជីប៊ូទី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"អែល\u200bអ៊ុយញៀន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"ហ្វ្រីថោន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"ហ្គាបូរ៉ូន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"ខាទុំ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"គីនស្ហាសា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"ម៉ុងរ៉ូវីយ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"ដ្យាមេណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"សៅតូម៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"វីនដុក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"អង់ទីហ្គា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"ការ៉ាកាស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"កាយ៉េន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"ស៊ីកាហ្គោ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"កូដូបា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			u"ក្រេស្តុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"កូរ៉ាកៅ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"ដេត្រូអ៊ីត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"នូក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"ហ្គ្រើណាដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"ហាលីហ្វាក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"អ៊ីកាឡូអ៊ីត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"ហ្សាម៉ាអ៊ីក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"ម៉ាណាហ្គា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			u"ម៉ារីហ្គុត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"ម៉ែនឌូហ្សា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"ម៉ុងតុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"នីពីកុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"ណូរ៉ុនញ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			u"អូជីណាហ្កា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"ផូនីក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"ទីយ្យូអាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"តូរ៉ុនតូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"តូតូឡា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"យ៉ាគូតាត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"ឈូបាល់សាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"ភ្នំពេញ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"អាសូរ៉េស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"កាណារី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"ហ្វារ៉ូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"អ៊ុយក្លា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"ភឺធ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			u"បែលក្រាដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"ព្រុចសែល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"ប៊ុយដាប៉ែស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"ប៊ូស៊ីងហ្គែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"ជីស៊ីណូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"ហ្គេនស៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"ហែលស៊ិនគី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"អ៊ីស្តង់ប៊ុល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			u"សារ៉ាយ៉េវ៉ូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"អ៊ុយហ្គោរ៉ូដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"ម៉ាល់ឌីវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"ចាថាំ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"ហ្វាកៅហ្វូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"ហ្គាំបៀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"ណ័រហ្វុក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"ប៊ូយ៉ាំប៊ូរ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"ម៉ូហ្គាឌីស្យូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"អង់ហ្គីឡា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"អាសង់ស្យុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"បាបាដុស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"ដូមីនីក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"អែតម៉ុងតុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"អ៊ីរ៉ុយណេភី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"ម៉ាហ្សាតឡង់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"មីហ្គីឡុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"ញូវយ៉ក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"រ៉េ\u200bស៊ូឡូត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			u"សាន់តារឹម"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"សាន់ទីអេហ្គោ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"សាំង\u200bចន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"សាំង\u200bឃីត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"សាំង\u200bលូសៀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"វីនីភិក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"កាសី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"ដាវីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"ស៊ីយ៉ូវ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			u"ត្រូល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"ក្រាសនុយ៉ាក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"ណូវ៉ូស៊ីប៊ឺក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"អ៊ូឡង់បាទ័រ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"វ៉្លាដីវ៉ូស្តុក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"ប៉ឺមុយដា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"ម៉ាដៀរ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"ស្តង់លី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"ខូរៀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"ដាវីន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"ហូបាត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"ស៊ីដនី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"អាំស្ទែដាំ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"អាស្ត្រាខាន់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"ប៊ុយការ៉េស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"ហ្ស៊ីប្រាល់តា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"ជូបហ្សាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			u"ម៉ារៀហាំ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			u"ប៉ូដហ្គោរីកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"ស្តុកខុល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"អុលយ៉ាណូវស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"វ៉ុលហ្គោហ្គ្រាដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"គ្រីស្មាស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"ឃឺហ្គុយឡែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"ម៉ូរីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"អកឡែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"ហ៊្វូណាហ៊្វូទី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"ហូណូលូលូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"ចនស្តុន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"ភីតខៃរ៉ិន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"កាសាប្លាំងកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"លីប្រីវីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"លូប៊ុមបាស៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"ណួកសុត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"ព័រតូណូវ៉ូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"អង់ចូរ៉ាក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"អារ៉ាហ្គុយណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"បៅ\u200bវីស្តា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"កាតាម៉ាកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"ជីហួហួ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"ហ្វ័រតាឡេហ្សារ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"ក្លាស\u200bបេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"កូសេបេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"ក្វាតេម៉ាឡា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"ហ្គុយ៉ាគីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			u"ម៉ាតាម៉ូរ៉ូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"ម៉េណូមីនី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"ម៉ុនតេរ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"សៅ\u200bប៉ូឡូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"សាំង\u200bតូម៉ាស់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"វ៉ាន់កូវើ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"ម៉ៅសាន់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"ផាល់ម័រ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"វ៉ូស្តុក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"កូឡាឡាំពួរ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"ណូវ៉ូឃូសណេតស្កិ៍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			u"ប្រាទីស្លាវ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"កូប៉ិនហាក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"លុចសំបួ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"សាំងម៉ារ៉ាំង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"ស៊ីមហ្វើរ៉ុប៉ូល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"ហ្សាប៉ូរ៉ូហ្ស៊ីយ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"អ៊ីនដឺប៊ូរី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"ហ្គាឡាប៉ាហ្គោស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"ក្វាហ្សាលៀន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"ម៉ាហ្គីសាស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"ប៉ាហ្គោ ប៉ាហ្គោ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"រ៉ារ៉ូតុងហ្គា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"តុងហ្គាតាពូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"អាឌីសអាបេបា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"ប្រាស្ហាវីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"អៅហ្គាឌូហ្គូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"កូស្តារីកា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"ហ្គ្រេន\u200bទូក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"ហ្គោដេលូប៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"ហ៊ែម៉ូស៊ីឡូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"ក្រាលែនឌីក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"លូអ៊ីវីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"ម៉ាទីនីក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			u"មេត្លា កាត្លា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"ម៉ុងតេវីដេអូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"ម៉ុងស៊ែរ៉ាត\u200b"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"ប៉ារ៉ាម៉ារីបូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"រីយ៉ូប្រានកូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"សាំង\u200bវីនសេន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"វ៉ាយហស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"ម៉ាក់មុយដូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"រ៉ូធីរ៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"ស្រីតនីកូលីម"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"យ៉េកាធឺរិនប៊ើក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"រ៉ៃក្យាវិក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"សាំងហេឡេណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"អាដេឡែត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"ប្រីសប៊ែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"លីនឌីម៉ែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			u"អែលអុហ្វម៉ែន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"កាលីនីងហ្រ្គាដ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"គិរីទីម៉ាទិ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"ជូហានណេប៊ឺហ្គ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"អែលសាល់វ៉ាឌ័រ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			u"ហ្វតណេលសាន់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"ឡូអង់ហ្គិឡេស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"ទីក្រុងម៉ិចស៊ីកូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"ប៉ាងនីទុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"ព័រតូ\u200bវិលហូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"ព័រតូរីកូ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"រ៉េនីរីវើ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			u"តេហ្គូស៊ីហ្គាល់ប៉ា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"សាន់ដឺ\u200bបេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"យេឡូណៃ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"ឡុង\u200bយ៉ា\u200bប៊ីយេន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"កាប់វែរ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"ឡតហូវ៉េ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"ម៉េលប៊ន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"អង់តាណាណារីវ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"ហ្គាដាល់ខាណាល់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"ដាអ៊ីសាឡាំ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"ប្លង់\u200bសាប់ឡុង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"ប៊ុយណូស៊ែ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"ខេមប៉ូហ្គ្រង់\u200b"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"ដានម៉ាកស្ហាវិន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"ដាវសុន\u200bក្រិក"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"ណុក ឥណ្ឌាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"ឥណ្ឌាណាប៉ូលីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			u"ពុនតា អារ៉េណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"រ៉ាន់ឃីន\u200bអ៊ីនឡិត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santa_Isabel"_s,
			u"សាន់តាអ៊ីសាប៊ែល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"អ៊ីតូគ័រតូមីត"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			u"ម៉ាកខ្វារី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			u"បូហ្គែនវីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"ព័រម៉ូរេសប៊ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"ខេមប្រីដបេ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"អាទីកូកាន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"វេវ៉ៃ ឥណ្ឌាយ៉ាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			u"ឡូវើ\u200bព្រីន\u200bហ្គ័រទ័រ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"ព័រអេស្ប៉ាញ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"សាន់ដូម៉ាំង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"សាំង\u200bបាធីលីម៉ី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"ស្វីត\u200bខឺរិន"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"ប្រូកខិនហីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			u"បាហៀបង់ដេរ៉ាស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"ព័រអូប្រ៉ាំង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"ហ្សកហ្ស៊ី\u200bខាង\u200bត្បូង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			u"សាល់តា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"ម៉ារេនកូ ឥណ្ឌាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"វីណាម៉ាក់ ឥណ្ឌាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"ទូគូម៉ង់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"អ៊ុយសូអៃ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"ទីក្រុងថែល ឥណ្ឌាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"វិនសេណេស ឥណ្ឌាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"ឌុយម៉ុងដឺអ៊ុយវីល"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"ឡារីយ៉ូហា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"សាំងហ្សង់"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"សាន់លូអ៊ីស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"ភីធើ\u200bប៊ឹក ឥណ្ឌាណា"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"ម៉ងទីសេឡូ កេនទូគី"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"ប៊ឺឡា ដាកូតា\u200bខាងជើង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"សិនធឺ ដាកូតា\u200bខាង\u200bជើង"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"រីយ៉ូហ្គាឡេហ្គូស"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"ញូវ\u200bសាឡឹម ដាកូតា\u200bខាង\u200bជើង"_s
		})
	}));
	return data;
}

TimeZoneNames_km::TimeZoneNames_km() {
}

$Class* TimeZoneNames_km::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_km, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_km, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_km",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_km, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_km);
	});
	return class$;
}

$Class* TimeZoneNames_km::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun