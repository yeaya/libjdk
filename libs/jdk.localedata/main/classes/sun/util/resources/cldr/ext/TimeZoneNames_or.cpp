#include <sun/util/resources/cldr/ext/TimeZoneNames_or.h>
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

void TimeZoneNames_or::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_or::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"ଗ୍ରୀନୱିଚ୍ ମିନ୍ ସମୟ"_s,
		"GMT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"ଆକା ମାନକ ସମୟ"_s,
		""_s,
		u"ଆକା ଗ୍ରୀଷ୍ମ ସମୟ"_s,
		""_s,
		u"ଆକା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"ଆପିଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆପିଆ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଆପିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"କୁକ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କୁକ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ଅର୍ଦ୍ଧ ଗୀଷ୍ମକାଳୀନ ସମୟ"_s,
		""_s,
		u"କୁକ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"କ୍ୟୁବା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କ୍ୟୁବା ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"କ୍ୟୁବା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"ଫିଜି ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଫିଜି ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଫିଜି ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"ଗଲ୍ଫ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"ହୋଭଡ୍\u200c ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ହୋଭଡ୍\u200c ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ହୋଭଡ୍\u200c ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"ଇରାନ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଇରାନ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଇରାନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"ନିୟୁ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"ଓମସ୍କ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଓମସ୍କ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଓମସ୍କ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"ପେରୁ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପେରୁ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ପେରୁ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"ଚୂକ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"ୱେକ୍\u200c ଦ୍ୱୀପ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"ଚିଲି ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଚିଲି ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଚିଲି ସମୟ"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"ଚୀନ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଚୀନ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଚୀନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"କୋକୋସ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"ଡେଭିସ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"ଭାରତ ମାନାଙ୍କ ସମୟ"_s,
		"IST"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"ଜାପାନ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଜାପାନ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଜାପାନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"କୋରିୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କୋରିୟ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"କୋରିୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"ନାଉରୁ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"ନେପାଳ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"ପାଲାଉ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"ସାମୋଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ସାମୋଆ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ସାମୋଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"ସୋୱା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"ଟୋଙ୍ଗା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଟୋଙ୍ଗା ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଟୋଙ୍ଗା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"ଆଲାସ୍କା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆଲାସ୍କା ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଆଲାସ୍କା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"ଆମାଜନ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆମାଜନ୍ ଗ୍ରୀଷ୍ମକାଳୀନ ସମୟ"_s,
		""_s,
		u"ଆମାଜନ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"ଅନାଡିର୍ ମାନକ ସମୟ"_s,
		""_s,
		u"ଅନାଡିର୍ ଗ୍ରୀଷ୍ମ ସମୟ"_s,
		""_s,
		u"ଅନାଡିର୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"ଆଜୋରେସ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆଜୋରେସ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଆଜୋରେସ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"ଭୁଟାନ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"ବ୍ରୁନେଇ ଡାରୁସାଲାମ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"ଇଷ୍ଟର୍\u200c ଆଇଲ୍ୟାଣ୍ଡ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଇଷ୍ଟର୍\u200c ଆଇଲ୍ୟାଣ୍ଡ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଇଷ୍ଟର୍\u200c ଆଇଲ୍ୟାଣ୍ଡ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"ଗୁଏନା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"ଇସ୍ରାଏଲ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଇସ୍ରାଏଲ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଇସ୍ରାଏଲ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"କୋସରେଇ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"ମାୱସନ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"ମସ୍କୋ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ମସ୍କୋ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ମସ୍କୋ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"ପୋନାପେ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"ସମାରା ମାନକ ସମୟ"_s,
		""_s,
		u"ସମାରା ଗ୍ରୀଷ୍ମ ସମୟ"_s,
		""_s,
		u"ସମାରା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"ତାହିତି ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"ତାଇପେଇ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ତାଇପେଇ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ତାଇପେଇ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"ତୁଭାଲୁ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"ଭୋଷ୍ଟୋକ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"ୱାଲିସ୍\u200c ଏବଂ ଫୁଟୁନା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"ଆରବୀୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆରବୀୟ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଆରବୀୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"ଆର୍ମେନିଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆର୍ମେନିଆ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଆର୍ମେନିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"ବଲିଭିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"ଚାଥାମ୍\u200c ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଚାଥାମ୍\u200c ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଚାଥାମ୍\u200c ସମୟ"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"ସମନ୍ୱିତ ସାର୍ବଜନୀନ ସମୟ"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"ଇକ୍ୱେଡର ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"ଗାମ୍ବିୟର୍ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"ଜର୍ଜିଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଜର୍ଜିଆ ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ଜର୍ଜିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"ଇଅରକୁଟସ୍କ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଇର୍କୁଟସ୍କ୍ ଗ୍ରୀଷ୍ମକାଳୀନ ସମୟ"_s,
		""_s,
		u"ଇଅରକୁଟସ୍କ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"ମାଗାଡାନ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ମାଗାଡାନ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ମାଗାଡାନ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"ମିଆଁମାର୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"ନରଫୋକ୍\u200c ଦ୍ୱୀପ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ନରଫୋକ୍\u200c ଦ୍ୱୀପ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ନରଫୋକ୍\u200c ଦ୍ୱୀପ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"ଫର୍ଣ୍ଣାଣ୍ଡୋ ଡି ନୋରୋନ୍ନା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଫର୍ଣ୍ଣାଣ୍ଡୋ ଡି ନୋରୋନ୍ନା ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଫର୍ଣ୍ଣାଣ୍ଡୋ ଡି ନୋରୋନ୍ନା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"ରିୟୁନିଅନ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"ରୋଥେରା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"ସୋଲୋମନ ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"ଟୋକେଲାଉ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"ଉରୁଗୁଏ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଉରୁଗୁଏ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଉରୁଗୁଏ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"ଭାନୁଆଟୁ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଭାନୁଆଟୁ ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ଭାନୁଆଟୁ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"ୟାକୁଟସ୍କ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ୟାକୁଟସ୍କ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ୟାକୁଟସ୍କ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"ଆଟଲାଣ୍ଟିକ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆଟଲାଣ୍ଟିକ୍ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଆଟଲାଣ୍ଟିକ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"ବ୍ରାସିଲିଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ବ୍ରାସିଲିଆ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ବ୍ରାସିଲିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"ଚାମୋରୋ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"କଲମ୍ବିଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କଲମ୍ବିଆ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"କଲମ୍ବିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"ଫକଲ୍ୟାଣ୍ଡ ଦ୍ୱୀପପୁଞ୍ଜ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଫକଲ୍ୟାଣ୍ଡ ଦ୍ୱୀପପୁଞ୍ଜ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଫକଲ୍ୟାଣ୍ଡ ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"ମାଲେସିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"ମାଳଦ୍ୱୀପ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"ଉଲାନ୍\u200cବାଟର୍\u200c ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଉଲାନ୍\u200c ବାଟର୍\u200c ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଉଲାନ୍\u200cବାଟର୍\u200c ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"ପାକିସ୍ତାନ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପାକିସ୍ତାନ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ପାକିସ୍ତାନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"ପାରାଗୁଏ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପାରାଗୁଏ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ପାରାଗୁଏ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"ପିଟକାରିନ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"ସଖାଲିନ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ସଖାଲିନ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ସଖାଲିନ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"ସୁରିନେମ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"ଆର୍ଜେଣ୍ଟିନା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆର୍ଜେଣ୍ଟିନା ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଆର୍ଜେଣ୍ଟିନା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"ଖ୍ରୀଷ୍ଟମାସ ଦ୍ୱୀପ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"ଗାଲାପାଗୋସ୍ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"ହଂ କଂ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ହଂ କଂ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ହଂ କଂ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"ଇଣ୍ଡୋଚାଇନା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"ପେଟ୍ରୋପାଭଲୋଭ୍ସକ-କମଚଟସ୍କି ମାନକ ସମୟ"_s,
		""_s,
		u"ପେଟ୍ରୋପାଭଲୋଭ୍ସକ-କମଚଟସ୍କି ଗ୍ରୀଷ୍ମ ସମୟ"_s,
		""_s,
		u"ପେଟ୍ରୋପାଭଲୋଭ୍ସକ-କମଚଟସ୍କି ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"କିର୍ଗିସ୍ତାନ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"ଲର୍ଡ ହୋୱେ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଲର୍ଡ ହୋୱେ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଲର୍ଡ ହୋୱେ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"ମାର୍କ୍ୱେସାସ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"ମୌରିସସ୍\u200c ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ମୌରିସସ୍\u200c ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ମୌରିସସ୍\u200c ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"ସିଙ୍ଗାପୁର୍\u200c ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"ଭେନିଜୁଏଲା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"ଭୋଲଗୋଗ୍ରାଡ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଭୋଲଗୋଗ୍ରାଡ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଭୋଲଗୋଗ୍ରାଡ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"ଆଜେରବାଇଜାନ ମାନଙ୍କ ସମୟ"_s,
		""_s,
		u"ଆଜେରବାଇଜାନ ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ଆଜେରବାଇଜାନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"ବାଂଲାଦେଶ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ବାଂଲାଦେଶ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ବାଂଲାଦେଶ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"କେପ୍\u200c ଭର୍ଦେ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କେପ୍\u200c ଭର୍ଦେ ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"କେପ୍\u200c ଭର୍ଦେ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"ପୂର୍ବ ତିମୋର୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"ସେଚେଲ୍ଲେସ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"ତାଜିକିସ୍ତାନ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"ଉଜବେକିସ୍ତାନ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଉଜବେକିସ୍ତାନ ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ଉଜବେକିସ୍ତାନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"ଆଫଗାନିସ୍ତାନ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"କ୍ରାସନୋୟାରସ୍କ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କ୍ରାସନୋୟାରସ୍କ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"କ୍ରାସନୋୟାରସ୍କ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"ନ୍ୟୁଜିଲାଣ୍ଡ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ନ୍ୟୁଜିଲାଣ୍ଡ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ନ୍ୟୁଜିଲାଣ୍ଡ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"ନୋଭୋସିବିରସ୍କ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ନୋଭୋସିବିରସ୍କ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ନୋଭୋସିବିରସ୍କ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"ଫିଲିପାଇନ୍\u200c ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଫିଲିପାଇନ୍\u200c ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଫିଲିପାଇନ୍\u200c ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"ଭ୍ଲାଡିଭୋଷ୍ଟୋକ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଭ୍ଲାଡିଭୋଷ୍ଟୋକ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ଭ୍ଲାଡିଭୋଷ୍ଟୋକ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"ଭାରତ ମାହାସାଗର ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"ଲାଇନ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"ନ୍ୟୁଫାଉଣ୍ଡଲ୍ୟାଣ୍ଡ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ନ୍ୟୁଫାଉଣ୍ଡଲ୍ୟାଣ୍ଡ୍ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ନ୍ୟୁଫାଉଣ୍ଡଲ୍ୟାଣ୍ଡ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"ତୁର୍କମେନିସ୍ତାନ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ତୁର୍କମେନିସ୍ତାନ ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ତୁର୍କମେନିସ୍ତାନ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"ଫ୍ରେଞ୍ଚ ଗୁଆନା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"ନ୍ୟୁ କାଲେଡୋନିଆ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ନ୍ୟୁ କାଲେଡୋନିଆ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ନ୍ୟୁ କାଲେଡୋନିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"ଦକ୍ଷିଣ ଜର୍ଜିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"ୟେକାଟେରିନବର୍ଗ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ୟେକାଟେରିନବର୍ଗ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ୟେକାଟେରିନବର୍ଗ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"ମଧ୍ୟ ଆଫ୍ରିକା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"ପୂର୍ବ ଆଫ୍ରିକା ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"ପଶ୍ଚିମ ଆଫ୍ରିକା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମ ଆଫ୍ରିକା ଖରାଦିନ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମ ଆଫ୍ରିକା ସମୟ"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"ଡୁମୋଣ୍ଟ-ଡି‘ଉରଭିଲ୍ଲେ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"କେନ୍ଦ୍ରୀୟ ୟୁରୋପୀୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କେନ୍ଦ୍ରୀୟ ୟୁରୋପୀୟ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"କେନ୍ଦ୍ରୀୟ ୟୁରୋପୀୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"ପୂର୍ବାଞ୍ଚଳ ୟୁରୋପୀୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବାଞ୍ଚଳ ୟୁରୋପୀୟ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବାଞ୍ଚଳ ୟୁରୋପୀୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"ପଶ୍ଚିମାଞ୍ଚଳ ୟୁରୋପୀୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମାଞ୍ଚଳ ୟୁରୋପୀୟ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମାଞ୍ଚଳ ୟୁରୋପୀୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"ମେକ୍ସିକାନ୍ ପାସିଫିକ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ମେକ୍ସିକାନ୍ ପାସିଫିକ୍ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ମେକ୍ସିକାନ୍ ପାସିଫିକ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"ଦକ୍ଷିଣ ଆଫ୍ରିକା ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"କେନ୍ଦ୍ରୀୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"କେନ୍ଦ୍ରୀୟ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"କେନ୍ଦ୍ରୀୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"ପୂର୍ବାଞ୍ଚଳ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବାଞ୍ଚଳ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବାଞ୍ଚଳ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"ପାସିଫିକ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପାସିଫିକ୍ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ପାସିଫିକ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"ଫ୍ରେଞ୍ଚ ଦକ୍ଷିଣ ଏବଂ ଆଣ୍ଟାର୍କାଟିକ୍\u200c ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"ଗିଲବର୍ଟ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"ହୱାଇ-ଆଲେଉଟିୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ହୱାଇ-ଆଲେଉଟିୟ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ହୱାଇ-ଆଲେଉଟିୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"ଫୋନିକ୍ସ ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"ସେଣ୍ଟ. ପିଏରେ ଏବଂ ମିକ୍ୟୁଲୋନ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ସେଣ୍ଟ. ପିଏରେ ଏବଂ ମିକ୍ୟୁଲୋନ୍ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ସେଣ୍ଟ. ପିଏରେ ଏବଂ ମିକ୍ୟୁଲୋନ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"ପାର୍ବତ୍ୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପାର୍ବତ୍ୟ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ପାର୍ବତ୍ୟ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"ମାର୍ଶାଲ୍\u200c ଦ୍ୱୀପପୁଞ୍ଜ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"ଉତ୍ତରପଶ୍ଚିମ ମେକ୍ସିକୋ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଉତ୍ତରପଶ୍ଚିମ ମେକ୍ସିକୋ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଉତ୍ତରପଶ୍ଚିମ ମେକ୍ସିକୋ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"ପପୁଆ ନ୍ୟୁ ଗୁନିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"ଅଷ୍ଟ୍ରେଲିୟ ମଧ୍ୟ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଅଷ୍ଟ୍ରେଲିୟ ମଧ୍ୟ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ମଧ୍ୟ ଅଷ୍ଟ୍ରେଲିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"ଅଷ୍ଟ୍ରେଲିୟ ପୂର୍ବ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଅଷ୍ଟ୍ରେଲିୟ ପୂର୍ବ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବ ଅଷ୍ଟ୍ରେଲିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"ଅଷ୍ଟ୍ରେଲିୟ ପଶ୍ଚିମ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଅଷ୍ଟ୍ରେଲିୟ ପଶ୍ଚିମ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମ ଅଷ୍ଟ୍ରେଲିଆ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"ପୂର୍ବ ଗ୍ରୀନଲ୍ୟାଣ୍ଡ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବ ଗ୍ରୀନଲ୍ୟାଣ୍ଡ୍ ଗ୍ରୀଷ୍ମକାଳ ସମୟ"_s,
		""_s,
		u"ପୂର୍ବ ଗ୍ରୀନଲ୍ୟାଣ୍ଡ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"ପଶ୍ଚିମ ଗ୍ରୀନଲ୍ୟାଣ୍ଡ୍ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମ ଗ୍ରୀନଲ୍ୟାଣ୍ଡ୍ ଗ୍ରୀଷ୍ମ ସମୟ"_s,
		""_s,
		u"ପଶ୍ଚିମ ଗ୍ରୀନଲ୍ୟାଣ୍ଡ୍ ସମୟ"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"ମଧ୍ୟ ଇଣ୍ଡୋନେସିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"ପୂର୍ବ ଇଣ୍ଡୋନେସିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"ପଶ୍ଚିମ ଇଣ୍ଡୋନେସିଆ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"ପୂର୍ବ କାଜାକସ୍ତାନ୍ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"ପଶ୍ଚିମ କାଜାକସ୍ତାନ ସମୟ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"ଅଷ୍ଟ୍ରେଲିୟ ମଧ୍ୟ ପଶ୍ଚିମ ମାନାଙ୍କ ସମୟ"_s,
		""_s,
		u"ଅଷ୍ଟ୍ରେଲିୟ ମଧ୍ୟ ପଶ୍ଚିମ ଦିବାଲୋକ ସମୟ"_s,
		""_s,
		u"ଅଷ୍ଟ୍ରେଲିୟ ମଧ୍ୟ ପଶ୍ଚିମ ସମୟ"_s,
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
			"Asia/Anadyr"_s,
			Anadyr
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
				u"ଗ୍ରୀନୱିଚ୍ ମିନ୍ ସମୟ"_s,
				"GMT"_s,
				u"ଆଇରିଶ୍\u200c ମାନାଙ୍କ ସମୟ"_s,
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
				u"ଗ୍ରୀନୱିଚ୍ ମିନ୍ ସମୟ"_s,
				"GMT"_s,
				u"ବ୍ରିଟିଶ୍\u200c ଗ୍ରୀଷ୍ମକାଳୀନ ସମୟ"_s,
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
			"Europe/Samara"_s,
			Samara
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
			"Asia/Kamchatka"_s,
			Kamchatka
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
				u"ଗ୍ରୀନୱିଚ୍ ମିନ୍ ସମୟ"_s,
				"GMT"_s,
				u"ବ୍ରିଟିଶ୍\u200c ଗ୍ରୀଷ୍ମକାଳୀନ ସମୟ"_s,
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
			"America/Eirunepe"_s,
			Acre
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
			"America/Rio_Branco"_s,
			Acre
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
			u"ଏଡେନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"ବାକୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"ଦିଲ୍ଲୀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"ଗାଜା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"ହୋଭଡ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"ଓମସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"ଓରାଲ୍\u200c"_s
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
			u"ଅମ୍ମାନ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"ଆକଟାଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"ଚିଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"ଢାକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"ଦୁବାଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"କାବୁଲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"ମାକାଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"କତାର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"ସିଓଲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"ଟୋକିଓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			u"ଟୋମସ୍କ"_s
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
			u"ଜୁବା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"ଲୋମ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"ଅଲମାଟି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"ଆନାଡୟାର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"ଆକଟୋବ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			u"ଅତିରାଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"ବୀରୁଟ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"ବ୍ରୁନେଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			u"ହେବ୍ରନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"କୁଏତ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"ମାନିଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"ମସ୍କାଟ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"ରିଆଦ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"ହୋ ଚି ମିନ୍\u200c ସିଟି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"ତାଇପେଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"ତେହେରାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"ଉରୁମକି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"ଅଜଣା ସହର"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"କିଏଭ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"ଓସଲୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"ରିଗା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"ରୋମ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"ମାହେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"ଆକାରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"କାଇରୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"ସେଉଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"ଡକାର"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"ଲାଗୋସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"ଟୁନିସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"ଆଡାକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"ଲିମା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"ନୋମେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"ବାଗଦାଦ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"ବାହାରିନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"ବ୍ୟାଙ୍ଗକକ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			u"ବାରନାଉଲ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"ବିଶକେକ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"କଲମ୍ବୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"ଇରକୁଟସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"ଜାକର୍ତ୍ତା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"କରାଚି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"କୁଚିଂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"ମାଗାଡାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"ନିକୋସିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"ୟାଙ୍ଗୁନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"ଟିବିଲିସି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"ଥିମ୍ପୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"ୟାକୁଟସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"ୟେରେଭାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			u"କିରୋଭ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"ମାଲଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"ମିନସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"ପେରିସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"ସୋଫିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"ଭାଡୁଜ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"କୋକୋସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"ଆପିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"ଫିଜି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"ଗୁଆମ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"ନିୟୂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"ଚୂକ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"ୱେକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"ଅସମରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"ବାମାକୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"ବାଙ୍ଗୁଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"ବାଞ୍ଜୁଲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"ବିସାଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"ଡଉଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"ହରାରେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"କିଗାଲି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"ଲୁଆଣ୍ଡା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"ଲୁସାକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"ମାଲାବୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"ମାପୁତୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"ମେସେରୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"ନିଆମି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"ଆରୁବା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"ବାହିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"ବେଲେମ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"ବୋଇସେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"ଜୁଜୁଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			u"ସିଟକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"ଥୁଲେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"ଆଶ୍\u200cଗାବୋଟ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"କୋଲକାତା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"ଡାମାସକସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"ଦୁଶାନବେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"ଜୟପୁରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"କାଠମାଣ୍ଡୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			u"ଖାନଡ୍ୟାଗା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"ମାକାସାର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			u"କୋଷ୍ଟନେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"ସଖାଲିନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"ସଂଘାଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"ତାଶକେଣ୍ଟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"ୟୁଷ୍ଟ-ନେରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"ଏଥେନ୍ସ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"ବର୍ଲିନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"ଡବଲିନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"ଜର୍ସି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"ଲିସବୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"ଲଣ୍ଡନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"ମାଡ୍ରିଡ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"ମୋନାକୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"ମସ୍କୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"ପ୍ରାଗ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"ସାମାରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			u"ସ୍କୋପଜେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"ଟିରାନେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"ଭିଏନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"ୱାରସୱା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			u"ଜାଗ୍ରେବ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"ଜୁରିକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"ଚାଗୋସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"କୋମୋରୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"ଇଫେଟ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"ନାଉରୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"ପାଲାଉ"_s
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
			u"ଆବିଦଜାନ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"ଅଲଜିୟର୍ସ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"କୋନାକ୍ରି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"କାମ୍ପାଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"ବାବେନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"ନାଇରୋବି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"ତ୍ରିପୋଲି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"ବେଲିଜେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"ବୋଗୋଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"କାନକୁନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"କାୟମ୍ୟାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"କୁଇବା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"ଡସନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"ଡେନଭିର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"ଗୁଏନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"ହାଭାନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"ଇନୁଭିକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"ଜୁନେଆଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"ଲା ପାଜ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"ମାସିଓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"ମାନାଉସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"ମେରିଡା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"ନାସାଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"ପାନାମା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"ରେସିଫି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"ରେଗିନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			u"ଫାମାଗୁଷ୍ଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"ହଂ କଂ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"ଜେରୁଜେଲମ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"କାମଚାଟକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"ପୋଣ୍ଟିଆନାକ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"ପୋୟଙ୍ଗୟାଙ୍ଗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"କୀଜିଲୋର୍ଡା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"ସମରକନ୍ଦ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"ସିଙ୍ଗାପୁର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"ଭିଏଣ୍ଟିଏନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"ଆନଡୋରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			u"ସାରାଟୋଭ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"ଟାଲିନ୍ନ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"ଭାଟିକାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"ଭିଲନିଉସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"ମାୟୋଟେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"ରିୟୁନିଅନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"ଇଷ୍ଟର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"କୋସରେଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"ମାଜୁରୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"ମିଡ୍\u200cୱେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"ନୌମିୟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"ପୋହନପେଇ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"ସାଇପାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"ତାହିତି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"ତାରୱା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"ୱାଲିସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"ବ୍ଲାଣ୍ଟାୟାର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"ଜିବୋଟି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"ଏଲ୍\u200c ଏୟନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"ଫ୍ରିଟାଉନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"ଗାବୋର୍ଣ୍ଣ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"ଖରଟୌମ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"କିନସାସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"ମନରୋଭିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"ଜାମେନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"ସାଓ ଟୋମେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"ୱିଣ୍ଡହୋଏକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"ଆଣ୍ଟିଗୁଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"କାରକାସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"କେୟେନ୍ନି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"ଚିକାଗୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"କୋର୍ଡୋବା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			u"କ୍ରେଷ୍ଟୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"କୁରାକୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"ଡେଟ୍ରୋଇଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"ନୁଉକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"ଗ୍ରେନାଡା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"ହାଲିଫ୍ୟାକ୍ସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"ଇକ୍ଵାଲୁଇଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"ଜାମାଇକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"ମାନାଗୁଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			u"ମାରିଗୋଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"ମେଣ୍ଡୋଜା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"ମାନକଟୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"ନିପିଗୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"ନୋରୋନ୍ନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			u"ଓଜିନାଗା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"ଫୋଇନିକ୍ସ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"ତିଜୁଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"ଟୋରୋଣ୍ଟୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"ଟୋରଟୋଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"ୟାକୁଟାଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"ଚୋଇବାଲସାନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"ଫନୋମ୍\u200c ପେନହ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"ଆଜୋରେସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"କାନାରେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"ଫାରୋଏ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"ୟୁକଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"ପର୍ଥ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			u"ବେଲଗ୍ରେଡେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"ବ୍ରସଲ୍ସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"ବୁଡାପେଷ୍ଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"ବୁସିନଗେନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"ଚିସିନୌ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"ଗୁଏରନସେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"ହେଲସିନକି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"ଇସ୍ତାନବୁଲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			u"ସାରାଜେଭୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"ଉଜହୋରୋଦ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"ମାଳଦ୍ୱୀପ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"ଚାଥାମ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"ଫାକାଓଫୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"ଗାମ୍ବିୟର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"ନରଫୋକ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"ବୁଜୁମ୍ବୁରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"ମୋଗାଡିଶୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"ଆଙ୍ଗୁଇଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"ଆସନସିଅନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"ବାର୍ବାଡୋସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"ଡୋମିନିକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"ଏଡମୋନଟୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"ଇରୁନେପେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"ମାନାଟଲାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"ମିକ୍ଵେଲୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"ନ୍ୟୁ ୟୋର୍କ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"ରିସୋଲୁଟେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			u"ସାଣ୍ଟାରେମ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"ସାଣ୍ଟିଆଗୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"ସେଣ୍ଟ୍. ଜନସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"ସେଣ୍ଟ୍ କିଟ୍ସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"ସେଣ୍ଟ୍. ଲୁସିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"ୱିନିପେଗ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"କାସେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"ଡେଭିସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"ସୋୱା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			u"ଟ୍ରୋଲ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"କ୍ରାସନୋୟାରସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"ନୋଭୋସିବିରସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"ଉଲାନ୍\u200cବାଟର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"ଭ୍ଲାଡିଭୋଷ୍ଟୋକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"ବର୍ମୁଡା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"ମାଡେଇରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"ଷ୍ଟାନଲି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"କ୍ୟୁରୀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"ଡାରୱିନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"ହୋବାର୍ଟ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"ସିଡନୀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"ଆମଷ୍ଟ୍ରେଡାମ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"ଆଷ୍ଟ୍ରାଖାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"ବୁଚାରେଷ୍ଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"ଜିବ୍ରାଲଟର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"ଲଜୁବ୍ଲଜାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			u"ମାରିଏହାମନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			u"ପୋଡଗୋରିକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"ଷ୍ଟକହୋମ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"ୟୁଲୟାନୋଭସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"ଭୋଲଗୋଗ୍ରାଡ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"ଖ୍ରୀଷ୍ଟମାସ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"କେରୁଗେଲେନ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"ମୌରିସସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"ଅକଲାଣ୍ଡ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"ଫୁନାଫୁଟି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"ହୋନୋଲୁଲୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"ଜନଷ୍ଟନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"ପିଟକାରିନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"କାସାବ୍ଲାଙ୍କା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"ଲିବ୍ରେଭିଲ୍ଲେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"ଲୁବୁମ୍ବାଶି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"ନୌକାଚୋଟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"ପୋଟୋ-ନୋଭୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"ଆଙ୍କରେଜ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"ଆରାଗୁଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"ବୋଆ ଭିଷ୍ଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"କାଟାମାର୍କା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"ଚିହୁଆହୁଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"ଫୋର୍ଟେଲେଜା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"ଗ୍ଲାସେ ବେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"ଗୁସ୍ ବେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"ଗୁଆତେମାଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"ଗୁୟାକ୍ୱିଲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			u"ମାଟାମୋରୋସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"ମେନୋମିନି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"ମୋନଟେରିଏ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"ସାଓ ପାଓଲୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"ସେଣ୍ଟ୍. ଥୋମାସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"ଭାଙ୍କୁଭର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"ମାୱସନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"ପାଲମର୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"ଭୋଷ୍ଟୋକ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"କ୍ୱାଲାଲମ୍ପୁର"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"ନୋଭୋକୁଜନେଟସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			u"ବ୍ରାଟିସଲାଭା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"କୋପେନହାଗେନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"ଲକ୍ସମବର୍ଗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"ସାନ୍ ମାରିନୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"ସିମଫେରୋପୋଲ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"ଜାପୋରୋଜହୟେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"ଏଣ୍ଡେରବୁରି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"ଗାଲାପାଗୋସ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"କ୍ୱାଜାଲେଇନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"ମାର୍କ୍ୱେସାସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"ପାଗୋ ପାଗୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"ରାରୋଟୋଙ୍ଗା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"ଟୋଙ୍ଗାଟାପୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"ଆଦିସ୍\u200c ଆବାବା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"ବ୍ରାଜାଭିଲ୍ଲେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"ଅଉଗାଡଉଗଉ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"କୋଷ୍ଟା ରିକା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"ଗ୍ରାଣ୍ଡ୍ ଟର୍କ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"ଗୁଆଡେଲୋଉପେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"ହେରମୋସିଲୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"କ୍ରାଲେଣ୍ଡଜିକ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"ଲୌଇସଭିଲ୍ଲେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"ମାର୍ଟିନିକ୍ୟୁ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			u"ମାଟଲାକାଟଲା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"ମଣ୍ଟେଭିଡିଓ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"ମୋନଟସେରରାଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"ପାରାମାରିବୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"ରିଓ ବ୍ରାଙ୍କୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"ସେଣ୍ଟ୍. ଭିନସେଣ୍ଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"ହ୍ଵାଇଟହର୍ସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"ମ୍ୟାକ୍\u200cମୁର୍ଡୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"ରୋଥେରା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"ସ୍ରେଡନେକୋଲୟମସ୍କ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"ୟେକାଟେରିନବର୍ଗ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"ରେୟକଜାଭିକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"ସେଣ୍ଟ୍\u200c ହେଲିନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"ଆଡିଲେଡ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"ବ୍ରିସବେନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"ଲିଣ୍ଡେମ୍ୟାନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			u"ଇସଲେ ଅଫ୍ ମେନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"କାଲିନିନଗ୍ରାଡ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"କିରିତିମାଟି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"ଜୋହାନ୍ସବର୍ଗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"ଏଲ୍ ସାଲଭାଡୋର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			u"ଫୋର୍ଟ୍ ନେଲସନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"ଲସ୍ ଏଞ୍ଜେଲେସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"ମେକ୍ସିକୋ ସିଟି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"ପାଙ୍ଗନିର୍ଟୁଙ୍ଗ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"ପୋର୍ଟୋ ଭେଲୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"ପୁଏର୍ତୋ ରିକୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"ରେଇନି ରିଭର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			u"ଟେଗୁସିଗାଲପା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"ଥଣ୍ଡର୍ ବେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"ୟେଲ୍ଲୋନାଇଫ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"ଲଙ୍ଗୟେଆରବୟେନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"କେପ୍\u200c ଭର୍ଦେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"ଲର୍ଡ ହୋୱେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"ମେଲବୋର୍ଣ୍ଣ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"ଆଣ୍ଟାନାନାରିଭୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"ଗୁଆଡାଲକାନାଲ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"ଡର୍\u200c ଇସ୍\u200c ସାଲାମ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"ବ୍ଲାଙ୍କ-ସାବଲୋନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"ବୁଏନସ୍\u200c ଏରିସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"କାମ୍ପୋ ଗ୍ରାଣ୍ଡେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"ଡାନମାର୍କସାଭନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"ଡୱସନ୍ କ୍ରିକ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"କ୍ନୋକ୍ସ, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"ଇଣ୍ଡିଆନାପୋଲିସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			u"ପୁଣ୍ଟା ଏରିନାସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"ରାନକିନ୍ ଇନଲେଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"ଇଟ୍ଟୋକ୍ଵୋରଟୋରମିଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			u"ମାକ୍ୱେରୀ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			u"ବୌଗେନ୍\u200cଭିଲ୍ଲେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"ପୋର୍ଟ୍\u200c ମୋରେସବି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"କେମ୍ଵ୍ରିଜ୍ ବେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"ଆଟିକୋକାନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"ଭେଭାୟ, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			u"ନିମ୍ନ ପ୍ରିନ୍ସ’ର କ୍ଵାଟର୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"ପୋର୍ଟ୍ ଅଫ୍ ସ୍ପେନ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"ସାଣ୍ଟୋ ଡୋମିଙ୍ଗୋ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"ସେଣ୍ଟ୍. ବାର୍ଥେଲେମି"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"ସୁଇଫ୍ଟ୍ କରେଣ୍ଟ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"ବ୍ରୋକେନ୍\u200c ହିଲ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			u"ବାହିଆ ବ୍ୟାଣ୍ଡେରାସ୍"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"ପୋର୍ଟ୍-ଏୟୁ-ପ୍ରିନ୍ସ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"ଦକ୍ଷିଣ ଜର୍ଜିଆ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			u"ସଲ୍ଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"ମାରେନଗୋ, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"ୱିନାମାକ୍, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"ଟୁକୁମାନ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"ଉଶୁୟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"ଟେଲ୍ ସିଟି, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"ଭିନସେନ୍ନେସ୍, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"ଡୁମୋଣ୍ଟ ଡି‘ଉରଭିଲ୍ଲେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"ଲା ରିଓଜା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"ସାନ୍\u200c ଜୁଆନ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"ସାନ୍\u200c ଲୁଇସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"ପେଟେର୍ସବର୍ଗ୍, ଇଣ୍ଡିଆନା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"ମୋଣ୍ଟିସେଲୋ, କେଣ୍ଟଉକିକେ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"ବେଉଲାହ, ଉତ୍ତର ଡାକୋଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"କେନ୍ଦ୍ର, ଉତ୍ତର ଡାକୋଟା"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"ରିଓ ଗାଲ୍ଲେଗସ୍\u200c"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"ନ୍ୟୁ ସାଲେମ୍, ଉତ୍ତର ଡାକୋଟା"_s
		})
	}));
	return data;
}

TimeZoneNames_or::TimeZoneNames_or() {
}

$Class* TimeZoneNames_or::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_or, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_or, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_or",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_or, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_or);
	});
	return class$;
}

$Class* TimeZoneNames_or::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun