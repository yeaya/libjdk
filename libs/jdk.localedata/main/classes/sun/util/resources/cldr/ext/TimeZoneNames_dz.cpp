#include <sun/util/resources/cldr/ext/TimeZoneNames_dz.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE
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

$MethodInfo _TimeZoneNames_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_dz, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_dz, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_dz",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_dz_MethodInfo_
};

$Object* allocate$TimeZoneNames_dz($Class* clazz) {
	return $of($alloc(TimeZoneNames_dz));
}

void TimeZoneNames_dz::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_dz::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, GMT, $new($StringArray, {
		u"གིརིན་ཝིཆ་ལུ་ཡོད་པའི་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"ཀིའུ་བྷ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཀིའུ་བྷ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཀིའུ་བྷ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"གཱལཕི་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"ཨི་རཱན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨི་རཱན་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཨི་རཱན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"ཨོམསཀི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨོམསཀི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨོམསཀི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"པ་རུ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"པ་རུ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"པ་རུ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"ཅི་ལི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཅི་ལི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཅི་ལི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"རྒྱ་ནག་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"རྒྱ་ནག་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"རྒྱ་ནག་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"རྒྱ་གར་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"ཇ་པཱན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཇ་པཱན་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཇ་པཱན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"ཀོ་རི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཀོ་རི་ཡ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཀོ་རི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"ནེ་པཱལ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"ཨ་ལསི་ཀ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨ་ལསི་ཀ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཨ་ལསི་ཀ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"ཨེ་མ་ཛཱོན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨེ་མ་ཛཱོན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨེ་མ་ཛཱོན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"ཨེ་ཛོརས་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨེ་ཛོརས་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨེ་ཛོརས་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"འབྲུག་ཡུལ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"ཨིསི་ཊར་ཨཱའི་ལེནཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨིསི་ཊར་ཨཱའི་ལེནཌ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨིསི་ཊར་ཨཱའི་ལེནཌ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"གུ་ཡ་ན་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"ཨིས་རེལ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨིས་རེལ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཨིས་རེལ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"མཽས་ཀོ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"མཽས་ཀོ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"མཽས་ཀོ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"ཨ་རེ་བྷི་ཡན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨ་རེ་བྷི་ཡན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཨ་རེ་བྷི་ཡན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"ཨར་མི་ནི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨར་མི་ནི་ཡ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨར་མི་ནི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"བྷོ་ལི་བི་ཡ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"ཨེ་ཀུ་ཌཽ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"ཇཽ་ཇཱ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཇཽ་ཇཱ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཇཽ་ཇཱ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"ཨར་ཀུཙི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨར་ཀུཙི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨར་ཀུཙི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"མ་གྷ་དཱན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"མ་གྷ་དཱན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"མ་གྷ་དཱན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"ཕར་ནེན་ཌོ་ ཌི་ ནོ་རཱོན་ཧ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཕར་ནེན་ཌོ་ ཌི་ ནོ་རཱོན་ཧ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཕར་ནེན་ཌོ་ ཌི་ ནོ་རཱོན་ཧ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"རི་ཡུ་ནི་ཡཱན་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"ཡུ་རུ་གུ་ཝཱའི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཡུ་རུ་གུ་ཝཱའི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཡུ་རུ་གུ་ཝཱའི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"ཡ་ཀུཙིཀི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཡ་ཀུཙིཀི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཡ་ཀུཙིཀི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"ཨེཊ་ལེན་ཊིཀ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨེཊ་ལེན་ཊིཀ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཨེཊ་ལེན་ཊིཀ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"བྲ་ཛི་ལི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བྲ་ཛི་ལི་ཡ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"བྲ་ཛི་ལི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"ཀོ་ལོམ་བྷི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཀོ་ལོམ་བྷི་ཡ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཀོ་ལོམ་བྷི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"ཕལཀ་ལེནཌ་ཨཱའི་ལེནཌས་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཕལཀ་ལེནཌ་ཨཱའི་ལེནཌས་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཕལཀ་ལེནཌ་ཨཱའི་ལེནཌས་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"མཱལ་དིབས་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"པ་ཀི་ས྄ཏཱན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"པ་ཀི་ས྄ཏཱན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"པ་ཀི་ས྄ཏཱན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"པ་ར་གུ་ཝའི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"པ་ར་གུ་ཝའི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"པ་ར་གུ་ཝའི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"ས་ཁ་ལིན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ས་ཁ་ལིན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ས་ཁ་ལིན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"སུ་རི་ནཱམ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"ཨར་ཇེན་ཊི་ན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨར་ཇེན་ཊི་ན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨར་ཇེན་ཊི་ན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"ཁི་རིསྟ་མེས་མཚོ་གླིང་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"ག་ལ་པ་གོསི་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"ཨིན་ཌོ་ཅཱའི་ན་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"མོ་རི་ཤཱས་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"མོ་རི་ཤཱས་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"མོ་རི་ཤཱས་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"བེ་ནི་ཛུ་ཝེ་ལ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"བཱོལ་གོ་གིརེཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བཱོལ་གོ་གིརེཌ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"བཱོལ་གོ་གིརེཌ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"ཨ་ཛར་བྷའི་ཇཱན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཨ་ཛར་བྷའི་ཇཱན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཨ་ཛར་བྷའི་ཇཱན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"བངྒ་ལ་དེཤ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བངྒ་ལ་དེཤ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"བངྒ་ལ་དེཤ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"ཀེཔ་བཱཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཀེཔ་བཱཌ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཀེཔ་བཱཌ་ཆུ་ཚོད"_s,
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
	$var($StringArray, Seychelles, $new($StringArray, {
		u"སེ་ཤཱལས་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"ཨཕ་ག་ནི་ས྄ཏཱནཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"ཀརསི་ནོ་ཡརསཀི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཀརསི་ནོ་ཡརསཀི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཀརསི་ནོ་ཡརསཀི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"ནིའུ་ཛི་ལེནཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནིའུ་ཛི་ལེནཌ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ནིའུ་ཛི་ལེནཌ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"ནོ་བོ་སི་བིརསཀི་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནོ་བོ་སི་བིརསཀི་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ནོ་བོ་སི་བིརསཀི་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"བ་ལ་ཌི་བོསི་ཏོཀ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བ་ལ་ཌི་བོསི་ཏོཀ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"བ་ལ་ཌི་བོསི་ཏོཀ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"རྒྱ་གར་གྱི་རྒྱ་མཚོ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"ནིའུ་ཕའུནཌ་ལེནཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནིའུ་ཕའུནཌ་ལེནཌ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ནིའུ་ཕའུནཌ་ལེནཌ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"ཕིརེནཅ་གི་ཡ་ན་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"ཡེ་ཀ་ཏེ་རིན་བརག་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཡེ་ཀ་ཏེ་རིན་བརག་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཡེ་ཀ་ཏེ་རིན་བརག་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"དབུས་ཕྱོགས་ཨཕ་རི་ཀཱ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"ཤར་ཕྱོགས་ཨཕ་རི་ཀཱ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"ནུབ་ཕྱོགས་ཨཕ་རི་ཀཱ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་ཨཕ་རི་ཀཱ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་ཨཕ་རི་ཀཱ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"དབུས་ཕྱོགས་ཡུ་རོ་པེན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"དབུས་ཕྱོགས་ཡུ་རོ་པེན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"དབུས་ཕྱོགས་ཡུ་རོ་པེན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"ཤར་ཕྱོགས་ཡུ་རོ་པེན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཤར་ཕྱོགས་ཡུ་རོ་པེན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཤར་ཕྱོགས་ཡུ་རོ་པེན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"ནུབ་ཕྱོགས་ཡུ་རོ་པེན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་ཡུ་རོ་པེན་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་ཡུ་རོ་པེན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"ལྷོ་ཕྱོགས་ཨཕ་རི་ཀཱ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"བྱང་ཨ་མི་རི་ཀ་དབུས་ཕྱོགས་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་དབུས་ཕྱོགས་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་དབུས་ཕྱོགས་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"བྱང་ཨ་མི་རི་ཀ་ཤར་ཕྱོགས་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་ཤར་ཕྱོགས་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་ཤར་ཕྱོགས་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"བྱང་ཨ་མི་རི་ཀ་པེ་སི་ཕིག་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་པེ་སི་ཕིག་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་པེ་སི་ཕིག་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"ཧ་ཝའི་-ཨེ་ལིའུ་ཤེན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཧ་ཝའི་-ཨེ་ལིའུ་ཤེན་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཧ་ཝའི་-ཨེ་ལིའུ་ཤེན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"པའི་རི་དང་མི་ཀི་ལཱོན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"པའི་རི་དང་མི་ཀི་ལཱོན་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"པའི་རི་དང་མི་ཀི་ལཱོན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"བྱང་ཨ་མི་རི་ཀ་མའུ་ཊེན་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་མའུ་ཊེན་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"བྱང་ཨ་མི་རི་ཀ་མའུ་ཊེན་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"དབུས་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"དབུས་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"དབུས་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"ཤར་ཕྱོགས་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཤར་ཕྱོགས་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ཤར་ཕྱོགས་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"ནུབ་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"ཤར་ཕྱོགས་གིརིན་ལེནཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ཤར་ཕྱོགས་གིརིན་ལེནཌ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ཤར་ཕྱོགས་གིརིན་ལེནཌ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"ནུབ་ཕྱོགས་གིརིན་ལེནཌ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་གིརིན་ལེནཌ་བྱཱར་དུས་ཆུ་ཚོད"_s,
		""_s,
		u"ནུབ་ཕྱོགས་གིརིན་ལེནཌ་ཆུ་ཚོད"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"དབུས་ཕྱོགས་ཨིན་ཌོ་ནེ་ཤི་ཡ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"ཤར་ཕྱོགས་ཨིན་ཌོ་ནེ་ཤི་ཡ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"ནུབ་ཕྱོགས་ཨིན་ཌོ་ནེ་ཤི་ཡ་ཆུ་ཚོད"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"དབུས་ནུབ་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཚད་ལྡན་ཆུ་ཚོད"_s,
		""_s,
		u"དབུས་ནུབ་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཉིན་སྲུང་ཆུ་ཚོད"_s,
		""_s,
		u"བུས་ནུབ་ཕྱོགས་ཨཱོས་ཊྲེལ་ལི་ཡ་ཆུ་ཚོད"_s,
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
			$of(EMPTY_ZONE)
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
			$of("Asia/Gaza"_s),
			$of(Europe_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of(Omsk)
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Beirut"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Magadan"_s),
			$of(Magadan)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Calcutta"_s),
			$of(India)
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(Europe_Eastern)
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
			$of("Asia/Sakhalin"_s),
			$of(Sakhalin)
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
				u"གིརིན་ཝིཆ་ལུ་ཡོད་པའི་ཆུ་ཚོད"_s,
				""_s,
				u"ཨཱ་ཡརིཤ་བྱཱར་དུས་ཆུ་ཚོད"_s,
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
				u"གིརིན་ཝིཆ་ལུ་ཡོད་པའི་ཆུ་ཚོད"_s,
				""_s,
				u"བྲཱི་ཊིཤ་བྱཱར་དུས་ཆུ་ཚོད"_s,
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
			$of("Asia/Pontianak"_s),
			$of(Indonesia_Western)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(Korea)
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
				u"གིརིན་ཝིཆ་ལུ་ཡོད་པའི་ཆུ་ཚོད"_s,
				""_s,
				u"བྲཱི་ཊིཤ་བྱཱར་དུས་ཆུ་ཚོད"_s,
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
			$of("Indian/Mauritius"_s),
			$of(Mauritius)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(New_Zealand)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(Hawaii_Aleutian)
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
			$of("Pacific/Galapagos"_s),
			$of(Galapagos)
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
			$of("Australia/Melbourne"_s),
			$of(Australia_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(Africa_Eastern)
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
			$of("America/Scoresbysund"_s),
			$of(Greenland_Eastern)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of(Australia_Eastern)
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
			$of("timezone.excity.Africa/Lome"_s),
			$of(u"ལོ་མེ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Etc/Unknown"_s),
			$of(u"མ་ཤེས་པའི་ཁྲོམ་སྡེ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Cairo"_s),
			$of(u"ཀཱའི་རོ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Dakar"_s),
			$of(u"ཌཱ་ཀར"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Tunis"_s),
			$of(u"ཊུ་ནིས྄"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Bahrain"_s),
			$of(u"བྷ་རེན་"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Asia/Thimphu"_s),
			$of(u"ཐིམ་ཕུག"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Pacific/Apia"_s),
			$of(u"ཨ་པི་ཡ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Athens"_s),
			$of(u"ཨེ་ཐེནས་"_s)
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
			$of("timezone.excity.Africa/Tripoli"_s),
			$of(u"ཏྲི་པོ་ལི"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Belize"_s),
			$of(u"བྷེ་ལིཛ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Bogota"_s),
			$of(u"བྷོ་ག་ཊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson"_s),
			$of(u"དའུ་སཱོན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Inuvik"_s),
			$of(u"ཨི་ནུ་ཝིཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/La_Paz"_s),
			$of(u"ལ་པཱཛ྄"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Panama"_s),
			$of(u"པ་ན་མ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Regina"_s),
			$of(u"རི་ཇི་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Tallinn"_s),
			$of(u"ཊཱ་ལཱིན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Africa/Khartoum"_s),
			$of(u"ཁཱར་ཊུམ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Antigua"_s),
			$of(u"ཨན་ཊི་གུ་ཝ་"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Chicago"_s),
			$of(u"ཅི་ཀཱ་གོ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Halifax"_s),
			$of(u"ཧ་ལི་ཕེགསི"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Moncton"_s),
			$of(u"མཱོངཀ་ཊོན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Nipigon"_s),
			$of(u"ནི་པི་གཱོན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tijuana"_s),
			$of(u"ཏིའུ་ཝ་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Toronto"_s),
			$of(u"ཊོ་རོན་ཊོ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Yakutat"_s),
			$of(u"ཡ་ཀུ་ཏཏ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Faeroe"_s),
			$of(u"ཕཱའེ་རོ་"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Helsinki"_s),
			$of(u"ཧེལ་སིང་ཀི"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Barbados"_s),
			$of(u"བྷར་བེ་ཌོས"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dominica"_s),
			$of(u"ཌོ་མི་ནི་ཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Edmonton"_s),
			$of(u"ཨེཌ་མཱོན་ཊོན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Resolute"_s),
			$of(u"རི་སོ་ལིའུཊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santiago"_s),
			$of(u"སཱན་ཊི་ཡ་གྷོ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/St_Johns"_s),
			$of(u"ཨིསི་ཊེཊ་ ཇཱོནསི་"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Davis"_s),
			$of(u"ཌེ་ཝིས།"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Atlantic/Bermuda"_s),
			$of(u"བར་མུ་ད"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Goose_Bay"_s),
			$of(u"གཱུསི་ བའེ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Guatemala"_s),
			$of(u"གྷོ་ཊ་མ་ལ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Antarctica/Mawson"_s),
			$of(u"མའུ་སཱོན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.Europe/Copenhagen"_s),
			$of(u"ཀོ་པེན་ཧེ་གེན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Costa_Rica"_s),
			$of(u"ཀོས་ཊ་རི་ཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/El_Salvador"_s),
			$of(u"ཨེལ་ སཱལ་བ་ཌོ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Mexico_City"_s),
			$of(u"མེཀ་སི་ཀོ་ སི་ཊི"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Pangnirtung"_s),
			$of(u"པེང་ནིར་ཏུང"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rainy_River"_s),
			$of(u"རཱེ་ནི་རི་ཝར"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Tegucigalpa"_s),
			$of(u"ཊེ་གུ་སི་གཱལ་པ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Thunder_Bay"_s),
			$of(u"ཐན་ཌར་ བའེ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Dawson_Creek"_s),
			$of(u"དའུ་སཱོན་ ཀིརིཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Rankin_Inlet"_s),
			$of(u"རེན་ཀིན་ ཨིན་ལེཊ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Cambridge_Bay"_s),
			$of(u"ཀེམ་བིརིདཆ་ བའེ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Coral_Harbour"_s),
			$of(u"ཨ་ཏི་ཀོ་ཀཱན"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Santo_Domingo"_s),
			$of(u"སཱན་ཊོ་ ཌོ་མིང་གྷོ"_s)
		}),
		$$new($ObjectArray, {
			$of("timezone.excity.America/Swift_Current"_s),
			$of(u"སུ་ཨིཕཊ་ཀ་རེནཊ"_s)
		})
	}));
	return data;
}

TimeZoneNames_dz::TimeZoneNames_dz() {
}

$Class* TimeZoneNames_dz::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_dz, name, initialize, &_TimeZoneNames_dz_ClassInfo_, allocate$TimeZoneNames_dz);
	return class$;
}

$Class* TimeZoneNames_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun