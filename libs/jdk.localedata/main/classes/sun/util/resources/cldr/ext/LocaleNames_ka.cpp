#include <sun/util/resources/cldr/ext/LocaleNames_ka.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_ka_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ka, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ka, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ka_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ka",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ka_MethodInfo_
};

$Object* allocate$LocaleNames_ka($Class* clazz) {
	return $of($alloc(LocaleNames_ka));
}

void LocaleNames_ka::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ka::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CA, u"კანადა"_s);
	$var($String, metaValue_FJ, u"ფიჯი"_s);
	$var($String, metaValue_NR, u"ნაურუ"_s);
	$var($String, metaValue_NU, u"ნიუე"_s);
	$var($String, metaValue_TV, u"ტუვალუ"_s);
	$var($String, metaValue_WS, u"სამოა"_s);
	$var($String, metaValue_ae, u"ავესტური"_s);
	$var($String, metaValue_ar, u"არაბული"_s);
	$var($String, metaValue_bn, u"ბენგალური"_s);
	$var($String, metaValue_bo, u"ტიბეტური"_s);
	$var($String, metaValue_el, u"ბერძნული"_s);
	$var($String, metaValue_he, u"ებრაული"_s);
	$var($String, metaValue_hy, u"სომხური"_s);
	$var($String, metaValue_ja, u"იაპონური"_s);
	$var($String, metaValue_jv, u"იავური"_s);
	$var($String, metaValue_ka, u"ქართული"_s);
	$var($String, metaValue_km, u"ქმერული"_s);
	$var($String, metaValue_ko, u"კორეული"_s);
	$var($String, metaValue_la, u"ლათინური"_s);
	$var($String, metaValue_lo, u"ლაოსური"_s);
	$var($String, metaValue_ml, u"მალაიალამური"_s);
	$var($String, metaValue_mn, u"მონღოლური"_s);
	$var($String, metaValue_or, u"ორია"_s);
	$var($String, metaValue_si, u"სინჰალური"_s);
	$var($String, metaValue_ta, u"ტამილური"_s);
	$var($String, metaValue_te, u"ტელუგუ"_s);
	$var($String, metaValue_th, u"ტაი"_s);
	$var($String, metaValue_ccp, u"ჩაკმა"_s);
	$var($String, metaValue_chr, u"ჩეროკი"_s);
	$var($String, metaValue_cop, u"კოპტური"_s);
	$var($String, metaValue_got, u"გოთური"_s);
	$var($String, metaValue_kpe, u"კპელე"_s);
	$var($String, metaValue_men, u"მენდე"_s);
	$var($String, metaValue_nqo, u"ნკო"_s);
	$var($String, metaValue_peo, u"ძველი სპარსული"_s);
	$var($String, metaValue_phn, u"ფინიკიური"_s);
	$var($String, metaValue_syr, u"სირიული"_s);
	$var($String, metaValue_uga, u"უგარითული"_s);
	$var($String, metaValue_vai, u"ვაი"_s);
	$var($String, metaValue_zbl, u"ბლისსიმბოლოები"_s);
	$var($String, metaValue_Hant, u"ტრადიციული"_s);
	$var($String, metaValue_zh_Hans, u"გამარტივებული ჩინური"_s);
	$var($String, metaValue_zh_Hant, u"ტრადიციული ჩინური"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"კიოლში"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ოღამი"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"მირანდული"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"სიმბოლოები"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"მარვარი"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"ტაგბანვა"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"ძველეგვიპტური"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"რაჯასთანი"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"ფაგსპა"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"ტინმე"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"ტესო"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"რაპანუი"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"ამაღლების კუნძული"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"რაროტონგული"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"ტეტუმი"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"ანდორა"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"არაბთა გაერთიანებული საამიროები"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"ფლამანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"ავღანეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"ანტიგუა და ბარბუდა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"ეთიოპიური კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"ანგილია"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"ალბანეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"სომხეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"ტენგვარი"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"ანგოლა"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"ანტარქტიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"არგენტინა"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"მონუმენტური პართული"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"ამერიკის სამოა"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ავსტრია"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ავსტრალია"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"არუბა"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ამერიკული ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"ალანდის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"მიენე"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"აზერბაიჯანი"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"ბოსნია და ჰერცეგოვინა"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"ბარბადოსი"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"სებუანო"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"ბანგლადეში"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"ყუმუხური"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"ბელგია"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"საშუალო ზემოგერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"ბურკინა-ფასო"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"ბულგარეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"ბაჰრეინი"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"ბურუნდი"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"ბენინი"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"სენ-ბართელმი"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"ბერმუდა"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"კუტენაი"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"ერზია"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"ბრუნეი"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"ბოლივია"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"კარიბის ნიდერლანდები"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ბრაზილია"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"ბაჰამის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"სოგა"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ბუტანი"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"ბუვე"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"ბოტსვანა"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"ბელარუსი"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"ბელიზი"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"ხილული მეტყველება"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"სპარსული კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"ებრაული რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"ქოქოსის (კილინგის) კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"მაზანდერანული"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"კონგო - კინშასა"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"ცენტრალური აფრიკის რესპუბლიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"კონგო - ბრაზავილი"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"შვეიცარია"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"კოტ-დივუარი"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"კუკის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ჩილე"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"კაითი"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"კამერუნი"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ჩინეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"კოლუმბია"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"კლიპერტონის კუნძული"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"კოსტა-რიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"კუბა"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"კაბო-ვერდე"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"კიურასაო"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"შობის კუნძული"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"კვიპროსი"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"ჩეხეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"ეკაჯუკი"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"გერმანია"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"ძველი ზემოგერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"აჩეხური"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"ჩიგა"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"დიეგო-გარსია"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"დევანაგარის ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ჯიბუტი"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"დანია"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"აჩოლი"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"გონდი"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"ბრაილი"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"ბრაჰმი"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"დომინიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"სომხური ქვედა რეგისტრის რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"დომინიკელთა რესპუბლიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"გორონტალო"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"ზუნი"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"თიგრე"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"ტაკრი"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"ალჟირი"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"პანგასინანი"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"ფალაური"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"სეუტა და მელილა"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"ჩიბჩა"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"პამპანგა"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"ეკვადორი"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"პაპიამენტო"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"ადანგმე"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"ესტონეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"ეგვიპტე"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"დასავლეთ საჰარა"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"ფალაუანი"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"ჩუკოტკური"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"ჩინუკის ჟარგონი"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"მარიული"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"ჩიპევიანი"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"ჩოკტო"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"ერიტრეა"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"ესპანეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"ეთიოპია"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"ევროკავშირი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"გრიგორიანული კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"ევროზონა"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"ჩეიენი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"გუჯარათული ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"ადიღეური"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ფინეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"ფოლკლენდის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"მიკრონეზია"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"ფარერის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"საფრანგეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"ინდოეთის ეროვნული კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"ძველი ბერძნული"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"გაბონი"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"გაერთიანებული სამეფო"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"ნიგერიული კრეოლური"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"გრენადა"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"საქართველო"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"საფრანგეთის გვიანა"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"გერნსი"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"განა"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"ტაი ლე"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"გიბრალტარი"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"გრენლანდია"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"საშუალო ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"გამბია"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"გვინეა"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"გვადელუპა"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"ეკვატორული გვინეა"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"საბერძნეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"სამხრეთ ჯორჯია და სამხრეთ სენდვიჩის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"გვატემალა"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"გუამი"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"გვინეა-ბისაუ"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"კლინგონი"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"ახალი ტაი ლიუ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"გაიანა"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"ცენტრალური ქურთული"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"ლინგვისტური შიგთავსი არ არის"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"ჯურჯენული"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ავსტრიული გერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ჰონკონგის სპეციალური ადმინისტრაციული რეგიონი, ჩინეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"ჰერდი და მაკდონალდის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ჰონდურასი"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"ხორვატია"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"აღემი"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"შვეიცარიული გერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ჰაიტი"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"უნგრეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"კანარის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"ინდონეზია"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ირლანდია"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"ნეაპოლიტანური"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"ნამა"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ზაზაკი"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"ტანღუტური"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ისრაელი"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"ნაბატეური"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"მენის კუნძული"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ინდოეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"ბრიტანეთის ტერიტორია ინდოეთის ოკეანეში"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"ერაყი"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"ირანი"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ისლანდია"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"იტალია"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"მათემატიკური ნოტაცია"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"ტაილანდური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"ბენგალური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"ჯერსი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"ისლამური კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"იამაიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"იორდანია"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"იაპონია"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"აინუური"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"გუსიი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"კანადური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"კაიაჰ-ლი"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"შვეიცარიული ზემოგერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"ბუდისტური კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"კენია"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"ლათინური ამერიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"ყირგიზეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"კამბოჯა"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"კირიბატი"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"კომორის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"სენტ-კიტსი და ნევისი"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"გადაღებული"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"კანადური ფრანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"ჩრდილოეთ კორეა"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"სამხრეთ კორეა"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"შვეიცარიული ფრანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"ქუვეითი"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"ტოკ-პისინი"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"კაიმანის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"ყაზახეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"კირილიცა"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ლაოსი"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"ლიბანი"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"სენტ-ლუსია"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"ძველი სლავური კირილიცა"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"გვიჩინი"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"ქვემოგერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ლიხტენშტაინი"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"შრი-ლანკა"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"აქადური"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ლიბერია"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"ლესოთო"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"წიგნური ფალაური"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ლიეტუვა"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ლუქსემბურგი"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ლატვია"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"კატაკანა"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"სორან-სომპენი"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ლიბია"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ლადინო"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"ვუნჯო"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"ლანდა"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"ლანგი"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"თაანა"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"მაროკო"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"მონაკო"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"მოლდოვა"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"ნუშუ"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"მონტენეგრო"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"სენ-მარტენი"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"ლამბა"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"მადაგასკარი"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"მარშალის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"ალეუტური"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"ჩრდილოეთ მაკედონია"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"მალი"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"მიანმარი (ბირმა)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"მონღოლეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"ნევარი"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"მაკაოს სპეციალური ადმინისტრაციული რეგიონი, ჩინეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"ჩრდილოეთ მარიანას კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"მარტინიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"მავრიტანია"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"მონსერატი"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"მალტა"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"მავრიკი"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"სამხრეთ ალთაური"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"მალდივები"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"მალავი"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"მექსიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"იაპონური კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"მალაიზია"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"მოზამბიკი"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"მონუმენტური ფალაური"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"ნამიბია"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"სუბსაჰარული აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"ებრაული კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"ახალი კალედონია"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ნიგერი"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"ნორფოლკის კუნძული"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ნიგერია"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"ტაროკო"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"ფსალმუნური ფალაური"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"ნიკარაგუა"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"ფაჰაუ-მონი"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"ნიდერლანდები"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"ნორვეგია"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"ნეპალი"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"რომბო"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"ახალი ზელანდია"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"მეროიტული კურსივი"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"ბოშური"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"მეროიტული"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"ყირიმულ-თურქული"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"ძველი ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"ომანი"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"ანგიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"სესელვა-კრეოლური ფრანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"პანამა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"ისლამური სამოქალაქო კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"კაშუბური"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ბრიტანული ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"პერუ"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"საფრანგეთის პოლინეზია"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"პაპუა-ახალი გვინეა"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ფილიპინები"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"პაკისტანი"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"პოლონეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"ევონდო"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"სენ-პიერი და მიკელონი"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"პიტკერნის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"პუერტო-რიკო"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"პალესტინის ტერიტორიები"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"ბალიური"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"პორტუგალია"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"პალაუ"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"ნიასი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"ბერძნული ქვედა რეგისტრის რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"პარაგვაი"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"ტუმბუკა"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"კატარი"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(metaValue_NU)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"შორეული ოკეანეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"ლეზგიური"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"ტაი-ვიეტი"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"მსოფლიო"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"ჩრდილოეთ ამერიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"რეუნიონი"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"სამხრეთ ამერიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"ლოჟბანი"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"რეჯანგი"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"ოკეანეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"რუმინეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"სერბეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"მრო"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"რუსეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"რუანდა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"ახალი ტაი ლიუსი ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"მანიქეური"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"ქაროშთი"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"საუდის არაბეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"მანდეური"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"სოლომონის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"ტასავაქი"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"დასავლეთ აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"სეიშელის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"სუდანი"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"ცენტრალური ამერიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"შვედეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"აღმოსავლეთ აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"არამეული"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"ლომა"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"ჩრდილოეთ აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"სინგაპური"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"წმინდა ელენეს კუნძული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"სტრიქონის ზედმიწევნითი წყვეტის სტილი"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"შუა აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"სლოვენია"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"სამხრეთ აფრიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"შპიცბერგენი და იან-მაიენი"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"ამერიკები"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"სლოვაკეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"ბამუმი"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"ვოლეაი"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"სიერა-ლეონე"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"სან-მარინო"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"სენეგალი"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"სომალი"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"მაპუდუნგუნი"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"არაპაჰო"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"ტრადიციული ტამილური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"სურინამი"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"სამხრეთ სუდანი"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"სან-ტომე და პრინსიპი"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"სალვადორი"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"სინტ-მარტენი"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"სირია"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"სვაზილენდი"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"არავაკი"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"ტრისტან-და-კუნია"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"ასუ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ამერიკული საზომი სისტემა"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"ამერიკის ჩრდილოეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"თერქს-ქაიქოსის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"იანგბენი"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ჩადი"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"ფრანგული სამხრეთის ტერიტორიები"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"ტოგო"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ტაილანდი"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ტაჯიკეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"კარიბის ზღვა"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"ტოკელაუ"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ტიმორ-ლესტე"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"იემბა"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"თურქმენეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ტუნისი"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ტონგა"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"თურქეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ტრინიდადი და ტობაგო"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(metaValue_TV)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ტაივანი"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"ასტურიული"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"ორხონული"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ტანზანია"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"კვასიო"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"უცნობი დამწერლობა"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"ქუდავადი"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"უკრაინა"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"არომანული"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"აღმოსავლეთ აზია"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"ტუვა"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"კონგოს სუაჰილი"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"სამხრეთ აზია"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"სამხრეთ-აღმოსავლეთ აზია"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"უგანდა"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"სამხრეთ ევროპა"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"აშშ-ის შორეული კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"გაერო"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ამერიკის შეერთებული შტატები"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ჰავაიური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(metaValue_zh_Hans)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"ურუგვაი"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"პრუსიული"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"უზბეკეთი"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"ცენტრალური მოროკოს ტამაზიგხტი"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"ნგიმბუნი"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"ქალაქი ვატიკანი"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"ძველი პროვანსული"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"სენტ-ვინსენტი და გრენადინები"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"ვენესუელა"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"ბრიტანეთის ვირჯინის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"აშშ-ის ვირჯინის კუნძულები"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"ვიეტნამი"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"ვანუატუ"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"ნოღაური"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"რუა"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"ძველსკანდინავიური"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"ავსტრალაზია"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"მელანეზია"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"უოლისი და ფუტუნა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"მიკრონეზიის რეგიონი"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"ნგომბა"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"ლაკოტა"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"ვალსერი"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"ბასა ვაჰი"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"ველაითა"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"ფსევდო-აქცენტები"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"ვარაი"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ფსევდო-ორმიმართულებიანი"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"ავადი"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"პოლინეზია"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"კოსოვო"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"გუჯარათული"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"უმწერლობო"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ოლ-ჩიკი"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"ვალპირი"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"ბატაკი"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"იემენი"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"სტანდარტული დახარისხების თანმიმდევრობა"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"ჟესტთა"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"მაიოტა"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"სამხრეთ აფრიკის რესპუბლიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"სუნდანური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"სტრიქონის რბილი წყვეტის სტილი"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"დევანაგარი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"ქართული რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"ჰირაგანა"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"ზამბია"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ზიმბაბვე"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"უცნობი რეგიონი"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"რუნული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"მეტრული სისტემა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO-8601 კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"მონგო"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"ჩრდილოეთ სოთო"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"ტელუგუს ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"ლოზი"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"კიმაშამი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"გამარტივებული ჩინური ფინანსური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"ჰილიგაინონი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"გაფართოებული არაბულ-ინდური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"ნუერი"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"დაკოტური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"სრულსიგანიანი ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"ხეთური"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"დარგუული"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"ტაიტა"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"მაიას იეროგლიფები"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"ჩრდილოეთ ლური"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"კლასიკური ნევარული"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"უდმურტული"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"ლიმბუ"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"სანდავე"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"რომაული ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"იაკუტური"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"სამარიულ-არამეული"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"სამბურუ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"სანტალი"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"ტიფინაღი"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"იუდეო-სპარსული"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"ნგამბაი"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"გურმუხი"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"ლუბა-ლულუა"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"სანგუ"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"ლუისენიო"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ნიანკოლე"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ნიამვეზი"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"ლუნდა"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ნიორო"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"ლუო"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"ფილიპინური"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"ჰმონგი"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"დელავერული"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"მიზო"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"ბელუჯი"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"სლეივი"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"ბალინური"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"ლუჰია"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"ბასა"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"ბამუნი"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"იუდეო-არაბული"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ევროპული ესპანური"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"ნზიმა"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"შოტლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"სიცილიური"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"აფარი"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"აფხაზური"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"აფრიკაანსი"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"აკანი"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"ამჰარული"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"არაგონული"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"იაპონური კანა"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ასამური"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"A-ხაზოვანი"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"ხუნძური"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"B-ხაზოვანი"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"სამხრეთქურთული"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"აიმარა"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"აზერბაიჯანული"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"ქოჯკი"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"ბაშკირული"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"ბელარუსული"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"ბულგარული"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"ბისლამა"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"ბამბარა"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"დოგრიბი"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"ბრეტონული"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"ბოსნიური"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"სენეკა"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"მიანმური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"ლაოსური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"სენა"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"სელკუპური"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"კატალანური"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"კოირაბორო-სენი"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"ჩეჩნური"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"ჩამორო"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"კორსიკული"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"კრი"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"ჩეხური"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"საეკლესიო სლავური"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"ჩუვაშური"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"უელსური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"ეთიოპიური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"დანიური"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ევროპული პორტუგალიური"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"გერმანული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"ვალუტის სტანდარტული ფორმატი"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"ბეჯა"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"დინკა"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"ბემბა"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"ძველი ირლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"მონღოლური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"დივეჰი"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ლათინურ ამერიკული ესპანური"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ძონგკხა"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"ბენა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"ჩინური კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"ზარმა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"ბერძნული რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"ევე"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"სტრიქონის ჩვეულებრივი წყვეტის სტილი"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"მოლდავური"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"ესპერანტო"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(metaValue_zh_Hant)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ესპანური"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"ესტონური"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"ჰანბი"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"ბასკური"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"ბუჰიდი"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"ჰანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"სამარიული"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"შილჰა"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"ზემოსორბული"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"ჰანი"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"შანი"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"ჰანუნოო"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"სპარსული"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"გამარტივებული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"დასავლური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(metaValue_Hant)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"ფულა"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"ჩადური არაბული"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ფინური"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(metaValue_FJ)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"ფონი"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"დასავლეთ ბელუჯი"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"კანტონური"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ფარერული"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"უმბუნდუ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ფრანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"დასავლეთფრიზიული"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ირლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"შოტლანდიური გელური"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"გალისიური"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"გუარანი"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"ბოჯპური"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"უცნობი ენა"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"გუჯარათი"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"მენური"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"ჰაუსა"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ჰინდი"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"ჰუპა"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"ბინი"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"ხორვატული"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"ჰაიტიური კრეოლი"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"უნგრული"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"ჰერერო"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"ინტერლინგუალური"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"ჯამო"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"ინდონეზიური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"ტიბეტური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"ინტერლინგი"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"იგბო"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"სიჩუანის ი"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"საშუალო ფრანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"ძველი ფრანგული"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"იდო"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"აღმოსავლეთფრიზიული"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"ჩრდილოფრიზიული"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ისლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"იტალიური"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ინუკტიტუტი"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"ძველი სამხრეთ-არაბული"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"სარატი"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"დოგრი"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"სამხრეთსამური"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"მადურული"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"ლულე-საამური"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"მაგაჰი"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"მაფა"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"მაითილი"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"ინარი-საამური"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"სიკსიკა"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"მაკასარი"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"სკოლტ-საამური"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"კონგო"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"კიკუიუ"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"მასაი"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"კუნამა"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"ყაზახური"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"დასავლეთ გრენლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"კანური"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"ქაშმირული"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"კირთი"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(metaValue_ae)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"ქურთული"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"კომი"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"კორნული"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"ყირგიზული"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"სონინკე"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"ლუქსემბურგული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"მალაიალამური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"განდა"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"რონგორონგო"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"ლიმბურგული"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ლინგალა"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"ფრიულური"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"ბრიტანული საზომი სისტემა"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ლიეტუვური"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"ლუბა-კატანგა"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"ლატვიური"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"მალაგასიური"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"მარშალური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"უნიკოდის ნაგულისხმევი დახარისხების თანმიმდევრობა"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"მაორი"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"მაკედონური"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"მარათჰი"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"მალაიური"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"მალტური"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"ბირმული"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"საურაშტრა"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"მოქშა"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"მაბა"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"ქვემოსორბული"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"იმპერიული არამეული"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(metaValue_NR)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"ზოგადი დანიშნულების ძიება"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ნორვეგიული ბუკმოლი"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"ჩრდილოეთ ნდებელე"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ნეპალური"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ნდონგა"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ნიდერლანდური"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"ნორვეგიული ნიუნორსკი"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"ნორვეგიული"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"სამხრეთ ნდებელური"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"ნავახო"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"ყარაყალფახური"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ნიანჯა"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"კაჩინი"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"კაბილური"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ოქსიტანური"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"კაჯი"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"კამბა"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"ოჯიბვე"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"მერუ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"სომხური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"ორომო"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"ოსური"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"ყაბარდოული"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"მორისიენი"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"სრანან ტონგო"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"პენჯაბური"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"დუალა"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"პალი"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"პოლონური"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"საშუალო ჰოლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"საურაშტრული ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"კალენდარი დანგი"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"პუშტუ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"პორტუგალიური"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"საშუალო ირლანდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"დახარისხების თანმიმდევრობა"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ბრაზილიური პორტუგალიური"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"ტიაპი"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"მაქუვა-მეეტო"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"ვალუტის ფორმატი"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"ბრაჯი"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"მეტა-ენა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-საათიანი სისტემა (0-23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-საათიანი სისტემა (1-24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"საჰო"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"მიანმური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"კეჩუა"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"ბოდო"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"მაკონდე"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"ეთიოპიური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-საათიანი სისტემა (1-12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-საათიანი სისტემა (0-11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"რეტორომანული"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"რუნდი"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"ვალუტა"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"რუმინული"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"ორიული ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"ჩინური ათობითი რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"რუსული"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"კინიარუანდა"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"კაბუვერდიანუ"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"მიკმაკი"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"სუკუმა"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ავსტრალიური ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"დუპლოის სტენოგრაფია"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"სანსკრიტი"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"სარდინიული"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"სინდჰური"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"ჩრდილოეთ საამური"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"მინანგკაბაუ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"სანგო"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"სერბულ-ხორვატული"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"შუმერული"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"სლოვაკური"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"სლოვენური"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"გრანთა"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(metaValue_WS)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"შონა"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"სომალიური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"არაბულ-ინდური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"ალბანური"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"სერბული"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"სუატი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"ვალუტის ბუღალტრული ფორმატი"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"სამხრეთ სოთოს ენა"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"სუნდური"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"შვედური"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"სუაჰილი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"ტრადიციული ჩინური ფინანსური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"იბიბიო"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"იბანი"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"აზია"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"ბურიატული"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"ცენტრალური აზია"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"დასავლეთ აზია"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ტაჯიკური"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ტიგრინია"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"ბუგინური"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"კორო"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"კანადური ინგლისური"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"თურქმენული"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"ტსვანა"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ტონგანური"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"დიოლა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"იაპონური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"თურქული"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ტსონგა"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"კომორული"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"თათრული"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"დიულა"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"თუი"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"ტაიტური"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"ევროპა"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"აღმოსავლეთ ევროპა"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"ჩრდილოეთ ევროპა"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"დაზაგა"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"დასავლეთ ევროპა"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"უიღურული"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"ზოგადი"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"უკრაინული"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"ურდუ"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"ყალმუხური"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"ზენაგა"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"უზბეკური"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"ხასი"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"ქვემოსაქსონური"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"სილოტი ნაგრი"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"ვენდა"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"ვარანგ-კშიტი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"ჩინეთის რესპუბლიკის კალენდარი"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"ვიეტნამური"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"კოირა-ჩიინი"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"დროის სისტემა (12 ან 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"ვოლაპუკი"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"კლასიკური სირიული"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"ოსმანია"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"კიჩე"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"გა"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"ვალონური"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"გაგაუზური"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"ლიდიური"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"შუმერულ-აქადური ლურსმნული"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"ვოლოფური"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"სტანდარტული მაროკოული ტამაზიგხტი"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"თანამედროვე სტანდარტული არაბული"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"მანჯურიული"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"ანატოლიური იეროგლიფური"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"გბაია"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"მანიპური"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"გელური ლათინური"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"გამარტივებული ჩინური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"ტრადიციული ჩინური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"ქჰოსა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"რომაული ქვედა რეგისტრის რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"ბილინი"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"ლიკიური"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"მოჰაუკური"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"კაკო"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"იდიში"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"მოსი"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"დეზერეტის"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"იორუბა"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"მექსიკური ესპანური"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"დასავლეთი სირიული"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"სირიული ესტრანგელო"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"კარიული"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"კალენჯინი"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ჩინური"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"აფაკა"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"ბოპომოფო"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"ძველი პერმული"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"სტრიქონის წყვეტის სტილი"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ზულუ"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"შარადა"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"კიმბუნდუ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"იაპონური ფინანსური რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"ჩამი"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"გეეზი"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"აღმოსავლეთი სირიული"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"ძველი ჩრდილოეთ-არაბული"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"ეგვიპტური დემოტიკური"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"ეგვიპტური იერატიკული"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"პალმირული"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"ემბუ"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"ეგვიპტური იეროგლიფური"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"ხუცური"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(metaValue_zh_Hans)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"კომი-პერმიაკული"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"ძველი უნგრული"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"კონკანი"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"კუსაიე"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"ლიმბური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(metaValue_zh_Hant)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"სუნდანური"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"ქხმერული ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"ტირჰუტა"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ილოკო"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"კვიპროსული"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"მუნდანგი"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"გურმუხული ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"სხვადასხვა ენა"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"საზომი სისტემა"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"კრიკი"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"გლაგოლიცა"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"გილბერტული"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"კაიუგა"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"ტამილური ციფრები"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"ყარაჩაულ-ბალყარული"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"ინგუშური"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"დარი"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"კარელიური"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"ეფიკი"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"რიცხვები"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"კურუქი"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"შამბალა"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"ბაფია"_s)
		})
	}));
	return data;
}

LocaleNames_ka::LocaleNames_ka() {
}

$Class* LocaleNames_ka::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ka, name, initialize, &_LocaleNames_ka_ClassInfo_, allocate$LocaleNames_ka);
	return class$;
}

$Class* LocaleNames_ka::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun