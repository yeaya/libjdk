#include <sun/util/resources/ext/LocaleNames_th.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_th_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_th",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_th_MethodInfo_
};

$Object* allocate$LocaleNames_th($Class* clazz) {
	return $of($alloc(LocaleNames_th));
}

void LocaleNames_th::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_th::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"อันดอร์รา"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"สหรัฐอาหรับเอมิเรตส์"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"อัฟกานิสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"อันกิล่า"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"แอลเบเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"อาร์มีเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of(u"เนเธอร์แลนด์แอนทิลล์"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"อันโกลา"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"อาร์เจนติน่า"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"ออสเตรีย"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"ออสเตรเลีย"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"อารูบา"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"อาเซอร์ไบจัน"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"บอสเนีย และ เฮิร์ซโกวิเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"บาร์บาดอส"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"บังคลาเทศ"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"เบลเยี่ยม"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"เบอร์กินาฟาโซ"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"บัลแกเรีย"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"บาห์เรน"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"บูรันดิ"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"เบนิน"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"เบอร์มิวด้า"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"บรูไน"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"โบลิเวีย"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"บราซิล"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"บาฮามาส"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"ภูฐาน"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"บอตสวานา"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"เบลลารัส"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"เบลิซ"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"แคนาดา"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"สาธารณรัฐแอฟริกากลาง"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"คองโก"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"สวิสเซอร์แลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"ฝั่งทะเลไอวอริ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"ชิลี"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"คาเมรูน"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"จีน"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"โคลัมเบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"คอสตาริก้า"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"คิวบา"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"เคพเวอร์ด"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"ไซปรัส"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"สาธารณรัฐเช็ค"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"เยอรมนี"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"ดิโบติ"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"เดนมาร์ก"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"โดมินิก้า"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"สาธารณรัฐโดมินิกัน"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"แอลจีเรีย"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"เอกวาดอร์"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"เอสโตเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"อียิปต์"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"ซาฮาร่าตะวันตก"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"อิริทรี"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"สเปน"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"เอธิโอเปีย"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"ฟินแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"ฟิจิ"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"ไมโครนิเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ฝรั่งเศส"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"กาบอน"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"สหราชอาณาจักร"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"จอร์เจีย"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"เฟร็นชกิวน่า"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"กาน่า"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"แกมเบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"กิวนี"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"กัวเดอลูป"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"เอควาโทเรียลกินี"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"กรีซ"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"กัวเตมาลา"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"กิวนี-บิสโซ"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"กูยาน่า"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"ฮ่องกง"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"ฮอนดูรัส"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"โครเอเชีย"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"ไฮตี"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"ฮังการี"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"อินโดนีเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ไอร์แลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"อิสราเอล"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"อินเดีย"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"อิรัก"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"อิหร่าน"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"ไอซแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"อิตาลี"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"จาไมก้า"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"จอร์แดน"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ญี่ปุ่น"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"เคนย่า"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"เคอร์กิสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"กัมพูชา"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"คิรีบาติ"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"โคโมรอส"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"เกาหลีเหนือ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"เกาหลีใต้"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"คูเวต"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"คาซัคสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"ลาว"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"เลบานอน"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"ไลเทนสไตน์"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"ศรีลังกา"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"ลิเบอร์เลีย"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"เลโซโท"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"ลิเทอร์เนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"ลักซ์เซมเบอร์ก"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"ลาตเวีย"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ลิเบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"โมรอคโค"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"โมนาโค"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"โมลโดวา"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"มาดากาสก้า"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"แมซีโดเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"มาลี"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"สหภาพพม่า"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"มองโกเลีย"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"มาร์ตินิก"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"มอริทาเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"มอนต์เซอราต"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"มัลต้า"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"มอริเตียส"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"แม็กซิโก"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"มาเลเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"โมแซมบิค"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"นามิเบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"นิวคาลิโดเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"ไนเจอร์"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"ไนจีเรีย"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"นิคารากัว"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"เนเธอร์แลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"นอร์เวย์"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"เนปาล"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"นียู"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"นิวซีแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"โอมาน"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"ปานามา"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"เปรู"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"เฟร็นชโพลินีเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"ปาปัวนิวกีนี"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ฟิลิปปินส์"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"ปากีสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"โปแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"เปอร์โตริโก"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"โปตุกัล"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"ปารากวัย"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"กาตาร์"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"รูเมเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"รัสเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"ราวัลดา"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"ซาอุดิอาระเบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"เซย์แชลล์"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"ซูดาน"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"สวีเดน"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"สิงคโปร์"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"สโลวิเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"สโลวาเกีย"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"เซียร์ร่าลีออน"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"ซินีกัล"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"โซมาเลีย"_s)
		}),
		$$new($ObjectArray, {
			$of("SP"_s),
			$of(u"เซอร์เบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"ซูรินามิ"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"เอลซาวาดอร์"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"ซีเรีย"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"สวาซิแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"ชาด"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"อาณาเขตทางใต้ของฝรั่งเศส"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"โตโก"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"ประเทศไทย"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"ทาจิกิสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"โทกิโล"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"เติร์กเมนิสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"ตูนิเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"ทองก้า"_s)
		}),
		$$new($ObjectArray, {
			$of("TP"_s),
			$of(u"ติมอร์ตะวันออก"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"ตุรกี"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"ทรินิแดด และโทบาโก"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"ไต้หวัน"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"ทานซาเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"ยูเครน"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"อูกานดา"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"สหรัฐอเมริกา"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"อุรูกวัย"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"อุซเบกิสถาน"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"วาติกัน"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"เวเนซูเอล่า"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"บริทิชเวอร์จินไอส์แลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ยูเอสเวอร์จินไอส์แลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"เวียดนาม"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"วานัวตู"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"เยเมน"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"มายอต"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"แอฟริกาใต้"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"แซมเบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("ZR"_s),
			$of(u"แซร์"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"ซิมบาบเว"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"อาฟา"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"แอบกาเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"แอฟริกัน"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"อัมฮาริค"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"อาระบิค"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"อัสสัมมิส"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ไอมารา"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"อาเซอร์ไบจานี"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"บาสช์กีร์"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"บายโลรัสเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"บัลแกเรีย"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"บิฮารี"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"บิสลามา"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"เบนการี"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"ทิเบต"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"บรีทัน"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"แคตาแลน"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"คอร์ซิกา"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"เช็ค"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"เวลส์"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"เดนมาร์ก"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"เยอรมัน"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"ภูฐานี"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"กรีก"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"อังกฤษ"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"เอสเปอรันโต"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"สเปน"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"เอสโตเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"แบสก์"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"เปอร์เซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"ฟิน"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"ฟิจิ"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"ฟาโรส"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ฝรั่งเศส"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"ฟรีสแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"ไอริช"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"สก็อตส์เกลิค"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"กะลีเชีย"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"กัวรานี"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"กูจาราติ"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"โฮซา"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"ยิว"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ฮีนดิ"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"โครเอเทีย"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"ฮังการี"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"อาร์มีเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"อินเตอร์ลิงกวา"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"อินโดนีเชีย"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"อินเตอร์ลิงค์"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"ไอนูเปียก"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"อินโดนีเชีย"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"ไอซ์แลนด์ดิค"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"อิตาลี"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"ไอนุกติตัท"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"ยิว"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ญี่ปุ่น"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"ยีดิช"_s)
		}),
		$$new($ObjectArray, {
			$of("jw"_s),
			$of(u"ชวา"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"จอร์เจียน"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"คาซัค"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"กรีนแลนด์ดิค"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"เขมร"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"กานาดา"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"เกาหลี"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"คัชมีรี"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"เคิด"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"เคอร์กิซ"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"ละติน"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"ลิงกาลา"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"ลาว"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"ลิธัวเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"แลตเวีย (เลททิสช์)"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"มาลากาซี"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"เมารี"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"แมซีโดเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"แมละยาลัม"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"มองโกล"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"โมดาเวีย"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"มาราที"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"มลายู"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"มอลตา"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"พม่า"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"นอรู"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"เนปาล"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"ฮอลันดา"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"นอร์เวย์"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"ออกซิทัน"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"โอโรโม (อาฟาน)"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"โอริยา"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"ปัญจาป"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"โปแลนด์"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"พาสช์โต (พุสช์โต)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"โปรตุเกส"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"คิวชัว"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"เรโต-โรแมนซ์"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"คิรันดี"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"โรมัน"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"รัสเซีย"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"คินยาวันดา"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"สันสกฤต"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"ซินดิ"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"สันโค"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"สิงหล"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"สโลวัค"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"สโลเวเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"ซามัว"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"โซนา"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"โซมาลี"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"แอลเบเนีย"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"เซอร์เบีย"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"ซีสวาติ"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"เซโสโท"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"ซันดานีส"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"สวีเดน"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"ซวาฮิรี"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"ทมิฬ"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"ทิลูกู"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"ทาจิค"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"ไทย"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"ทิกรินยา"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"เติร์กเมน"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"ตากาล็อก"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"เซตสวานา"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"ทองก้า"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"ตุรกี"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"ซองกา"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"ตาด"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"ทวี"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"อุยกัว"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ยูเครน"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"อิรดู"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"อุสเบค"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"เวียดนาม"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"โวลาพุก"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"วูลอฟ"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"โซสา"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"ยีดิช"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"โยรูบา"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"จวง"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"จีน"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"ซูลู"_s)
		})
	});
}

LocaleNames_th::LocaleNames_th() {
}

$Class* LocaleNames_th::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_th, name, initialize, &_LocaleNames_th_ClassInfo_, allocate$LocaleNames_th);
	return class$;
}

$Class* LocaleNames_th::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun