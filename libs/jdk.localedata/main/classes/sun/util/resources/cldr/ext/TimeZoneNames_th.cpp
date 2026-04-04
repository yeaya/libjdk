#include <sun/util/resources/cldr/ext/TimeZoneNames_th.h>
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

void TimeZoneNames_th::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_th::getContents() {
	$useLocalObjectStack();
	$var($StringArray, GMT, $new($StringArray, {
		u"เวลามาตรฐานกรีนิช"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Acre, $new($StringArray, {
		u"เวลามาตรฐานอาเกร"_s,
		""_s,
		u"เวลาฤดูร้อนอาเกร"_s,
		""_s,
		u"เวลาอาเกร"_s,
		""_s
	}));
	$var($StringArray, Apia, $new($StringArray, {
		u"เวลามาตรฐานอาปีอา"_s,
		""_s,
		u"เวลาออมแสงอาปีอา"_s,
		""_s,
		u"เวลาอาปีอา"_s,
		""_s
	}));
	$var($StringArray, Cook, $new($StringArray, {
		u"เวลามาตรฐานหมู่เกาะคุก"_s,
		""_s,
		u"เวลาครึ่งฤดูร้อนหมู่เกาะคุก"_s,
		""_s,
		u"เวลาหมู่เกาะคุก"_s,
		""_s
	}));
	$var($StringArray, Cuba, $new($StringArray, {
		u"เวลามาตรฐานคิวบา"_s,
		""_s,
		u"เวลาออมแสงของคิวบา"_s,
		""_s,
		u"เวลาคิวบา"_s,
		""_s
	}));
	$var($StringArray, Fiji, $new($StringArray, {
		u"เวลามาตรฐานฟิจิ"_s,
		""_s,
		u"เวลาฤดูร้อนฟิจิ"_s,
		""_s,
		u"เวลาฟิจิ"_s,
		""_s
	}));
	$var($StringArray, Gulf, $new($StringArray, {
		u"เวลากัลฟ์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hovd, $new($StringArray, {
		u"เวลามาตรฐานฮอฟด์"_s,
		""_s,
		u"เวลาฤดูร้อนฮอฟด์"_s,
		""_s,
		u"เวลาฮอฟด์"_s,
		""_s
	}));
	$var($StringArray, Iran, $new($StringArray, {
		u"เวลามาตรฐานอิหร่าน"_s,
		""_s,
		u"เวลาออมแสงอิหร่าน"_s,
		""_s,
		u"เวลาอิหร่าน"_s,
		""_s
	}));
	$var($StringArray, Niue, $new($StringArray, {
		u"เวลานีอูเอ"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Omsk, $new($StringArray, {
		u"เวลามาตรฐานออมสค์"_s,
		""_s,
		u"เวลาฤดูร้อนออมสค์"_s,
		""_s,
		u"เวลาออมสค์"_s,
		""_s
	}));
	$var($StringArray, Peru, $new($StringArray, {
		u"เวลามาตรฐานเปรู"_s,
		""_s,
		u"เวลาฤดูร้อนเปรู"_s,
		""_s,
		u"เวลาเปรู"_s,
		""_s
	}));
	$var($StringArray, Truk, $new($StringArray, {
		u"เวลาชุก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wake, $new($StringArray, {
		u"เวลาเกาะเวก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Casey, $new($StringArray, {
		u"เวลาเคซีย์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chile, $new($StringArray, {
		u"เวลามาตรฐานชิลี"_s,
		""_s,
		u"เวลาฤดูร้อนชิลี"_s,
		""_s,
		u"เวลาชิลี"_s,
		""_s
	}));
	$var($StringArray, China, $new($StringArray, {
		u"เวลามาตรฐานจีน"_s,
		""_s,
		u"เวลาออมแสงจีน"_s,
		""_s,
		u"เวลาจีน"_s,
		""_s
	}));
	$var($StringArray, Cocos, $new($StringArray, {
		u"เวลาหมู่เกาะโคโคส"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Davis, $new($StringArray, {
		u"เวลาเดวิส"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, India, $new($StringArray, {
		u"เวลาอินเดีย"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Japan, $new($StringArray, {
		u"เวลามาตรฐานญี่ปุ่น"_s,
		""_s,
		u"เวลาออมแสงญี่ปุ่น"_s,
		""_s,
		u"เวลาญี่ปุ่น"_s,
		""_s
	}));
	$var($StringArray, Korea, $new($StringArray, {
		u"เวลามาตรฐานเกาหลี"_s,
		""_s,
		u"เวลาออมแสงเกาหลี"_s,
		""_s,
		u"เวลาเกาหลี"_s,
		""_s
	}));
	$var($StringArray, Nauru, $new($StringArray, {
		u"เวลานาอูรู"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Nepal, $new($StringArray, {
		u"เวลาเนปาล"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Palau, $new($StringArray, {
		u"เวลาปาเลา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samoa, $new($StringArray, {
		u"เวลามาตรฐานซามัว"_s,
		""_s,
		u"เวลาฤดูร้อนซามัว"_s,
		""_s,
		u"เวลาซามัว"_s,
		""_s
	}));
	$var($StringArray, Syowa, $new($StringArray, {
		u"เวลาไซโยวา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tonga, $new($StringArray, {
		u"เวลามาตรฐานตองกา"_s,
		""_s,
		u"เวลาฤดูร้อนตองกา"_s,
		""_s,
		u"เวลาตองกา"_s,
		""_s
	}));
	$var($StringArray, Alaska, $new($StringArray, {
		u"เวลามาตรฐานอะแลสกา"_s,
		""_s,
		u"เวลาออมแสงของอะแลสกา"_s,
		""_s,
		u"เวลาอะแลสกา"_s,
		""_s
	}));
	$var($StringArray, Amazon, $new($StringArray, {
		u"เวลามาตรฐานแอมะซอน"_s,
		""_s,
		u"เวลาฤดูร้อนแอมะซอน"_s,
		""_s,
		u"เวลาแอมะซอน"_s,
		""_s
	}));
	$var($StringArray, Anadyr, $new($StringArray, {
		u"เวลามาตรฐานอะนาดีร์"_s,
		""_s,
		u"เวลาฤดูร้อนอะนาดีร์"_s,
		""_s,
		u"เวลาอะนาดีร์"_s,
		""_s
	}));
	$var($StringArray, Azores, $new($StringArray, {
		u"เวลามาตรฐานอะโซร์ส"_s,
		""_s,
		u"เวลาฤดูร้อนอะโซร์ส"_s,
		""_s,
		u"เวลาอะโซร์ส"_s,
		""_s
	}));
	$var($StringArray, Bhutan, $new($StringArray, {
		u"เวลาภูฏาน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Brunei, $new($StringArray, {
		u"เวลาบรูไนดารุสซาลาม"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Easter, $new($StringArray, {
		u"เวลามาตรฐานเกาะอีสเตอร์"_s,
		""_s,
		u"เวลาฤดูร้อนเกาะอีสเตอร์"_s,
		""_s,
		u"เวลาเกาะอีสเตอร์"_s,
		""_s
	}));
	$var($StringArray, Guyana, $new($StringArray, {
		u"เวลากายอานา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Israel, $new($StringArray, {
		u"เวลามาตรฐานอิสราเอล"_s,
		""_s,
		u"เวลาออมแสงอิสราเอล"_s,
		""_s,
		u"เวลาอิสราเอล"_s,
		""_s
	}));
	$var($StringArray, Kosrae, $new($StringArray, {
		u"เวลาคอสไร"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mawson, $new($StringArray, {
		u"เวลามอว์สัน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Moscow, $new($StringArray, {
		u"เวลามาตรฐานมอสโก"_s,
		""_s,
		u"เวลาฤดูร้อนมอสโก"_s,
		""_s,
		u"เวลามอสโก"_s,
		""_s
	}));
	$var($StringArray, Ponape, $new($StringArray, {
		u"เวลาโปนาเป"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Samara, $new($StringArray, {
		u"เวลามาตรฐานซามารา"_s,
		""_s,
		u"เวลาฤดูร้อนซามารา"_s,
		""_s,
		u"เวลาซามารา"_s,
		""_s
	}));
	$var($StringArray, Tahiti, $new($StringArray, {
		u"เวลาตาฮีตี"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Taipei, $new($StringArray, {
		u"เวลามาตรฐานไทเป"_s,
		""_s,
		u"เวลาออมแสงไทเป"_s,
		""_s,
		u"เวลาไทเป"_s,
		""_s
	}));
	$var($StringArray, Tuvalu, $new($StringArray, {
		u"เวลาตูวาลู"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Vostok, $new($StringArray, {
		u"เวลาวอสตอค"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Wallis, $new($StringArray, {
		u"เวลาวาลลิสและฟุตูนา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Arabian, $new($StringArray, {
		u"เวลามาตรฐานอาหรับ"_s,
		""_s,
		u"เวลาออมแสงอาหรับ"_s,
		""_s,
		u"เวลาอาหรับ"_s,
		""_s
	}));
	$var($StringArray, Armenia, $new($StringArray, {
		u"เวลามาตรฐานอาร์เมเนีย"_s,
		""_s,
		u"เวลาฤดูร้อนอาร์เมเนีย"_s,
		""_s,
		u"เวลาอาร์เมเนีย"_s,
		""_s
	}));
	$var($StringArray, Bolivia, $new($StringArray, {
		u"เวลาโบลิเวีย"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Chatham, $new($StringArray, {
		u"เวลามาตรฐานแชทัม"_s,
		""_s,
		u"เวลาออมแสงแชทัม"_s,
		""_s,
		u"เวลาแชทัม"_s,
		""_s
	}));
	$var($StringArray, ETC_UTC, $new($StringArray, {
		u"เวลาสากลเชิงพิกัด"_s,
		"UTC"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Ecuador, $new($StringArray, {
		u"เวลาเอกวาดอร์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gambier, $new($StringArray, {
		u"เวลาแกมเบียร์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Georgia, $new($StringArray, {
		u"เวลามาตรฐานจอร์เจีย"_s,
		""_s,
		u"เวลาฤดูร้อนจอร์เจีย"_s,
		""_s,
		u"เวลาจอร์เจีย"_s,
		""_s
	}));
	$var($StringArray, Irkutsk, $new($StringArray, {
		u"เวลามาตรฐานอีร์คุตสค์"_s,
		""_s,
		u"เวลาฤดูร้อนอีร์คุตสค์"_s,
		""_s,
		u"เวลาอีร์คุตสค์"_s,
		""_s
	}));
	$var($StringArray, Magadan, $new($StringArray, {
		u"เวลามาตรฐานมากาดาน"_s,
		""_s,
		u"เวลาฤดูร้อนมากาดาน"_s,
		""_s,
		u"เวลามากาดาน"_s,
		""_s
	}));
	$var($StringArray, Myanmar, $new($StringArray, {
		u"เวลาพม่า"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Norfolk, $new($StringArray, {
		u"เวลามาตรฐานเกาะนอร์ฟอล์ก"_s,
		""_s,
		u"เวลาออมแสงเกาะนอร์ฟอล์ก"_s,
		""_s,
		u"เวลาเกาะนอร์ฟอล์ก"_s,
		""_s
	}));
	$var($StringArray, Noronha, $new($StringArray, {
		u"เวลามาตรฐานหมู่เกาะเฟอร์นันโด"_s,
		""_s,
		u"เวลาฤดูร้อนของหมู่เกาะเฟอร์นันโด"_s,
		""_s,
		u"เวลาหมู่เกาะเฟอร์นันโด"_s,
		""_s
	}));
	$var($StringArray, Reunion, $new($StringArray, {
		u"เวลาเรอูนียง"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Rothera, $new($StringArray, {
		u"เวลาโรธีรา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Solomon, $new($StringArray, {
		u"เวลาหมู่เกาะโซโลมอน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tokelau, $new($StringArray, {
		u"เวลาโตเกเลา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uruguay, $new($StringArray, {
		u"เวลามาตรฐานอุรุกวัย"_s,
		""_s,
		u"เวลาฤดูร้อนอุรุกวัย"_s,
		""_s,
		u"เวลาอุรุกวัย"_s,
		""_s
	}));
	$var($StringArray, Vanuatu, $new($StringArray, {
		u"เวลามาตรฐานวานูอาตู"_s,
		""_s,
		u"เวลาฤดูร้อนวานูอาตู"_s,
		""_s,
		u"เวลาวานูอาตู"_s,
		""_s
	}));
	$var($StringArray, Yakutsk, $new($StringArray, {
		u"เวลามาตรฐานยาคุตสค์"_s,
		""_s,
		u"เวลาฤดูร้อนยาคุตสค์"_s,
		""_s,
		u"เวลายาคุตสค์"_s,
		""_s
	}));
	$var($StringArray, Atlantic, $new($StringArray, {
		u"เวลามาตรฐานแอตแลนติก"_s,
		""_s,
		u"เวลาออมแสงของแอตแลนติก"_s,
		""_s,
		u"เวลาแอตแลนติก"_s,
		""_s
	}));
	$var($StringArray, Brasilia, $new($StringArray, {
		u"เวลามาตรฐานบราซิเลีย"_s,
		""_s,
		u"เวลาฤดูร้อนบราซิเลีย"_s,
		""_s,
		u"เวลาบราซิเลีย"_s,
		""_s
	}));
	$var($StringArray, Chamorro, $new($StringArray, {
		u"เวลาชามอร์โร"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Colombia, $new($StringArray, {
		u"เวลามาตรฐานโคลอมเบีย"_s,
		""_s,
		u"เวลาฤดูร้อนโคลอมเบีย"_s,
		""_s,
		u"เวลาโคลอมเบีย"_s,
		""_s
	}));
	$var($StringArray, Falkland, $new($StringArray, {
		u"เวลามาตรฐานหมู่เกาะฟอล์กแลนด์"_s,
		""_s,
		u"เวลาฤดูร้อนหมู่เกาะฟอล์กแลนด์"_s,
		""_s,
		u"เวลาหมู่เกาะฟอล์กแลนด์"_s,
		""_s
	}));
	$var($StringArray, Malaysia, $new($StringArray, {
		u"เวลามาเลเซีย"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Maldives, $new($StringArray, {
		u"เวลามัลดีฟส์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mongolia, $new($StringArray, {
		u"เวลามาตรฐานอูลานบาตอร์"_s,
		""_s,
		u"เวลาฤดูร้อนอูลานบาตอร์"_s,
		""_s,
		u"เวลาอูลานบาตอร์"_s,
		""_s
	}));
	$var($StringArray, Pakistan, $new($StringArray, {
		u"เวลามาตรฐานปากีสถาน"_s,
		""_s,
		u"เวลาฤดูร้อนปากีสถาน"_s,
		""_s,
		u"เวลาปากีสถาน"_s,
		""_s
	}));
	$var($StringArray, Paraguay, $new($StringArray, {
		u"เวลามาตรฐานปารากวัย"_s,
		""_s,
		u"เวลาฤดูร้อนปารากวัย"_s,
		""_s,
		u"เวลาปารากวัย"_s,
		""_s
	}));
	$var($StringArray, Pitcairn, $new($StringArray, {
		u"เวลาพิตแคร์น"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Sakhalin, $new($StringArray, {
		u"เวลามาตรฐานซาคาลิน"_s,
		""_s,
		u"เวลาฤดูร้อนซาคาลิน"_s,
		""_s,
		u"เวลาซาคาลิน"_s,
		""_s
	}));
	$var($StringArray, Suriname, $new($StringArray, {
		u"เวลาซูรินาเม"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Argentina, $new($StringArray, {
		u"เวลามาตรฐานอาร์เจนตินา"_s,
		""_s,
		u"เวลาฤดูร้อนอาร์เจนตินา"_s,
		""_s,
		u"เวลาอาร์เจนตินา"_s,
		""_s
	}));
	$var($StringArray, Christmas, $new($StringArray, {
		u"เวลาเกาะคริสต์มาส"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Galapagos, $new($StringArray, {
		u"เวลากาลาปาโกส"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hong_Kong, $new($StringArray, {
		u"เวลามาตรฐานฮ่องกง"_s,
		""_s,
		u"เวลาฤดูร้อนฮ่องกง"_s,
		""_s,
		u"เวลาฮ่องกง"_s,
		""_s
	}));
	$var($StringArray, Indochina, $new($StringArray, {
		u"เวลาอินโดจีน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kamchatka, $new($StringArray, {
		u"เวลาเปโตรปัฟลอฟสค์-คัมชัตสกี"_s,
		""_s,
		u"เวลาฤดูร้อนเปโตรปัฟลอฟสค์-คัมชัตสกี"_s,
		""_s,
		u"เวลาคัมชัตคา"_s,
		""_s
	}));
	$var($StringArray, Kyrgystan, $new($StringArray, {
		u"เวลาคีร์กีซสถาน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Lord_Howe, $new($StringArray, {
		u"เวลามาตรฐานลอร์ดโฮว์"_s,
		""_s,
		u"เวลาออมแสงลอร์ดโฮว์"_s,
		""_s,
		u"เวลาลอร์ดโฮว์"_s,
		""_s
	}));
	$var($StringArray, Marquesas, $new($StringArray, {
		u"เวลามาร์เคซัส"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mauritius, $new($StringArray, {
		u"เวลามาตรฐานมอริเชียส"_s,
		""_s,
		u"เวลาฤดูร้อนของมอริเชียส"_s,
		""_s,
		u"เวลามอริเชียส"_s,
		""_s
	}));
	$var($StringArray, Singapore, $new($StringArray, {
		u"เวลาสิงคโปร์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Venezuela, $new($StringArray, {
		u"เวลาเวเนซุเอลา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Volgograd, $new($StringArray, {
		u"เวลามาตรฐานวอลโกกราด"_s,
		""_s,
		u"เวลาฤดูร้อนวอลโกกราด"_s,
		""_s,
		u"เวลาวอลโกกราด"_s,
		""_s
	}));
	$var($StringArray, Azerbaijan, $new($StringArray, {
		u"เวลามาตรฐานอาเซอร์ไบจาน"_s,
		""_s,
		u"เวลาฤดูร้อนอาเซอร์ไบจาน"_s,
		""_s,
		u"เวลาอาเซอร์ไบจาน"_s,
		""_s
	}));
	$var($StringArray, Bangladesh, $new($StringArray, {
		u"เวลามาตรฐานบังกลาเทศ"_s,
		""_s,
		u"เวลาฤดูร้อนบังกลาเทศ"_s,
		""_s,
		u"เวลาบังกลาเทศ"_s,
		""_s
	}));
	$var($StringArray, Cape_Verde, $new($StringArray, {
		u"เวลามาตรฐานเคปเวิร์ด"_s,
		""_s,
		u"เวลาฤดูร้อนเคปเวิร์ด"_s,
		""_s,
		u"เวลาเคปเวิร์ด"_s,
		""_s
	}));
	$var($StringArray, East_Timor, $new($StringArray, {
		u"เวลาติมอร์ตะวันออก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Seychelles, $new($StringArray, {
		u"เวลาเซเชลส์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Tajikistan, $new($StringArray, {
		u"เวลาทาจิกิสถาน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Uzbekistan, $new($StringArray, {
		u"เวลามาตรฐานอุซเบกิสถาน"_s,
		""_s,
		u"เวลาฤดูร้อนอุซเบกิสถาน"_s,
		""_s,
		u"เวลาอุซเบกิสถาน"_s,
		""_s
	}));
	$var($StringArray, Afghanistan, $new($StringArray, {
		u"เวลาอัฟกานิสถาน"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Krasnoyarsk, $new($StringArray, {
		u"เวลามาตรฐานครัสโนยาสค์"_s,
		""_s,
		u"เวลาฤดูร้อนครัสโนยาสค์"_s,
		""_s,
		u"เวลาครัสโนยาสค์"_s,
		""_s
	}));
	$var($StringArray, New_Zealand, $new($StringArray, {
		u"เวลามาตรฐานนิวซีแลนด์"_s,
		""_s,
		u"เวลาออมแสงนิวซีแลนด์"_s,
		""_s,
		u"เวลานิวซีแลนด์"_s,
		""_s
	}));
	$var($StringArray, Novosibirsk, $new($StringArray, {
		u"เวลามาตรฐานโนโวซีบีสค์"_s,
		""_s,
		u"เวลาฤดูร้อนโนโวซีบีสค์"_s,
		""_s,
		u"เวลาโนโวซีบีสค์"_s,
		""_s
	}));
	$var($StringArray, Philippines, $new($StringArray, {
		u"เวลามาตรฐานฟิลิปปินส์"_s,
		""_s,
		u"เวลาฤดูร้อนฟิลิปปินส์"_s,
		""_s,
		u"เวลาฟิลิปปินส์"_s,
		""_s
	}));
	$var($StringArray, Vladivostok, $new($StringArray, {
		u"เวลามาตรฐานวลาดีวอสตอค"_s,
		""_s,
		u"เวลาฤดูร้อนวลาดีวอสตอค"_s,
		""_s,
		u"เวลาวลาดีวอสตอค"_s,
		""_s
	}));
	$var($StringArray, Indian_Ocean, $new($StringArray, {
		u"เวลามหาสมุทรอินเดีย"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Line_Islands, $new($StringArray, {
		u"เวลาหมู่เกาะไลน์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Newfoundland, $new($StringArray, {
		u"เวลามาตรฐานนิวฟันด์แลนด์"_s,
		""_s,
		u"เวลาออมแสงนิวฟันด์แลนด์"_s,
		""_s,
		u"เวลานิวฟันด์แลนด์"_s,
		""_s
	}));
	$var($StringArray, Turkmenistan, $new($StringArray, {
		u"เวลามาตรฐานเติร์กเมนิสถาน"_s,
		""_s,
		u"เวลาฤดูร้อนเติร์กเมนิสถาน"_s,
		""_s,
		u"เวลาเติร์กเมนิสถาน"_s,
		""_s
	}));
	$var($StringArray, French_Guiana, $new($StringArray, {
		u"เวลาเฟรนช์เกียนา"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, New_Caledonia, $new($StringArray, {
		u"เวลามาตรฐานนิวแคลิโดเนีย"_s,
		""_s,
		u"เวลาฤดูร้อนนิวแคลิโดเนีย"_s,
		""_s,
		u"เวลานิวแคลิโดเนีย"_s,
		""_s
	}));
	$var($StringArray, South_Georgia, $new($StringArray, {
		u"เวลาเซาท์จอร์เจีย"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Yekaterinburg, $new($StringArray, {
		u"เวลามาตรฐานเยคาเตรินบูร์ก"_s,
		""_s,
		u"เวลาฤดูร้อนเยคาเตรินบูร์ก"_s,
		""_s,
		u"เวลาเยคาเตรินบูร์ก"_s,
		""_s
	}));
	$var($StringArray, Africa_Central, $new($StringArray, {
		u"เวลาแอฟริกากลาง"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Eastern, $new($StringArray, {
		u"เวลาแอฟริกาตะวันออก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Africa_Western, $new($StringArray, {
		u"เวลามาตรฐานแอฟริกาตะวันตก"_s,
		""_s,
		u"เวลาฤดูร้อนแอฟริกาตะวันตก"_s,
		""_s,
		u"เวลาแอฟริกาตะวันตก"_s,
		""_s
	}));
	$var($StringArray, DumontDUrville, $new($StringArray, {
		u"เวลาดูมองต์ดูร์วิลล์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Europe_Central, $new($StringArray, {
		u"เวลามาตรฐานยุโรปกลาง"_s,
		""_s,
		u"เวลาฤดูร้อนยุโรปกลาง"_s,
		""_s,
		u"เวลายุโรปกลาง"_s,
		""_s
	}));
	$var($StringArray, Europe_Eastern, $new($StringArray, {
		u"เวลามาตรฐานยุโรปตะวันออก"_s,
		""_s,
		u"เวลาฤดูร้อนยุโรปตะวันออก"_s,
		""_s,
		u"เวลายุโรปตะวันออก"_s,
		""_s
	}));
	$var($StringArray, Europe_Western, $new($StringArray, {
		u"เวลามาตรฐานยุโรปตะวันตก"_s,
		""_s,
		u"เวลาฤดูร้อนยุโรปตะวันตก"_s,
		""_s,
		u"เวลายุโรปตะวันตก"_s,
		""_s
	}));
	$var($StringArray, Mexico_Pacific, $new($StringArray, {
		u"เวลามาตรฐานแปซิฟิกเม็กซิโก"_s,
		""_s,
		u"เวลาออมแสงแปซิฟิกเม็กซิโก"_s,
		""_s,
		u"เวลาแปซิฟิกเม็กซิโก"_s,
		""_s
	}));
	$var($StringArray, Africa_Southern, $new($StringArray, {
		u"เวลาแอฟริกาใต้"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, America_Central, $new($StringArray, {
		u"เวลามาตรฐานตอนกลางในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาออมแสงตอนกลางในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาตอนกลางในอเมริกาเหนือ"_s,
		""_s
	}));
	$var($StringArray, America_Eastern, $new($StringArray, {
		u"เวลามาตรฐานทางตะวันออกในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาออมแสงทางตะวันออกในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาทางตะวันออกในอเมริกาเหนือ"_s,
		""_s
	}));
	$var($StringArray, America_Pacific, $new($StringArray, {
		u"เวลามาตรฐานแปซิฟิกในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาออมแสงแปซิฟิกในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาแปซิฟิกในอเมริกาเหนือ"_s,
		""_s
	}));
	$var($StringArray, French_Southern, $new($StringArray, {
		u"เวลาเฟรนช์เซาเทิร์นและแอนตาร์กติก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Gilbert_Islands, $new($StringArray, {
		u"เวลาหมู่เกาะกิลเบิร์ต"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Hawaii_Aleutian, $new($StringArray, {
		u"เวลามาตรฐานฮาวาย-อะลูเชียน"_s,
		""_s,
		u"เวลาออมแสงฮาวาย-อะลูเชียน"_s,
		""_s,
		u"เวลาฮาวาย-อะลูเชียน"_s,
		""_s
	}));
	$var($StringArray, Phoenix_Islands, $new($StringArray, {
		u"เวลาหมู่เกาะฟินิกซ์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Pierre_Miquelon, $new($StringArray, {
		u"เวลามาตรฐานแซงปีแยร์และมีเกอลง"_s,
		""_s,
		u"เวลาออมแสงของแซงปีแยร์และมีเกอลง"_s,
		""_s,
		u"เวลาแซงปีแยร์และมีเกอลง"_s,
		""_s
	}));
	$var($StringArray, America_Mountain, $new($StringArray, {
		u"เวลามาตรฐานแถบภูเขาในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาออมแสงแถบภูเขาในอเมริกาเหนือ"_s,
		""_s,
		u"เวลาแถบภูเขาในอเมริกาเหนือ"_s,
		""_s
	}));
	$var($StringArray, Marshall_Islands, $new($StringArray, {
		u"เวลาหมู่เกาะมาร์แชลล์"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Mexico_Northwest, $new($StringArray, {
		u"เวลามาตรฐานเม็กซิโกตะวันตกเฉียงเหนือ"_s,
		""_s,
		u"เวลาออมแสงเม็กซิโกตะวันตกเฉียงเหนือ"_s,
		""_s,
		u"เวลาเม็กซิโกตะวันตกเฉียงเหนือ"_s,
		""_s
	}));
	$var($StringArray, Papua_New_Guinea, $new($StringArray, {
		u"เวลาปาปัวนิวกินี"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_Central, $new($StringArray, {
		u"เวลามาตรฐานทางตอนกลางของออสเตรเลีย"_s,
		""_s,
		u"เวลาออมแสงทางตอนกลางของออสเตรเลีย"_s,
		""_s,
		u"เวลาออสเตรเลียกลาง"_s,
		""_s
	}));
	$var($StringArray, Australia_Eastern, $new($StringArray, {
		u"เวลามาตรฐานทางตะวันออกของออสเตรเลีย"_s,
		""_s,
		u"เวลาออมแสงทางตะวันออกของออสเตรเลีย"_s,
		""_s,
		u"เวลาออสเตรเลียตะวันออก"_s,
		""_s
	}));
	$var($StringArray, Australia_Western, $new($StringArray, {
		u"เวลามาตรฐานทางตะวันตกของออสเตรเลีย"_s,
		""_s,
		u"เวลาออมแสงทางตะวันตกของออสเตรเลีย"_s,
		""_s,
		u"เวลาออสเตรเลียตะวันตก"_s,
		""_s
	}));
	$var($StringArray, Greenland_Eastern, $new($StringArray, {
		u"เวลามาตรฐานกรีนแลนด์ตะวันออก"_s,
		""_s,
		u"เวลาฤดูร้อนกรีนแลนด์ตะวันออก"_s,
		""_s,
		u"เวลากรีนแลนด์ตะวันออก"_s,
		""_s
	}));
	$var($StringArray, Greenland_Western, $new($StringArray, {
		u"เวลามาตรฐานกรีนแลนด์ตะวันตก"_s,
		""_s,
		u"เวลาฤดูร้อนกรีนแลนด์ตะวันตก"_s,
		""_s,
		u"เวลากรีนแลนด์ตะวันตก"_s,
		""_s
	}));
	$var($StringArray, Indonesia_Central, $new($StringArray, {
		u"เวลาอินโดนีเซียตอนกลาง"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Eastern, $new($StringArray, {
		u"เวลาอินโดนีเซียฝั่งตะวันออก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Indonesia_Western, $new($StringArray, {
		u"เวลาอินโดนีเซียฝั่งตะวันตก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Eastern, $new($StringArray, {
		u"เวลาคาซัคสถานตะวันออก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Kazakhstan_Western, $new($StringArray, {
		u"เวลาคาซัคสถานตะวันตก"_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, Australia_CentralWestern, $new($StringArray, {
		u"เวลามาตรฐานทางตะวันตกตอนกลางของออสเตรเลีย"_s,
		""_s,
		u"เวลาออมแสงทางตะวันตกตอนกลางของออสเตรเลีย"_s,
		""_s,
		u"เวลาทางตะวันตกตอนกลางของออสเตรเลีย"_s,
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
				u"เวลามาตรฐานกรีนิช"_s,
				""_s,
				u"เวลามาตรฐานไอร์แลนด์"_s,
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
				u"เวลามาตรฐานกรีนิช"_s,
				""_s,
				u"เวลาฤดูร้อนอังกฤษ"_s,
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
				u"เวลามาตรฐานกรีนิช"_s,
				""_s,
				u"เวลาฤดูร้อนอังกฤษ"_s,
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
			"Antarctica/Casey"_s,
			Casey
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
			u"เอเดน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baku"_s,
			u"บากู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dili"_s,
			u"ดิลี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Gaza"_s,
			u"กาซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hovd"_s,
			u"ฮอฟด์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Omsk"_s,
			u"โอมสก์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Oral"_s,
			u"ออรัล"_s
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
			u"อัมมาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtau"_s,
			u"อัคตาอู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Chita"_s,
			u"ชิตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dhaka"_s,
			u"ดากา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dubai"_s,
			u"ดูไบ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kabul"_s,
			u"คาบูล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Macau"_s,
			u"มาเก๊า"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qatar"_s,
			u"กาตาร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Seoul"_s,
			u"โซล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tokyo"_s,
			u"โตเกียว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tomsk"_s,
			u"ตอมสค์"_s
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
			u"จูบา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lome"_s,
			u"โลเม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Almaty"_s,
			u"อัลมาตี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Anadyr"_s,
			u"อานาดีร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Aqtobe"_s,
			u"อัคโทบี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Atyrau"_s,
			u"อทีราว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Beirut"_s,
			u"เบรุต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Brunei"_s,
			u"บรูไน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hebron"_s,
			u"เฮบรอน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuwait"_s,
			u"คูเวต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Manila"_s,
			u"มะนิลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Muscat"_s,
			u"มัสกัต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Riyadh"_s,
			u"ริยาร์ด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Saigon"_s,
			u"นครโฮจิมินห์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Taipei"_s,
			u"ไทเป"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tehran"_s,
			u"เตหะราน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Urumqi"_s,
			u"อุรุมชี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Etc/Unknown"_s,
			u"ไม่ทราบชื่อเมือง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kiev"_s,
			u"เคียฟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Oslo"_s,
			u"ออสโล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Riga"_s,
			u"ริกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Rome"_s,
			u"โรม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mahe"_s,
			u"มาเอ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Accra"_s,
			u"อักกรา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Cairo"_s,
			u"ไคโร"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ceuta"_s,
			u"เซวตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dakar"_s,
			u"ดาการ์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lagos"_s,
			u"ลากอส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tunis"_s,
			u"ตูนิส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Adak"_s,
			u"เอดัก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lima"_s,
			u"ลิมา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nome"_s,
			u"นอม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Baghdad"_s,
			u"แบกแดด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bahrain"_s,
			u"บาห์เรน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bangkok"_s,
			u"กรุงเทพ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Barnaul"_s,
			u"บาร์เนาว์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Bishkek"_s,
			u"บิชเคก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Colombo"_s,
			u"โคลัมโบ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Irkutsk"_s,
			u"อีร์คุตสค์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jakarta"_s,
			u"จาการ์ตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Karachi"_s,
			u"การาจี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuching"_s,
			u"กูชิง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Magadan"_s,
			u"มากาดาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Nicosia"_s,
			u"นิโคเซีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Rangoon"_s,
			u"ย่างกุ้ง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tbilisi"_s,
			u"ทบิลิซิ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Thimphu"_s,
			u"ทิมพู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yakutsk"_s,
			u"ยาคุตสค์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yerevan"_s,
			u"เยเรวาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kirov"_s,
			u"คิรอฟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Malta"_s,
			u"มอลตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Minsk"_s,
			u"มินสก์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Paris"_s,
			u"ปารีส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sofia"_s,
			u"โซเฟีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vaduz"_s,
			u"วาดุซ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Cocos"_s,
			u"โคโคส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Apia"_s,
			u"อาปีอา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fiji"_s,
			u"ฟิจิ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guam"_s,
			u"กวม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Niue"_s,
			u"นีอูเอ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Truk"_s,
			u"ทรัก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wake"_s,
			u"เวก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Asmera"_s,
			u"แอสมารา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bamako"_s,
			u"บามาโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bangui"_s,
			u"บังกี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Banjul"_s,
			u"บันจูล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bissau"_s,
			u"บิสเซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Douala"_s,
			u"ดูอาลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Harare"_s,
			u"ฮาราเร"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kigali"_s,
			u"คิกาลี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Luanda"_s,
			u"ลูอันดา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lusaka"_s,
			u"ลูซากา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Malabo"_s,
			u"มาลาโบ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maputo"_s,
			u"มาปูโต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Maseru"_s,
			u"มาเซรู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Niamey"_s,
			u"นีอาเมย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Aruba"_s,
			u"อารูบา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia"_s,
			u"บาเยีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belem"_s,
			u"เบเลง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boise"_s,
			u"บอยซี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jujuy"_s,
			u"จูจิว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sitka"_s,
			u"ซิตกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thule"_s,
			u"ทูเล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ashgabat"_s,
			u"อาชกาบัต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Calcutta"_s,
			u"โกลกาตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Damascus"_s,
			u"ดามัสกัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Dushanbe"_s,
			u"ดูชานเบ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jayapura"_s,
			u"จายาปุระ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Katmandu"_s,
			u"กาตมันดุ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Khandyga"_s,
			u"ฮันดืยกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Makassar"_s,
			u"มากัสซาร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qostanay"_s,
			u"คอสตาเนย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Sakhalin"_s,
			u"ซาคาลิน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Shanghai"_s,
			u"เซี่ยงไฮ้"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Tashkent"_s,
			u"ทาชเคนต์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ust-Nera"_s,
			u"อุสต์เนรา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Athens"_s,
			u"เอเธนส์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Berlin"_s,
			u"เบอร์ลิน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Dublin"_s,
			u"ดับบลิน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Jersey"_s,
			u"เจอร์ซีย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Lisbon"_s,
			u"ลิสบอน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/London"_s,
			u"ลอนดอน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Madrid"_s,
			u"มาดริด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Monaco"_s,
			u"โมนาโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Moscow"_s,
			u"มอสโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Prague"_s,
			u"ปราก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Samara"_s,
			u"ซามารา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Skopje"_s,
			u"สโกเปีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tirane"_s,
			u"ติรานา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vienna"_s,
			u"เวียนนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Warsaw"_s,
			u"วอร์ซอ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zagreb"_s,
			u"ซาเกร็บ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zurich"_s,
			u"ซูริค"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Chagos"_s,
			u"ชากัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Comoro"_s,
			u"โคโมโร"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Efate"_s,
			u"เอฟาเต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Nauru"_s,
			u"นาอูรู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Palau"_s,
			u"ปาเลา"_s
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
			u"อาบีจาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Algiers"_s,
			u"แอลเจียร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Conakry"_s,
			u"โกนากรี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kampala"_s,
			u"คัมพาลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mbabane"_s,
			u"อัมบาบาเน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nairobi"_s,
			u"ไนโรเบีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Tripoli"_s,
			u"ตรีโปลี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Belize"_s,
			u"เบลีซ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bogota"_s,
			u"โบโกตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cancun"_s,
			u"แคนคุน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayman"_s,
			u"เคย์แมน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cuiaba"_s,
			u"กุยาบา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson"_s,
			u"ดอว์สัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Denver"_s,
			u"เดนเวอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guyana"_s,
			u"กายอานา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Havana"_s,
			u"ฮาวานา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Inuvik"_s,
			u"อินูวิก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Juneau"_s,
			u"จูโน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/La_Paz"_s,
			u"ลาปาซ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Maceio"_s,
			u"มาเซโอ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Manaus"_s,
			u"มาเนาส์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Merida"_s,
			u"เมรีดา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nassau"_s,
			u"แนสซอ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Panama"_s,
			u"ปานามา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Recife"_s,
			u"เรซีเฟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Regina"_s,
			u"ริไจนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Famagusta"_s,
			u"แฟมากุสตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Hong_Kong"_s,
			u"ฮ่องกง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Jerusalem"_s,
			u"เยรูซาเลม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kamchatka"_s,
			u"คามชัตกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pontianak"_s,
			u"พอนเทียนัก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Pyongyang"_s,
			u"เปียงยาง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Qyzylorda"_s,
			u"ไคซีลอร์ดา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Samarkand"_s,
			u"ซามาร์กานด์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Singapore"_s,
			u"สิงคโปร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vientiane"_s,
			u"เวียงจันทน์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Andorra"_s,
			u"อันดอร์รา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Saratov"_s,
			u"ซาราทอฟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Tallinn"_s,
			u"ทาลลินน์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vatican"_s,
			u"วาติกัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Vilnius"_s,
			u"วิลนีอุส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mayotte"_s,
			u"มาโยเต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Reunion"_s,
			u"เรอูนียง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Easter"_s,
			u"อีสเตอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kosrae"_s,
			u"คอสไร"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Majuro"_s,
			u"มาจูโร"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Midway"_s,
			u"มิดเวย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Noumea"_s,
			u"นูเมอา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Ponape"_s,
			u"โปนาเป"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Saipan"_s,
			u"ไซปัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tahiti"_s,
			u"ตาฮีตี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tarawa"_s,
			u"ตาระวา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Wallis"_s,
			u"วาลลิส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Blantyre"_s,
			u"แบลนไทร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Djibouti"_s,
			u"จิบูตี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/El_Aaiun"_s,
			u"เอลไอย์อุง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Freetown"_s,
			u"ฟรีทาวน์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Gaborone"_s,
			u"กาโบโรเน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Khartoum"_s,
			u"คาร์ทูม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Kinshasa"_s,
			u"กินชาซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Monrovia"_s,
			u"มันโรเวีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ndjamena"_s,
			u"เอ็นจาเมนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Sao_Tome"_s,
			u"เซาตูเม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Windhoek"_s,
			u"วินด์ฮุก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Antigua"_s,
			u"แอนติกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Caracas"_s,
			u"คาราคัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cayenne"_s,
			u"กาแยน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chicago"_s,
			u"ชิคาโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cordoba"_s,
			u"คอร์โดบา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Creston"_s,
			u"เครสตัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Curacao"_s,
			u"คูราเซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Detroit"_s,
			u"ดีทรอยต์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Godthab"_s,
			u"กอดแธบ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grenada"_s,
			u"เกรนาดา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Halifax"_s,
			u"แฮลิแฟกซ์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Iqaluit"_s,
			u"อีกวาลิต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Jamaica"_s,
			u"จาเมกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Managua"_s,
			u"มานากัว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Marigot"_s,
			u"มาริโกต์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mendoza"_s,
			u"เมนดูซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Moncton"_s,
			u"มองตัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Nipigon"_s,
			u"นิปิกอน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Noronha"_s,
			u"โนรอนฮา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Ojinaga"_s,
			u"โอจินากา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Phoenix"_s,
			u"ฟินิกซ์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tijuana"_s,
			u"ทิฮัวนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Toronto"_s,
			u"โทรอนโต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tortola"_s,
			u"ตอร์โตลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yakutat"_s,
			u"ยากูทัต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Choibalsan"_s,
			u"ชอยบาลซาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Phnom_Penh"_s,
			u"พนมเปญ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Azores"_s,
			u"อาซอเรส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Canary"_s,
			u"คะเนรี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Faeroe"_s,
			u"แฟโร"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Eucla"_s,
			u"ยูคลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Perth"_s,
			u"เพิร์ท"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Belgrade"_s,
			u"เบลเกรด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Brussels"_s,
			u"บรัสเซลส์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Budapest"_s,
			u"บูดาเปส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Busingen"_s,
			u"บุสซิงเง็น"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Chisinau"_s,
			u"คีชีเนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Guernsey"_s,
			u"เกิร์นซีย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Helsinki"_s,
			u"เฮลซิงกิ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Istanbul"_s,
			u"อิสตันบูล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Sarajevo"_s,
			u"ซาราเยโว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Uzhgorod"_s,
			u"อัซโกร็อด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Maldives"_s,
			u"มัลดีฟส์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Chatham"_s,
			u"แชทัม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Fakaofo"_s,
			u"ฟาเคาโฟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Gambier"_s,
			u"แกมเบียร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Norfolk"_s,
			u"นอร์ฟอล์ก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Bujumbura"_s,
			u"บูจุมบูรา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Mogadishu"_s,
			u"โมกาดิชู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anguilla"_s,
			u"แองกิลลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Asuncion"_s,
			u"อะซุนซิออง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Barbados"_s,
			u"บาร์เบโดส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dominica"_s,
			u"โดมินิกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Edmonton"_s,
			u"เอดมันตัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Eirunepe"_s,
			u"เอรูเนเป"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mazatlan"_s,
			u"มาซาทลาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Miquelon"_s,
			u"มีเกอลง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/New_York"_s,
			u"นิวยอร์ก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Resolute"_s,
			u"เรโซลูท"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santarem"_s,
			u"ซันตาเรม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santiago"_s,
			u"ซันติอาโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Johns"_s,
			u"เซนต์จอนส์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Kitts"_s,
			u"เซนต์คิตส์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Lucia"_s,
			u"เซนต์ลูเซีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Winnipeg"_s,
			u"วินนิเพก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Casey"_s,
			u"เคซีย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Davis"_s,
			u"เดวิส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Syowa"_s,
			u"ไซโยวา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Troll"_s,
			u"โทรล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Krasnoyarsk"_s,
			u"ครัสโนยาร์สก์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novosibirsk"_s,
			u"โนโวซิบิร์สก์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Ulaanbaatar"_s,
			u"อูลานบาตอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Vladivostok"_s,
			u"วลาดิโวสต็อก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Bermuda"_s,
			u"เบอร์มิวดา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Madeira"_s,
			u"มาเดรา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Stanley"_s,
			u"สแตนลีย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Currie"_s,
			u"คูร์รี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Darwin"_s,
			u"ดาร์วิน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Hobart"_s,
			u"โฮบาร์ต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Sydney"_s,
			u"ซิดนีย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Amsterdam"_s,
			u"อัมสเตอดัม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Astrakhan"_s,
			u"แอสตราคาน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bucharest"_s,
			u"บูคาเรส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Gibraltar"_s,
			u"ยิบรอลตาร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ljubljana"_s,
			u"ลูบลิยานา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Mariehamn"_s,
			u"มารีฮามน์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Podgorica"_s,
			u"พอดกอรีตซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Stockholm"_s,
			u"สตอกโฮล์ม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Ulyanovsk"_s,
			u"อะลิยานอฟ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Volgograd"_s,
			u"วอลโกกราด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Christmas"_s,
			u"คริสต์มาส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Kerguelen"_s,
			u"แกร์เกอลอง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Mauritius"_s,
			u"มอริเชียส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Auckland"_s,
			u"โอคแลนด์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Funafuti"_s,
			u"ฟูนะฟูตี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Honolulu"_s,
			u"โฮโนลูลู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Johnston"_s,
			u"จอห์นสตัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pitcairn"_s,
			u"พิตแคร์น"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Casablanca"_s,
			u"คาสซาบลางก้า"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Libreville"_s,
			u"ลีเบรอวิล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Lubumbashi"_s,
			u"ลูบัมบาชิ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Nouakchott"_s,
			u"นูแอกชอต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Porto-Novo"_s,
			u"ปอร์โต-โนโว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Anchorage"_s,
			u"แองเคอเรจ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Araguaina"_s,
			u"อารากัวนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Boa_Vista"_s,
			u"บัววีชตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Catamarca"_s,
			u"กาตามาร์กา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Chihuahua"_s,
			u"ชีวาวา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fortaleza"_s,
			u"ฟอร์ตาเลซา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Glace_Bay"_s,
			u"เกลซเบย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Goose_Bay"_s,
			u"กูสเบย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guatemala"_s,
			u"กัวเตมาลา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guayaquil"_s,
			u"กัวยากิล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Matamoros"_s,
			u"มาตาโมรอส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Menominee"_s,
			u"เมโนมินี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Monterrey"_s,
			u"มอนเตร์เรย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Sao_Paulo"_s,
			u"เซาเปาลู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Thomas"_s,
			u"เซนต์โธมัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Vancouver"_s,
			u"แวนคูเวอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Mawson"_s,
			u"มอว์สัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Palmer"_s,
			u"พาล์เมอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Vostok"_s,
			u"วอสตอค"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Kuala_Lumpur"_s,
			u"กัวลาลัมเปอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Novokuznetsk"_s,
			u"โนโวคุซเนตสค์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Bratislava"_s,
			u"บราติสลาวา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Copenhagen"_s,
			u"โคเปนเฮเกน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Luxembourg"_s,
			u"ลักเซมเบิร์ก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/San_Marino"_s,
			u"ซานมารีโน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Simferopol"_s,
			u"ซิมเฟอโรโปล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Zaporozhye"_s,
			u"ซาโปโรซี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Enderbury"_s,
			u"เอนเดอร์เบอรี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Galapagos"_s,
			u"กาลาปาโกส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kwajalein"_s,
			u"ควาจาเลน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Marquesas"_s,
			u"มาร์เคซัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Pago_Pago"_s,
			u"ปาโก ปาโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Rarotonga"_s,
			u"ราโรตองกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Tongatapu"_s,
			u"ตองกาตาปู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Addis_Ababa"_s,
			u"แอดดิสอาบาบา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Brazzaville"_s,
			u"บราซซาวิล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Ouagadougou"_s,
			u"วากาดูกู"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Costa_Rica"_s,
			u"คอสตาริกา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Grand_Turk"_s,
			u"แกรนด์เติร์ก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Guadeloupe"_s,
			u"กวาเดอลูป"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Hermosillo"_s,
			u"เอร์โมซีโย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kralendijk"_s,
			u"คราเลนดิจค์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Louisville"_s,
			u"ลูส์วิลล์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Martinique"_s,
			u"มาร์ตินีก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Metlakatla"_s,
			u"เมทลากาตละ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montevideo"_s,
			u"มอนเตวิเดโอ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Montserrat"_s,
			u"มอนเซอร์รัต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Paramaribo"_s,
			u"ปารามาริโบ"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rio_Branco"_s,
			u"รีโอบรังโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Vincent"_s,
			u"เซนต์วินเซนต์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Whitehorse"_s,
			u"ไวต์ฮอร์ส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/McMurdo"_s,
			u"แมคมัวโด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Rothera"_s,
			u"โรธีรา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Srednekolymsk"_s,
			u"ซเรดเนคโคลิมสก์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Asia/Yekaterinburg"_s,
			u"ยีคาเตอรินเบิร์ก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Reykjavik"_s,
			u"เรคยาวิก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/St_Helena"_s,
			u"เซนต์เฮเลนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Adelaide"_s,
			u"แอดิเลด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Brisbane"_s,
			u"บริสเบน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lindeman"_s,
			u"ลินดีแมน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Isle_of_Man"_s,
			u"เกาะแมน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Europe/Kaliningrad"_s,
			u"คาลินิงกราด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Kiritimati"_s,
			u"คิริทิมาตี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Johannesburg"_s,
			u"โจฮันเนสเบอร์ก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/El_Salvador"_s,
			u"เอลซัลวาดอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Fort_Nelson"_s,
			u"ฟอร์ตเนลสัน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Los_Angeles"_s,
			u"ลอสแองเจลิส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Mexico_City"_s,
			u"เม็กซิโกซิตี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Pangnirtung"_s,
			u"พางนีทัง"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Porto_Velho"_s,
			u"ปอร์ตูเวลโย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Puerto_Rico"_s,
			u"เปอโตริโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rainy_River"_s,
			u"เรนนี่ริเวอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Tegucigalpa"_s,
			u"เตกูซิกัลปา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Thunder_Bay"_s,
			u"ทันเดอร์เบย์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Yellowknife"_s,
			u"เยลโลว์ไนฟ์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Arctic/Longyearbyen"_s,
			u"ลองเยียร์เบียน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/Cape_Verde"_s,
			u"เคปเวิร์ด"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Lord_Howe"_s,
			u"ลอร์ดโฮว์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Melbourne"_s,
			u"เมลเบิร์น"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Indian/Antananarivo"_s,
			u"อันตานานาริโว"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Guadalcanal"_s,
			u"กัวดัลคานัล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Africa/Dar_es_Salaam"_s,
			u"ดาร์เอสซาลาม"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Blanc-Sablon"_s,
			u"บลังค์-ซาบลอน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Buenos_Aires"_s,
			u"บัวโนสไอเรส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Campo_Grande"_s,
			u"กัมปูกรันดี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Danmarkshavn"_s,
			u"ดานมาร์กสฮาวน์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Dawson_Creek"_s,
			u"ดอว์สัน ครีก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Knox"_s,
			u"นอกซ์, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indianapolis"_s,
			u"อินเดียแนโพลิส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Punta_Arenas"_s,
			u"ปุนตาอาเรนัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Rankin_Inlet"_s,
			u"แรงกินอินเล็ต"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santa_Isabel"_s,
			u"ซานตาอิซาเบล"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Scoresbysund"_s,
			u"สกอเรสไบซันด์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/Macquarie"_s,
			u"แมคควอรี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Bougainville"_s,
			u"บูเกนวิลล์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Pacific/Port_Moresby"_s,
			u"พอร์ตมอร์สบี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Cambridge_Bay"_s,
			u"อ่าวแคมบริดจ์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Coral_Harbour"_s,
			u"คอรัลฮาร์เบอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vevay"_s,
			u"วีเวย์, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Lower_Princes"_s,
			u"โลเวอร์พรินซ์ ควอเตอร์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port_of_Spain"_s,
			u"พอร์ทออฟสเปน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Santo_Domingo"_s,
			u"ซานโต โดมิงโก"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/St_Barthelemy"_s,
			u"เซนต์บาร์เธเลมี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Swift_Current"_s,
			u"สวิฟต์เคอร์เรนต์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Australia/Broken_Hill"_s,
			u"โบรกเคนฮิลล์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Bahia_Banderas"_s,
			u"บาเอียบันเดรัส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Port-au-Prince"_s,
			u"ปอร์โตแปรงซ์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Atlantic/South_Georgia"_s,
			u"เซาท์ จอร์เจีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Salta"_s,
			u"ซัลตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Marengo"_s,
			u"มาเรงโก, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Winamac"_s,
			u"วินาแมค, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Tucuman"_s,
			u"ทูคูแมน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Ushuaia"_s,
			u"อูชูเอีย"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Tell_City"_s,
			u"เทลล์ซิตี, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Vincennes"_s,
			u"วินเซนเนส, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.Antarctica/DumontDUrville"_s,
			u"ดูมองต์ดูร์วิลล์"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/La_Rioja"_s,
			u"ลาริโอจา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Juan"_s,
			u"ซานฮวน"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/San_Luis"_s,
			u"ซันลูอิส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Indiana/Petersburg"_s,
			u"ปีเตอร์สเบิร์ก, อินดีแอนา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Kentucky/Monticello"_s,
			u"มอนติเซลโล, เคนตักกี"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Beulah"_s,
			u"โบลาห์, นอร์ทดาโคตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/Center"_s,
			u"เซนเตอร์, นอร์ทดาโคตา"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/Argentina/Rio_Gallegos"_s,
			u"ริโอกาลเลกอส"_s
		}),
		$$new($ObjectArray, {
			"timezone.excity.America/North_Dakota/New_Salem"_s,
			u"นิวเซเลม, นอร์ทดาโคตา"_s
		})
	}));
	return data;
}

TimeZoneNames_th::TimeZoneNames_th() {
}

$Class* TimeZoneNames_th::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_th, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_th, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.TimeZoneNames_th",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_th, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_th);
	});
	return class$;
}

$Class* TimeZoneNames_th::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun