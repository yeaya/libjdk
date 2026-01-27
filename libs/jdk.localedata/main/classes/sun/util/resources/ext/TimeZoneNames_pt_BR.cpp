#include <sun/util/resources/ext/TimeZoneNames_pt_BR.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef ACT
#undef ADELAIDE
#undef AGT
#undef AKST
#undef AMT
#undef ARAST
#undef ARMT
#undef AST
#undef BDT
#undef BRISBANE
#undef BROKEN_HILL
#undef BRT
#undef BTT
#undef CAT
#undef CET
#undef CHAST
#undef CIT
#undef CLT
#undef CST
#undef CTT
#undef CUBA
#undef DARWIN
#undef DUBLIN
#undef EASTER
#undef EAT
#undef EET
#undef EGT
#undef EST
#undef EST_NSW
#undef FET
#undef GAMBIER
#undef GHMT
#undef GMT
#undef GMTBST
#undef GST
#undef HKT
#undef HST
#undef ICT
#undef IRKT
#undef IRT
#undef ISRAEL
#undef IST
#undef JST
#undef KRAT
#undef KST
#undef LORD_HOWE
#undef MHT
#undef MMT
#undef MSK
#undef MST
#undef MYT
#undef NORONHA
#undef NOVT
#undef NPT
#undef NST
#undef NZST
#undef PITCAIRN
#undef PKT
#undef PONT
#undef PST
#undef SAMOA
#undef SAST
#undef SBT
#undef SGT
#undef TASMANIA
#undef TMT
#undef TRUT
#undef ULAT
#undef UTC
#undef UZT
#undef VICTORIA
#undef WAT
#undef WET
#undef WGT
#undef WIT
#undef WST_AUS
#undef WST_SAMOA
#undef XJT
#undef YAKT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _TimeZoneNames_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_pt_BR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_pt_BR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.TimeZoneNames_pt_BR",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_pt_BR_MethodInfo_
};

$Object* allocate$TimeZoneNames_pt_BR($Class* clazz) {
	return $of($alloc(TimeZoneNames_pt_BR));
}

void TimeZoneNames_pt_BR::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, ACT, $new($StringArray, {
		u"Fuso horário do Acre"_s,
		"ACT"_s,
		u"Fuso horário de verão do Acre"_s,
		"ACST"_s,
		u"Fuso horário do Acre"_s,
		"ACT"_s
	}));
	$var($StringArray, ADELAIDE, $new($StringArray, {
		u"Horário-Padrão Central (Austrália do Sul)"_s,
		"ACST"_s,
		u"Fuso Horário de Verão Central (Austrália do Sul)"_s,
		"ACDT"_s,
		u"Horário Central (Austrália do Sul)"_s,
		"ACT"_s
	}));
	$var($StringArray, AGT, $new($StringArray, {
		u"Fuso horário da Argentina"_s,
		"ART"_s,
		u"Fuso horário de verão da Argentina"_s,
		"ARST"_s,
		u"Horário da Argentina"_s,
		"ART"_s
	}));
	$var($StringArray, AKST, $new($StringArray, {
		u"Fuso horário padrão do Alaska"_s,
		"AKST"_s,
		u"Horário de luz natural do Alaska"_s,
		"AKDT"_s,
		u"Horário do Alasca"_s,
		"AKT"_s
	}));
	$var($StringArray, AMT, $new($StringArray, {
		u"Fuso horário do Amazonas"_s,
		"AMT"_s,
		u"Fuso horário de verão do Amazonas"_s,
		"AMST"_s,
		u"Horário do Amazonas"_s,
		"AMT"_s
	}));
	$var($StringArray, ARAST, $new($StringArray, {
		u"Fuso horário padrão da Arábia"_s,
		"AST"_s,
		u"Horário de luz natural da Arábia"_s,
		"ADT"_s,
		u"Horário da Arábia"_s,
		"AT"_s
	}));
	$var($StringArray, ARMT, $new($StringArray, {
		u"Fuso horário da Armênia"_s,
		"AMT"_s,
		u"Fuso horário de verão da Armênia"_s,
		"AMST"_s,
		u"Horário da Armênia"_s,
		"AMT"_s
	}));
	$var($StringArray, AST, $new($StringArray, {
		u"Fuso horário padrão do Atlântico"_s,
		"AST"_s,
		u"Horário de luz natural do Atlântico"_s,
		"ADT"_s,
		u"Horário do Atlântico"_s,
		"AT"_s
	}));
	$var($StringArray, BDT, $new($StringArray, {
		u"Fuso horário de Bangladesh"_s,
		"BDT"_s,
		u"Fuso horário de verão de Bangladesh"_s,
		"BDST"_s,
		u"Horário de Bangladesh"_s,
		"BDT"_s
	}));
	$var($StringArray, BRISBANE, $new($StringArray, {
		u"Horário-Padrão do Leste (Queensland)"_s,
		"AEST"_s,
		u"Fuso Horário de Verão Oriental (Queensland)"_s,
		"AEDT"_s,
		u"Horário do Leste (Queensland)"_s,
		"AET"_s
	}));
	$var($StringArray, BROKEN_HILL, $new($StringArray, {
		u"Horário-Padrão Central (Austrália do Sul/Nova Gales do Sul)"_s,
		"ACST"_s,
		u"Fuso Horário de Verão Central (Austrália do Sul/Nova Gales do Sul)"_s,
		"ACDT"_s,
		u"Horário Central (Austrália do Sul/Nova Gales do Sul)"_s,
		"ACT"_s
	}));
	$var($StringArray, BRT, $new($StringArray, {
		u"Fuso horário de Brasília"_s,
		"BRT"_s,
		u"Fuso horário de verão de Brasília"_s,
		"BRST"_s,
		u"Horário de Brasília"_s,
		"BRT"_s
	}));
	$var($StringArray, BTT, $new($StringArray, {
		u"Fuso horário de Butão"_s,
		"BTT"_s,
		u"Fuso horário de verão de Butão"_s,
		"BTST"_s,
		u"Horário do Butão"_s,
		"BTT"_s
	}));
	$var($StringArray, CAT, $new($StringArray, {
		u"Fuso horário da África Central"_s,
		"CAT"_s,
		u"Fuso horário de verão da África Central"_s,
		"CAST"_s,
		u"Horário da África Central"_s,
		"CAT"_s
	}));
	$var($StringArray, CET, $new($StringArray, {
		u"Fuso horário da Europa Central"_s,
		"CET"_s,
		u"Fuso horário de verão da Europa Central"_s,
		"CEST"_s,
		u"Horário da Europa Central"_s,
		"CET"_s
	}));
	$var($StringArray, CHAST, $new($StringArray, {
		u"Fuso horário padrão de Chatham"_s,
		"CHAST"_s,
		u"Horário de luz natural de Chatham"_s,
		"CHADT"_s,
		u"Horário de Chatham"_s,
		"CHAT"_s
	}));
	$var($StringArray, CIT, $new($StringArray, {
		u"Fuso horário da Indonésia Central"_s,
		"WITA"_s,
		u"Fuso horário de verão da Indonésia Central"_s,
		"CIST"_s,
		u"Horário da Indonésia Central"_s,
		"WITA"_s
	}));
	$var($StringArray, CLT, $new($StringArray, {
		u"Fuso horário do Chile"_s,
		"CLT"_s,
		u"Fuso horário de verão do Chile"_s,
		"CLST"_s,
		u"Horário do Chile"_s,
		"CLT"_s
	}));
	$var($StringArray, CST, $new($StringArray, {
		u"Fuso horário padrão central"_s,
		"CST"_s,
		u"Horário de luz natural central"_s,
		"CDT"_s,
		u"Horário Central"_s,
		"CT"_s
	}));
	$var($StringArray, CTT, $new($StringArray, {
		u"Fuso horário padrão da China"_s,
		"CST"_s,
		u"Horário de luz natural da China"_s,
		"CDT"_s,
		u"Horário da China"_s,
		"CT"_s
	}));
	$var($StringArray, CUBA, $new($StringArray, {
		u"Fuso horário padrão de Cuba"_s,
		"CST"_s,
		u"Horário de luz natural de Cuba"_s,
		"CDT"_s,
		u"Horário de Cuba"_s,
		"CT"_s
	}));
	$var($StringArray, DARWIN, $new($StringArray, {
		u"Horário-Padrão Central (Território do Norte)"_s,
		"ACST"_s,
		u"Fuso Horário de Verão Central (Território do Norte)"_s,
		"ACDT"_s,
		u"Horário Central (Território do Norte)"_s,
		"ACT"_s
	}));
	$var($StringArray, DUBLIN, $new($StringArray, {
		u"Fuso horário do meridiano de Greenwich"_s,
		"GMT"_s,
		u"Fuso horário de verão da Irlanda"_s,
		"IST"_s,
		u"Horário da República da Irlanda"_s,
		"IT"_s
	}));
	$var($StringArray, EAT, $new($StringArray, {
		u"Fuso horário da África Oriental"_s,
		"EAT"_s,
		u"Fuso horário padrão da África Oriental"_s,
		"EAST"_s,
		u"Horário do Leste da África"_s,
		"EAT"_s
	}));
	$var($StringArray, EASTER, $new($StringArray, {
		u"Fuso horário da Ilha de Páscoa"_s,
		"EAST"_s,
		u"Fuso horário de verão da Ilha de Páscoa"_s,
		"EASST"_s,
		u"Horário da Ilha de Páscoa"_s,
		"EAST"_s
	}));
	$var($StringArray, EET, $new($StringArray, {
		u"Fuso horário da Europa Oriental"_s,
		"EET"_s,
		u"Fuso horário de verão da Europa Oriental"_s,
		"EEST"_s,
		u"Horário da Europa Oriental"_s,
		"EET"_s
	}));
	$var($StringArray, EGT, $new($StringArray, {
		u"Fuso horário da Groenlândia Oriental"_s,
		"EGT"_s,
		u"Fuso horário de verão da Groenlândia Oriental"_s,
		"EGST"_s,
		u"Horário da Groenlândia Oriental"_s,
		"EGT"_s
	}));
	$var($StringArray, EST, $new($StringArray, {
		u"Fuso horário padrão oriental"_s,
		"EST"_s,
		u"Horário de luz natural oriental"_s,
		"EDT"_s,
		u"Horário do Leste"_s,
		"ET"_s
	}));
	$var($StringArray, EST_NSW, $new($StringArray, {
		u"Horário-Padrão Oriental (Nova Gales do Sul)"_s,
		"AEST"_s,
		u"Fuso Horário de Verão Oriental (Nova Gales do Sul)"_s,
		"AEDT"_s,
		u"Horário Oriental (Nova Gales do Sul)"_s,
		"AET"_s
	}));
	$var($StringArray, FET, $new($StringArray, {
		u"Horário do Extremo Leste Europeu (FET)"_s,
		"FET"_s,
		u"Fuso Horário de Verão do Extremo Leste Europeu"_s,
		"FEST"_s,
		u"Horário do Extremo Leste Europeu (FET)"_s,
		"FET"_s
	}));
	$var($StringArray, GHMT, $new($StringArray, {
		u"Fuso horário do meridiano de Gana"_s,
		"GMT"_s,
		u"Fuso horário de verão de Gana"_s,
		"GHST"_s,
		u"Fuso Horário do Meridiano de Gana"_s,
		"GMT"_s
	}));
	$var($StringArray, GAMBIER, $new($StringArray, {
		u"Fuso horário de Gambier"_s,
		"GAMT"_s,
		u"Fuso horário de verão de Gambier"_s,
		"GAMST"_s,
		u"Horário de Gambier"_s,
		"GAMT"_s
	}));
	$var($StringArray, GMT, $new($StringArray, {
		u"Fuso horário do meridiano de Greenwich"_s,
		"GMT"_s,
		u"Fuso horário do meridiano de Greenwich"_s,
		"GMT"_s,
		u"Horário Médio de Greenwich"_s,
		"GMT"_s
	}));
	$var($StringArray, GMTBST, $new($StringArray, {
		u"Fuso horário do meridiano de Greenwich"_s,
		"GMT"_s,
		u"Fuso horário de verão da Grã-Bretanha"_s,
		"BST"_s,
		u"Horário do Reino Unido"_s,
		"BT"_s
	}));
	$var($StringArray, GST, $new($StringArray, {
		u"Fuso horário padrão do golfo"_s,
		"GST"_s,
		u"Horário de luz natural do golfo"_s,
		"GDT"_s,
		u"Horário do Golfo"_s,
		"GT"_s
	}));
	$var($StringArray, HKT, $new($StringArray, {
		u"Fuso horário de Hong Kong"_s,
		"HKT"_s,
		u"Fuso horário de verão de Hong Kong"_s,
		"HKST"_s,
		u"Horário de Hong Kong"_s,
		"HKT"_s
	}));
	$var($StringArray, HST, $new($StringArray, {
		u"Fuso horário padrão do Havaí"_s,
		"HST"_s,
		u"Horário de luz natural do Havaí"_s,
		"HDT"_s,
		u"Horário do Havaí"_s,
		"HT"_s
	}));
	$var($StringArray, ICT, $new($StringArray, {
		u"Fuso horário da Indochina"_s,
		"ICT"_s,
		u"Fuso horário de verão da Indochina"_s,
		"ICST"_s,
		u"Horário da Indochina"_s,
		"ICT"_s
	}));
	$var($StringArray, IRKT, $new($StringArray, {
		u"Fuso horário de Irkutsk"_s,
		"IRKT"_s,
		u"Fuso horário de verão de Irkutsk"_s,
		"IRKST"_s,
		u"Horário de Irkutsk"_s,
		"IRKT"_s
	}));
	$var($StringArray, IRT, $new($StringArray, {
		u"Fuso horário do Irã"_s,
		"IRST"_s,
		u"Horário de luz natural do Irã"_s,
		"IRDT"_s,
		u"Horário do Irã"_s,
		"IRT"_s
	}));
	$var($StringArray, ISRAEL, $new($StringArray, {
		u"Fuso horário padrão de Israel"_s,
		"IST"_s,
		u"Horário de luz natural de Israel"_s,
		"IDT"_s,
		u"Horário de Israel"_s,
		"IT"_s
	}));
	$var($StringArray, IST, $new($StringArray, {
		u"Fuso horário padrão da Índia"_s,
		"IST"_s,
		u"Horário de luz natural da Índia"_s,
		"IDT"_s,
		u"Horário da Índia"_s,
		"IT"_s
	}));
	$var($StringArray, JST, $new($StringArray, {
		u"Fuso horário padrão do Japão"_s,
		"JST"_s,
		u"Horário de luz natural do Japão"_s,
		"JDT"_s,
		u"Horário do Japão"_s,
		"JT"_s
	}));
	$var($StringArray, KRAT, $new($StringArray, {
		u"Fuso horário de Krasnoyarsk"_s,
		"KRAT"_s,
		u"Fuso horário de verão de Krasnoyarsk"_s,
		"KRAST"_s,
		u"Horário de Krasnoyarsk"_s,
		"KRAT"_s
	}));
	$var($StringArray, KST, $new($StringArray, {
		u"Fuso horário padrão da Coreia"_s,
		"KST"_s,
		u"Horário de luz natural da Coreia"_s,
		"KDT"_s,
		u"Horário da Coreia"_s,
		"KT"_s
	}));
	$var($StringArray, LORD_HOWE, $new($StringArray, {
		u"Fuso horário padrão de Lord Howe"_s,
		"LHST"_s,
		u"Fuso horário de verão de Lord Howe"_s,
		"LHDT"_s,
		u"Horário de Lord Howe"_s,
		"LHT"_s
	}));
	$var($StringArray, MHT, $new($StringArray, {
		u"Fuso horário das Ilhas Marshall"_s,
		"MHT"_s,
		u"Fuso horário de verão das Ilhas Marshall"_s,
		"MHST"_s,
		u"Horário das Ilhas Marshall"_s,
		"MHT"_s
	}));
	$var($StringArray, MSK, $new($StringArray, {
		u"Fuso horário padrão de Moscou"_s,
		"MSK"_s,
		u"Horário de luz natural de Moscou"_s,
		"MSD"_s,
		u"Horário de Moscou"_s,
		"MT"_s
	}));
	$var($StringArray, MMT, $new($StringArray, {
		u"Fuso horário de Mianmar"_s,
		"MMT"_s,
		u"Fuso horário de verão de Mianmar"_s,
		"MMST"_s,
		u"Horário de Mianmar"_s,
		"MMT"_s
	}));
	$var($StringArray, MST, $new($StringArray, {
		u"Fuso horário padrão das montanhas"_s,
		"MST"_s,
		u"Horário de luz natural das montanhas"_s,
		"MDT"_s,
		u"Horário das Montanhas Rochosas"_s,
		"MT"_s
	}));
	$var($StringArray, MYT, $new($StringArray, {
		u"Fuso horário da Malásia"_s,
		"MYT"_s,
		u"Fuso horário de verão da Malásia"_s,
		"MYST"_s,
		u"Horário da Malásia"_s,
		"MYT"_s
	}));
	$var($StringArray, NORONHA, $new($StringArray, {
		u"Fuso horário de Fernando de Noronha"_s,
		"FNT"_s,
		u"Fuso horário de verão de Fernando de Noronha"_s,
		"FNST"_s,
		u"Horário de Fernando de Noronha"_s,
		"FNT"_s
	}));
	$var($StringArray, NOVT, $new($StringArray, {
		u"Fuso horário de Novosibirsk"_s,
		"NOVT"_s,
		u"Fuso horário de verão de Novosibirsk"_s,
		"NOVST"_s,
		u"Horário de Novosibirsk"_s,
		"NOVT"_s
	}));
	$var($StringArray, NPT, $new($StringArray, {
		u"Fuso horário do Nepal"_s,
		"NPT"_s,
		u"Fuso horário de verão do Nepal"_s,
		"NPST"_s,
		u"Horário do Nepal"_s,
		"NPT"_s
	}));
	$var($StringArray, NST, $new($StringArray, {
		u"Fuso horário padrão de Terra Nova"_s,
		"NST"_s,
		u"Horário de luz natural de Terra Nova"_s,
		"NDT"_s,
		u"Horário de Terra Nova"_s,
		"NT"_s
	}));
	$var($StringArray, NZST, $new($StringArray, {
		u"Fuso horário padrão da Nova Zelândia"_s,
		"NZST"_s,
		u"Horário de luz natural da Nova Zelândia"_s,
		"NZDT"_s,
		u"Horário da Nova Zelândia"_s,
		"NZT"_s
	}));
	$var($StringArray, PITCAIRN, $new($StringArray, {
		u"Fuso horário padrão de Pitcairn"_s,
		"PST"_s,
		u"Horário de luz natural de Pitcairn"_s,
		"PDT"_s,
		u"Horário de Pitcairn"_s,
		"PT"_s
	}));
	$var($StringArray, PKT, $new($StringArray, {
		u"Fuso horário do Paquistão"_s,
		"PKT"_s,
		u"Fuso horário de verão do Paquistão"_s,
		"PKST"_s,
		u"Horário do Paquistão"_s,
		"PKT"_s
	}));
	$var($StringArray, PONT, $new($StringArray, {
		u"Fuso Horário de Pohnpei"_s,
		"PONT"_s,
		u"Fuso Horário de Verão de Pohnpei"_s,
		"PONST"_s,
		u"Horário de Ponape"_s,
		"PONT"_s
	}));
	$var($StringArray, PST, $new($StringArray, {
		u"Fuso horário padrão do Pacífico"_s,
		"PST"_s,
		u"Horário de luz natural do Pacífico"_s,
		"PDT"_s,
		u"Horário do Pacífico"_s,
		"PT"_s
	}));
	$var($StringArray, SAST, $new($StringArray, {
		u"Fuso horário padrão da África do Sul"_s,
		"SAST"_s,
		u"Fuso horário de verão da África do Sul"_s,
		"SAST"_s,
		u"Horário da África do Sul"_s,
		"SAT"_s
	}));
	$var($StringArray, SBT, $new($StringArray, {
		u"Fuso horário das Ilhas Salomão"_s,
		"SBT"_s,
		u"Fuso horário de verão das Ilhas Salomão"_s,
		"SBST"_s,
		u"Horário das Ilhas Salomão"_s,
		"SBT"_s
	}));
	$var($StringArray, SGT, $new($StringArray, {
		u"Fuso horário de Cingapura"_s,
		"SGT"_s,
		u"Fuso horário de verá de Cingapura"_s,
		"SGST"_s,
		u"Horário de Cingapura"_s,
		"SGT"_s
	}));
	$var($StringArray, TASMANIA, $new($StringArray, {
		u"Horário-Padrão do Leste (Tasmânia)"_s,
		"AEST"_s,
		u"Fuso Horário de Verão Oriental (Tasmânia)"_s,
		"AEDT"_s,
		u"Horário do Leste (Tasmânia)"_s,
		"AET"_s
	}));
	$var($StringArray, TMT, $new($StringArray, {
		u"Fuso horário do Turcomenistão"_s,
		"TMT"_s,
		u"Fuso horário de verão do Turcomenistão"_s,
		"TMST"_s,
		u"Horário do Turcomenistão"_s,
		"TMT"_s
	}));
	$var($StringArray, TRUT, $new($StringArray, {
		u"Fuso Horário de Chuuk"_s,
		"CHUT"_s,
		u"Fuso Horário de Verão de Chuuk"_s,
		"CHUST"_s,
		u"Fuso Horário de Chuuk"_s,
		"CHUT"_s
	}));
	$var($StringArray, ULAT, $new($StringArray, {
		u"Fuso horário de Ulan Bator"_s,
		"ULAT"_s,
		u"Fuso horário de verão de Ulan Bator"_s,
		"ULAST"_s,
		u"Horário de Ulaanbaatar"_s,
		"ULAT"_s
	}));
	$var($StringArray, WAT, $new($StringArray, {
		u"Fuso horário da África Ocidental"_s,
		"WAT"_s,
		u"Fuso horário de verão da África Ocidental"_s,
		"WAST"_s,
		u"Horário da África Ocidental"_s,
		"WAT"_s
	}));
	$var($StringArray, WET, $new($StringArray, {
		u"Fuso horário da Europa Ocidental"_s,
		"WET"_s,
		u"Fuso horário de verão da Europa Ocidental"_s,
		"WEST"_s,
		u"Horário da Europa Ocidental"_s,
		"WET"_s
	}));
	$var($StringArray, WGT, $new($StringArray, {
		u"Fuso horário da Groenlândia Ocidental"_s,
		"WGT"_s,
		u"Fuso horário de verão da Groenlândia Ocidental"_s,
		"WGST"_s,
		u"Horário da Groenlândia Ocidental"_s,
		"WGT"_s
	}));
	$var($StringArray, WIT, $new($StringArray, {
		u"Fuso horário da Indonésia Ocidental"_s,
		"WIB"_s,
		u"Fuso horário de verão da Indonésia Ocidental"_s,
		"WIST"_s,
		u"Horário da Indonésia Ocidental"_s,
		"WIB"_s
	}));
	$var($StringArray, WST_AUS, $new($StringArray, {
		u"Horário-Padrão Ocidental (Austrália)"_s,
		"AWST"_s,
		u"Fuso Horário de Verão Ocidental (Austrália)"_s,
		"AWDT"_s,
		u"Horário Ocidental (Austrália)"_s,
		"AWT"_s
	}));
	$var($StringArray, SAMOA, $new($StringArray, {
		u"Fuso horário padrão de Samoa"_s,
		"SST"_s,
		u"Horário de luz natural de Samoa"_s,
		"SDT"_s,
		u"Horário da Samoa"_s,
		"ST"_s
	}));
	$var($StringArray, WST_SAMOA, $new($StringArray, {
		u"Fuso horário de Samoa Ocidental"_s,
		"WSST"_s,
		u"Fuso horário de verão de Samoa Ocidental"_s,
		"WSDT"_s,
		u"Fuso Horário de Samoa Ocidental"_s,
		"WST"_s
	}));
	$var($StringArray, ChST, $new($StringArray, {
		u"Fuso horário padrão de Chamorro"_s,
		"ChST"_s,
		u"Horário de luz natural de Chamorro"_s,
		"ChDT"_s,
		u"Horário de Chamorro"_s,
		"ChT"_s
	}));
	$var($StringArray, VICTORIA, $new($StringArray, {
		u"Horário-Padrão do Leste (Victoria)"_s,
		"AEST"_s,
		u"Fuso Horário de Verão Oriental (Victoria)"_s,
		"AEDT"_s,
		u"Horário do Leste (Victoria)"_s,
		"AET"_s
	}));
	$var($StringArray, UTC, $new($StringArray, {
		"Tempo universal coordenado"_s,
		"UTC"_s,
		"Tempo universal coordenado"_s,
		"UTC"_s,
		u"Horário Universal Coordenado"_s,
		"UTC"_s
	}));
	$var($StringArray, UZT, $new($StringArray, {
		u"Fuso horário do Uzbequistão"_s,
		"UZT"_s,
		u"Fuso horário de verão do Uzbequistão"_s,
		"UZST"_s,
		u"Horário do Uzbequistão"_s,
		"UZT"_s
	}));
	$var($StringArray, XJT, $new($StringArray, {
		u"Fuso horário padrão da China"_s,
		"XJT"_s,
		u"Horário de luz natural da China"_s,
		"XJDT"_s,
		u"Horário da China"_s,
		"XJT"_s
	}));
	$var($StringArray, YAKT, $new($StringArray, {
		u"Fuso horário de Yakutsk"_s,
		"YAKT"_s,
		u"Fuso horário de verão de Yakutsk"_s,
		"YAKST"_s,
		u"Horário de Yakutsk"_s,
		"YAKT"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("America/Los_Angeles"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("PST"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Denver"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("MST"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Phoenix"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("PNT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Chicago"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("CST"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/New_York"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("EST"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indianapolis"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("IET"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Honolulu"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("HST"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Anchorage"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("AST"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Halifax"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Sitka"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Johns"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("CNT"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Paris"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("ECT"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("GMT"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Casablanca"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jerusalem"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tokyo"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("JST"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bucharest"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Shanghai"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("CTT"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("ACT"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("AET"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("AGT"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("ART"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Abidjan"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Accra"_s),
			$of(GHMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Addis_Ababa"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Algiers"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmara"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Asmera"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bamako"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bangui"_s),
			$of(WAT)
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
			$of("Africa/Blantyre"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Brazzaville"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Bujumbura"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Cairo"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ceuta"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Conakry"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dakar"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Dar_es_Salaam"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Djibouti"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Douala"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/El_Aaiun"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Freetown"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Gaborone"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Harare"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Johannesburg"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Juba"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kampala"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Khartoum"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kigali"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Kinshasa"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lagos"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Libreville"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lome"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Luanda"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lubumbashi"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Lusaka"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Malabo"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maputo"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Maseru"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mbabane"_s),
			$of(SAST)
		}),
		$$new($ObjectArray, {
			$of("Africa/Mogadishu"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Monrovia"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nairobi"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ndjamena"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Niamey"_s),
			$of(WAT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Nouakchott"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Ouagadougou"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Africa/Porto-Novo"_s),
			$of(WAT)
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
			$of("Africa/Tripoli"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Tunis"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Africa/Windhoek"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("America/Adak"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Anguilla"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Antigua"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Araguaina"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Buenos_Aires"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Catamarca"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/ComodRivadavia"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Cordoba"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Jujuy"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/La_Rioja"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Mendoza"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Rio_Gallegos"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Salta"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Juan"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/San_Luis"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Tucuman"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Argentina/Ushuaia"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Aruba"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Asuncion"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Paraguai"_s,
				"PYT"_s,
				u"Fuso horário de verão do Paraguai"_s,
				"PYST"_s,
				u"Horário do Paraguai"_s,
				"PYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Atikokan"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Atka"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Bahia_Banderas"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Barbados"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Belem"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Belize"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Blanc-Sablon"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Boa_Vista"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Bogota"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Colômbia"_s,
				"COT"_s,
				u"Fuso horário de verão da Colômbia"_s,
				"COST"_s,
				u"Horário da Colômbia"_s,
				"COT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Boise"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Buenos_Aires"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Cambridge_Bay"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Campo_Grande"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Cancun"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Caracas"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Venezuela"_s,
				"VET"_s,
				u"Fuso horário de verão da Venezuela"_s,
				"VEST"_s,
				u"Horário da Venezuela"_s,
				"VET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Catamarca"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Cayenne"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Guiana Francesa"_s,
				"GFT"_s,
				u"Fuso horário de verão da Guiana Francesa"_s,
				"GFST"_s,
				u"Horário da Guiana Francesa"_s,
				"GFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Cayman"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Chihuahua"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Creston"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Coral_Harbour"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Cordoba"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Costa_Rica"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Cuiaba"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Curacao"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Danmarkshavn"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Dawson_Creek"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Detroit"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Dominica"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Edmonton"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Eirunepe"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/El_Salvador"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Ensenada"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Nelson"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Fort_Wayne"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Fortaleza"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Glace_Bay"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Godthab"_s),
			$of(WGT)
		}),
		$$new($ObjectArray, {
			$of("America/Goose_Bay"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Grand_Turk"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Grenada"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Guadeloupe"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Guatemala"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Equador"_s,
				"ECT"_s,
				u"Fuso horário de verão do Equador"_s,
				"ECST"_s,
				u"Horário do Equador"_s,
				"ECT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Guyana"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Guiana"_s,
				"GYT"_s,
				u"Fuso horário de verão da Guiana"_s,
				"GYST"_s,
				u"Horários da Guiana"_s,
				"GYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Havana"_s),
			$of(CUBA)
		}),
		$$new($ObjectArray, {
			$of("America/Hermosillo"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Indianapolis"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Knox"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Marengo"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Petersburg"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Tell_City"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vevay"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Vincennes"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Indiana/Winamac"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Inuvik"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Iqaluit"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Jamaica"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Jujuy"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Juneau"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Louisville"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Kentucky/Monticello"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Knox_IN"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Kralendijk"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/La_Paz"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Bolívia"_s,
				"BOT"_s,
				u"Fuso horário de verão da Bolívia"_s,
				"BOST"_s,
				u"Horário da Bolívia"_s,
				"BOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Lima"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Peru"_s,
				"PET"_s,
				u"Fuso horário de verão do Peru"_s,
				"PEST"_s,
				u"Horário do Peru"_s,
				"PET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Louisville"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Lower_Princes"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Maceio"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Managua"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Manaus"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Marigot"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Martinique"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Matamoros"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Mazatlan"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Mendoza"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Menominee"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Merida"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Metlakatla"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Mexico_City"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Miquelon"_s),
			$of($$new($StringArray, {
				u"Fuso horário padrão de São Pedro e Miquelon"_s,
				"PMST"_s,
				u"Horário de luz natural de São Pedro e Miquelon"_s,
				"PMDT"_s,
				u"Horário de Saint Pierre e Miquelon"_s,
				"PMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Moncton"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Montevideo"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Uruguai"_s,
				"UYT"_s,
				u"Fuso horário de verão do Uruguai"_s,
				"UYST"_s,
				u"Horário do Uruguai"_s,
				"UYT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Monterrey"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Montreal"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Montserrat"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Nassau"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Nipigon"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Nome"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Noronha"_s),
			$of(NORONHA)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Beulah"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/Center"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/North_Dakota/New_Salem"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Nuuk"_s),
			$of(WGT)
		}),
		$$new($ObjectArray, {
			$of("America/Ojinaga"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Panama"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Pangnirtung"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Paramaribo"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Suriname"_s,
				"SRT"_s,
				u"Fuso horário de verão do Suriname"_s,
				"SRST"_s,
				u"Horário do Suriname"_s,
				"SRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("America/Port-au-Prince"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Port_of_Spain"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Acre"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/Porto_Velho"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("America/Puerto_Rico"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Rainy_River"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Rankin_Inlet"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Recife"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Regina"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Resolute"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Rio_Branco"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("America/Rosario"_s),
			$of(AGT)
		}),
		$$new($ObjectArray, {
			$of("America/Santa_Isabel"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Santarem"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Santiago"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("America/Santo_Domingo"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Sao_Paulo"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("America/Scoresbysund"_s),
			$of(EGT)
		}),
		$$new($ObjectArray, {
			$of("America/Shiprock"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Barthelemy"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Kitts"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Lucia"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Thomas"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/St_Vincent"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Swift_Current"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Tegucigalpa"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Thule"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Thunder_Bay"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Tijuana"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Toronto"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("America/Tortola"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Vancouver"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("America/Virgin"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("America/Whitehorse"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("America/Winnipeg"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("America/Yakutat"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("America/Yellowknife"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Casey"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Davis"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Davis"_s,
				"DAVT"_s,
				u"Fuso horário de verão de Davis"_s,
				"DAVST"_s,
				u"Horário de Davis"_s,
				"DAVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/DumontDUrville"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Dumont-d\'Urville"_s,
				"DDUT"_s,
				u"Fuso horário de verão de Dumont-d\'Urville"_s,
				"DDUST"_s,
				u"Fuso Horário de Dumont-d\'Urville"_s,
				"DDUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Macquarie"_s),
			$of($$new($StringArray, {
				u"Fuso Horário da Ilha de Macquarie"_s,
				"MIST"_s,
				u"Fuso Horário de Verão da Ilha de Macquarie"_s,
				"MIST"_s,
				u"Fuso Horário da Ilha de Macquarie"_s,
				"MIST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Mawson"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Mawson"_s,
				"MAWT"_s,
				u"Fuso horário de verão de Mawson"_s,
				"MAWST"_s,
				u"Horário de Mawson"_s,
				"MAWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/McMurdo"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Palmer"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Rothera"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Rothera"_s,
				"ROTT"_s,
				u"Fuso horário de verão de Rothera"_s,
				"ROTST"_s,
				u"Horário de Rothera"_s,
				"ROTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/South_Pole"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Syowa"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Syowa"_s,
				"SYOT"_s,
				u"Fuso horário de verão de Syowa"_s,
				"SYOST"_s,
				u"Horário de Syowa"_s,
				"SYOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Troll"_s),
			$of($$new($StringArray, {
				"Tempo universal coordenado"_s,
				"UTC"_s,
				u"Fuso horário de verão da Europa Central"_s,
				"CEST"_s,
				"Troll Time"_s,
				"ATT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Antarctica/Vostok"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Vostok"_s,
				"VOST"_s,
				u"Fuso horário de verão de Vostok"_s,
				"VOSST"_s,
				u"Horário de Vostok"_s,
				"VOST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Arctic/Longyearbyen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Aden"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Almaty"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Alma-Ata"_s,
				"ALMT"_s,
				u"Fuso horário de verão de Alma-Ata"_s,
				"ALMST"_s,
				u"Horário de Alma-Ata"_s,
				"ALMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Amman"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Anadyr"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Anadyr"_s,
				"ANAT"_s,
				u"Fuso horário de verão de Anadyr"_s,
				"ANAST"_s,
				u"Horário de Anadyr"_s,
				"ANAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtau"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Aqtau"_s,
				"AQTT"_s,
				u"Fuso horário de verão de Aqtau"_s,
				"AQTST"_s,
				u"Horário de Aqtau"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Aqtobe"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Aqtobe"_s,
				"AQTT"_s,
				u"Fuso horário de verão de Aqtobe"_s,
				"AQTST"_s,
				u"Horário de Aqtobe"_s,
				"AQTT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashgabat"_s),
			$of(TMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ashkhabad"_s),
			$of(TMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baghdad"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bahrain"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Baku"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Azerbaijão"_s,
				"AZT"_s,
				u"Fuso horário de verão do Azerbaijão"_s,
				"AZST"_s,
				u"Horário do Azerbaijão"_s,
				"AZT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Bangkok"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Beirut"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Bishkek"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Quirguistão"_s,
				"KGT"_s,
				u"Fuso horário de verão do Quirguistão"_s,
				"KGST"_s,
				u"Horário do Quirguistão"_s,
				"KGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Brunei"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Brunei"_s,
				"BNT"_s,
				u"Fuso horário de verão de Brunei"_s,
				"BNST"_s,
				u"Horário de Brunei"_s,
				"BNT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Calcutta"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chita"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Choibalsan"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Choibalsan"_s,
				"CHOT"_s,
				u"Fuso horário de verão de Choibalsan"_s,
				"CHOST"_s,
				u"Horário de Choibalsan"_s,
				"CHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Chongqing"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Chungking"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Colombo"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dacca"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dhaka"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dili"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Timor-Leste"_s,
				"TLT"_s,
				u"Fuso horário de verão do Timor-Leste"_s,
				"TLST"_s,
				u"Horário do Timor-Leste"_s,
				"TLT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Damascus"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dubai"_s),
			$of(GST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Dushanbe"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Tadjiquistão"_s,
				"TJT"_s,
				u"Fuso horário de verão do Tadjiquistão"_s,
				"TJST"_s,
				u"Horário do Tadjiquistão"_s,
				"TJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Gaza"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Harbin"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hebron"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ho_Chi_Minh"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hong_Kong"_s),
			$of(HKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Hovd"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Hovd"_s,
				"HOVT"_s,
				u"Fuso horário de verão de Hovd"_s,
				"HOVST"_s,
				u"Horário de Hovd"_s,
				"HOVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Irkutsk"_s),
			$of(IRKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Istanbul"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jakarta"_s),
			$of(WIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Jayapura"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Indonésia Oriental"_s,
				"WIT"_s,
				u"Fuso horário de verão da Indonésia Oriental"_s,
				"EIST"_s,
				u"Horário da Indonésia Oriental"_s,
				"WIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kabul"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Afeganistão"_s,
				"AFT"_s,
				u"Fuso horário de verão do Afeganistão"_s,
				"AFST"_s,
				u"Horário do Afeganistão"_s,
				"AFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Kamchatka"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Petropavlovsk-Kamchatski"_s,
				"PETT"_s,
				u"Fuso horário de verão de Petropavlovsk-Kamchatski"_s,
				"PETST"_s,
				u"Horário de Petropavlovsk-Kamchatski"_s,
				"PETT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Karachi"_s),
			$of(PKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kashgar"_s),
			$of(XJT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kathmandu"_s),
			$of(NPT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Katmandu"_s),
			$of(NPT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Khandyga"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kolkata"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Krasnoyarsk"_s),
			$of(KRAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuala_Lumpur"_s),
			$of(MYT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuching"_s),
			$of(MYT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Kuwait"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macao"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Macau"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Magadan"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Magadan"_s,
				"MAGT"_s,
				u"Fuso horário de verão de Magadan"_s,
				"MAGST"_s,
				u"Horário de Magadan"_s,
				"MAGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Makassar"_s),
			$of(CIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Manila"_s),
			$of($$new($StringArray, {
				"Philippines Standard Time"_s,
				"PST"_s,
				"Philippines Daylight Time"_s,
				"PDT"_s,
				"Philippines Time"_s,
				"PT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Muscat"_s),
			$of(GST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Nicosia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novokuznetsk"_s),
			$of(KRAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Novosibirsk"_s),
			$of(NOVT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Oral"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Uralsk"_s,
				"ORAT"_s,
				u"Fuso horário de verão de Uralsk"_s,
				"ORAST"_s,
				u"Horário de Uralsk"_s,
				"ORAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Omsk"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Omsk"_s,
				"OMST"_s,
				u"Fuso horário de verão de Omsk"_s,
				"OMSST"_s,
				u"Horário de Omsk"_s,
				"OMST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Phnom_Penh"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pontianak"_s),
			$of(WIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Pyongyang"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qatar"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Qyzylorda"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Kizil-Orda"_s,
				"QYZT"_s,
				u"Fuso horário de verão de Kizil-Orda"_s,
				"QYZST"_s,
				u"Horário de Qyzylorda"_s,
				"QYZT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Rangoon"_s),
			$of(MMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Riyadh"_s),
			$of(ARAST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Saigon"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Sakhalin"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Sakhalina"_s,
				"SAKT"_s,
				u"Fuso horário de verão de Sakhalina"_s,
				"SAKST"_s,
				u"Horário de Sakhalin"_s,
				"SAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Samarkand"_s),
			$of(UZT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Seoul"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Asia/Singapore"_s),
			$of(SGT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Srednekolymsk"_s),
			$of($$new($StringArray, {
				"Srednekolymsk Time"_s,
				"SRET"_s,
				"Srednekolymsk Daylight Time"_s,
				"SREDT"_s,
				"Srednekolymsk Time"_s,
				"SRET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Taipei"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tel_Aviv"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tashkent"_s),
			$of(UZT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Tbilisi"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Geórgia"_s,
				"GET"_s,
				u"Fuso horário de verão da Geórgia"_s,
				"GEST"_s,
				u"Horário da Geórgia"_s,
				"GET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Tehran"_s),
			$of(IRT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimbu"_s),
			$of(BTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Thimphu"_s),
			$of(BTT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ujung_Pandang"_s),
			$of(CIT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulaanbaatar"_s),
			$of(ULAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ulan_Bator"_s),
			$of(ULAT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Urumqi"_s),
			$of(XJT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Ust-Nera"_s),
			$of($$new($StringArray, {
				u"Horário de Ust-Nera"_s,
				"VLAT"_s,
				u"Horário de Verão de Ust-Nera"_s,
				"VLAST"_s,
				u"Horário de Ust-Nera"_s,
				"VLAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Vientiane"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Vladivostok"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Vladivostok"_s,
				"VLAT"_s,
				u"Fuso horário de verão de Vladivostok"_s,
				"VLAST"_s,
				u"Horário de Vladivostok"_s,
				"VLAT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Yakutsk"_s),
			$of(YAKT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yangon"_s),
			$of(MMT)
		}),
		$$new($ObjectArray, {
			$of("Asia/Yekaterinburg"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Yekaterinburgo"_s,
				"YEKT"_s,
				u"Fuso horário de verão de Yekaterinburgo"_s,
				"YEKST"_s,
				u"Horário de Yekaterinburg"_s,
				"YEKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Asia/Yerevan"_s),
			$of(ARMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Azores"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Açores"_s,
				"AZOT"_s,
				u"Fuso horário de verão das Açores"_s,
				"AZOST"_s,
				u"Horário de Açores"_s,
				"AZOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Bermuda"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Canary"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Cape_Verde"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Cabo Verde"_s,
				"CVT"_s,
				u"Fuso horário de verão de Cabo Verde"_s,
				"CVST"_s,
				u"Horário de Cabo Verde"_s,
				"CVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faeroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Faroe"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Jan_Mayen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Madeira"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Reykjavik"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/South_Georgia"_s),
			$of($$new($StringArray, {
				u"Fuso horário padrão da Geórgia do Sul"_s,
				"GST"_s,
				u"Horário de luz natural da Geórgia do Sul"_s,
				"GDT"_s,
				u"Horário da Geórgia do Sul"_s,
				"GT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Atlantic/St_Helena"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Atlantic/Stanley"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Falkland"_s,
				"FKT"_s,
				u"Fuso horário de verão das Ilhas Falkland"_s,
				"FKST"_s,
				u"Horário das Ilhas Malvinas"_s,
				"FKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Australia/ACT"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Adelaide"_s),
			$of(ADELAIDE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Brisbane"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Broken_Hill"_s),
			$of(BROKEN_HILL)
		}),
		$$new($ObjectArray, {
			$of("Australia/Canberra"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Currie"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Darwin"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("Australia/Eucla"_s),
			$of($$new($StringArray, {
				u"Fuso Horário Ocidental Central (Austrália)"_s,
				"ACWST"_s,
				u"Fuso Horário de Verão Ocidental Central (Austrália)"_s,
				"ACWDT"_s,
				u"Horário Ocidental Central (Austrália)"_s,
				"ACWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Australia/Hobart"_s),
			$of(TASMANIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/LHI"_s),
			$of(LORD_HOWE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lindeman"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Lord_Howe"_s),
			$of(LORD_HOWE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Melbourne"_s),
			$of(VICTORIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/North"_s),
			$of(DARWIN)
		}),
		$$new($ObjectArray, {
			$of("Australia/NSW"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Perth"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Australia/Queensland"_s),
			$of(BRISBANE)
		}),
		$$new($ObjectArray, {
			$of("Australia/South"_s),
			$of(ADELAIDE)
		}),
		$$new($ObjectArray, {
			$of("Australia/Sydney"_s),
			$of(EST_NSW)
		}),
		$$new($ObjectArray, {
			$of("Australia/Tasmania"_s),
			$of(TASMANIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/Victoria"_s),
			$of(VICTORIA)
		}),
		$$new($ObjectArray, {
			$of("Australia/West"_s),
			$of(WST_AUS)
		}),
		$$new($ObjectArray, {
			$of("Australia/Yancowinna"_s),
			$of(BROKEN_HILL)
		}),
		$$new($ObjectArray, {
			$of("BET"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("BST"_s),
			$of(BDT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/Acre"_s),
			$of(ACT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/DeNoronha"_s),
			$of(NORONHA)
		}),
		$$new($ObjectArray, {
			$of("Brazil/East"_s),
			$of(BRT)
		}),
		$$new($ObjectArray, {
			$of("Brazil/West"_s),
			$of(AMT)
		}),
		$$new($ObjectArray, {
			$of("Canada/Atlantic"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Central"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Eastern"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Mountain"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Newfoundland"_s),
			$of(NST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Pacific"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Yukon"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Canada/Saskatchewan"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("CAT"_s),
			$of(CAT)
		}),
		$$new($ObjectArray, {
			$of("CET"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Chile/Continental"_s),
			$of(CLT)
		}),
		$$new($ObjectArray, {
			$of("Chile/EasterIsland"_s),
			$of(EASTER)
		}),
		$$new($ObjectArray, {
			$of("CST6CDT"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("Cuba"_s),
			$of(CUBA)
		}),
		$$new($ObjectArray, {
			$of("EAT"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("EET"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Egypt"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Eire"_s),
			$of(DUBLIN)
		}),
		$$new($ObjectArray, {
			$of("EST5EDT"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Etc/Greenwich"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Etc/UCT"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/Universal"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/UTC"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Etc/Zulu"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Europe/Amsterdam"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Andorra"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Athens"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belfast"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Belgrade"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Berlin"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Bratislava"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Brussels"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Budapest"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Busingen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Chisinau"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Copenhagen"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Dublin"_s),
			$of(DUBLIN)
		}),
		$$new($ObjectArray, {
			$of("Europe/Gibraltar"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Guernsey"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Helsinki"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Isle_of_Man"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Istanbul"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Jersey"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kaliningrad"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Kiev"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Lisbon"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Ljubljana"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/London"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Europe/Luxembourg"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Madrid"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Malta"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Mariehamn"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Minsk"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Monaco"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Moscow"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Nicosia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Oslo"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Podgorica"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Prague"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Riga"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Rome"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Samara"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Samara"_s,
				"SAMT"_s,
				u"Fuso horário de verão de Samara"_s,
				"SAMST"_s,
				u"Horário de Samara"_s,
				"SAMT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Europe/San_Marino"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sarajevo"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Simferopol"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Skopje"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Sofia"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Stockholm"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tallinn"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tirane"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Tiraspol"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Uzhgorod"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vaduz"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vatican"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vienna"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Vilnius"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Volgograd"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("Europe/Warsaw"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zagreb"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zaporozhye"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("Europe/Zurich"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("GB-Eire"_s),
			$of(GMTBST)
		}),
		$$new($ObjectArray, {
			$of("Greenwich"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Hongkong"_s),
			$of(HKT)
		}),
		$$new($ObjectArray, {
			$of("Iceland"_s),
			$of(GMT)
		}),
		$$new($ObjectArray, {
			$of("Iran"_s),
			$of(IRT)
		}),
		$$new($ObjectArray, {
			$of("IST"_s),
			$of(IST)
		}),
		$$new($ObjectArray, {
			$of("Indian/Antananarivo"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Chagos"_s),
			$of($$new($StringArray, {
				u"Fuso horário dos territórios do Oceano Índico"_s,
				"IOT"_s,
				u"Fuso horário de verão dos territórios do Oceano Índico"_s,
				"IOST"_s,
				u"Horário do Território do Oceano Índico"_s,
				"IOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Christmas"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Christmas"_s,
				"CXT"_s,
				u"Fuso horário de verão das Ilhas Christmas"_s,
				"CXST"_s,
				u"Horário da Ilha Christmas"_s,
				"CIT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Cocos"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Cocos"_s,
				"CCT"_s,
				u"Fuso horário de verão das Ilhas Cocos"_s,
				"CCST"_s,
				u"Horário das Ilhas Cocos"_s,
				"CCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Comoro"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Kerguelen"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Terras Austrais e Antárticas Francesas"_s,
				"TFT"_s,
				u"Fuso horário de verão das Terras Austrais e Antárticas Francesas"_s,
				"TFST"_s,
				u"Horário do Território Francês no Sul da Antártica"_s,
				"TFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mahe"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Seychelles"_s,
				"SCT"_s,
				u"Fuso horário de verão das Seychelles"_s,
				"SCST"_s,
				u"Horário de Seychelles"_s,
				"SCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Maldives"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Maldivas"_s,
				"MVT"_s,
				u"Fuso horário de verão das Maldivas"_s,
				"MVST"_s,
				u"Horário das Maldivas"_s,
				"MVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mauritius"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Maurício"_s,
				"MUT"_s,
				u"Fuso horário de verão das Ilhas Maurício"_s,
				"MUST"_s,
				u"Horário de Maurício"_s,
				"MUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Indian/Mayotte"_s),
			$of(EAT)
		}),
		$$new($ObjectArray, {
			$of("Indian/Reunion"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Reunião"_s,
				"RET"_s,
				u"Fuso horário de verão de Reunião"_s,
				"REST"_s,
				u"Horário das Ilhas Reunião"_s,
				"RET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Israel"_s),
			$of(ISRAEL)
		}),
		$$new($ObjectArray, {
			$of("Jamaica"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("Japan"_s),
			$of(JST)
		}),
		$$new($ObjectArray, {
			$of("Kwajalein"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Libya"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("MET"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Europa Média"_s,
				"MET"_s,
				u"Fuso horário de verão da Europa Média"_s,
				"MEST"_s,
				"MET"_s,
				"MET"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Mexico/BajaNorte"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("Mexico/BajaSur"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Mexico/General"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("MIT"_s),
			$of(WST_SAMOA)
		}),
		$$new($ObjectArray, {
			$of("MST7MDT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("Navajo"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("NET"_s),
			$of(ARMT)
		}),
		$$new($ObjectArray, {
			$of("NST"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("NZ-CHAT"_s),
			$of(CHAST)
		}),
		$$new($ObjectArray, {
			$of("PLT"_s),
			$of(PKT)
		}),
		$$new($ObjectArray, {
			$of("Portugal"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("PRT"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Apia"_s),
			$of(WST_SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Auckland"_s),
			$of(NZST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Bougainville"_s),
			$of($$new($StringArray, {
				"Bougainville Standard Time"_s,
				"BST"_s,
				"Bougainville Daylight Time"_s,
				"BST"_s,
				"Bougainville Time"_s,
				"BT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chatham"_s),
			$of(CHAST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Chuuk"_s),
			$of(TRUT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Easter"_s),
			$of(EASTER)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Efate"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Vanuatu"_s,
				"VUT"_s,
				u"Fuso horário de verão de Vanuatu"_s,
				"VUST"_s,
				u"Horário de Vanuatu"_s,
				"VUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Enderbury"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Fénix"_s,
				"PHOT"_s,
				u"Fuso horário de verão das Ilhas Fénix"_s,
				"PHOST"_s,
				u"Horário da Ilha Phoenix"_s,
				"PHOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fakaofo"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Tokelau"_s,
				"TKT"_s,
				u"Fuso horário de verão de Tokelau"_s,
				"TKST"_s,
				u"Horário de Toquelau"_s,
				"TKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Fiji"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Fiji"_s,
				"FJT"_s,
				u"Fuso horário de verão de Fiji"_s,
				"FJST"_s,
				u"Horário de Fiji"_s,
				"FJT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Funafuti"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Tuvalu"_s,
				"TVT"_s,
				u"Fuso horário de verão de Tuvalu"_s,
				"TVST"_s,
				u"Horário de Tuvalu"_s,
				"TVT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Galapagos"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Galápagos"_s,
				"GALT"_s,
				u"Fuso horário de verão das Ilhas Galápagos"_s,
				"GALST"_s,
				u"Horário de Galápagos"_s,
				"GALT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Gambier"_s),
			$of(GAMBIER)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guadalcanal"_s),
			$of(SBT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Guam"_s),
			$of(ChST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Johnston"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kiritimati"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Espórades Equatoriais"_s,
				"LINT"_s,
				u"Fuso horário de verão das Espórades Equatoriais"_s,
				"LINST"_s,
				u"Horário das Ilhas Line"_s,
				"LINT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kosrae"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Kosrae"_s,
				"KOST"_s,
				u"Fuso horário de verão de Kosrae"_s,
				"KOSST"_s,
				u"Horário de Kosrae"_s,
				"KOST"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Kwajalein"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Majuro"_s),
			$of(MHT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Marquesas"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Marquesas"_s,
				"MART"_s,
				u"Fuso horário de verão das Ilhas Marquesas"_s,
				"MARST"_s,
				u"Horário das Ilhas Marquesas"_s,
				"MART"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Midway"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Nauru"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Nauru"_s,
				"NRT"_s,
				u"Fuso horário de verão de Nauru"_s,
				"NRST"_s,
				u"Horário de Nauru"_s,
				"NRT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Niue"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Niue"_s,
				"NUT"_s,
				u"Fuso horário de verão de Niue"_s,
				"NUST"_s,
				u"Horário de Niue"_s,
				"NUT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Norfolk"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Ilha de Norfolk"_s,
				"NFT"_s,
				u"Fuso horário de verão da Ilha de Norfolk"_s,
				"NFST"_s,
				u"Horário de Norfolk"_s,
				"NFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Noumea"_s),
			$of($$new($StringArray, {
				u"Fuso horário da Nova Caledônia"_s,
				"NCT"_s,
				u"Fuso horário de verão da Nova Caledônia"_s,
				"NCST"_s,
				u"Horário da Nova Caledônia"_s,
				"NCT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pago_Pago"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Palau"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Palau"_s,
				"PWT"_s,
				u"Fuso horário de verão de Palau"_s,
				"PWST"_s,
				u"Horário de Palau"_s,
				"PWT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pitcairn"_s),
			$of(PITCAIRN)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Pohnpei"_s),
			$of(PONT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Ponape"_s),
			$of(PONT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Port_Moresby"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Papua-Nova Guiné"_s,
				"PGT"_s,
				u"Fuso horário de verão de Papua-Nova Guiné"_s,
				"PGST"_s,
				u"Horário de Papua-Nova Guiné"_s,
				"PGT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Rarotonga"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Cook"_s,
				"CKT"_s,
				u"Fuso horário de verão das Ilhas Cook"_s,
				"CKHST"_s,
				u"Horário das Ilhas Cook"_s,
				"CKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Saipan"_s),
			$of(ChST)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Samoa"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tahiti"_s),
			$of($$new($StringArray, {
				u"Fuso horário do Taiti"_s,
				"TAHT"_s,
				u"Fuso horário de verão do Taiti"_s,
				"TAHST"_s,
				u"Horário do Tahiti"_s,
				"TAHT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tarawa"_s),
			$of($$new($StringArray, {
				u"Fuso horário das Ilhas Gilbert"_s,
				"GILT"_s,
				u"Fuso horário de verão das Ilhas Gilbert"_s,
				"GILST"_s,
				u"Horário das Ilhas Gilbert"_s,
				"GILT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Tongatapu"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Tonga"_s,
				"TOT"_s,
				u"Fuso horário de verão de Tonga"_s,
				"TOST"_s,
				u"Horário de Tonga"_s,
				"TOT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Truk"_s),
			$of(TRUT)
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wake"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Wake"_s,
				"WAKT"_s,
				u"Fuso horário de verão de Wake"_s,
				"WAKST"_s,
				u"Horário de Wake"_s,
				"WAKT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Wallis"_s),
			$of($$new($StringArray, {
				u"Fuso horário de Wallis e Futuna"_s,
				"WFT"_s,
				u"Fuso horário de verão de Wallis e Futuna"_s,
				"WFST"_s,
				u"Horário das Ilhas Wallis e Futuna"_s,
				"WFT"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Pacific/Yap"_s),
			$of(TRUT)
		}),
		$$new($ObjectArray, {
			$of("Poland"_s),
			$of(CET)
		}),
		$$new($ObjectArray, {
			$of("PRC"_s),
			$of(CTT)
		}),
		$$new($ObjectArray, {
			$of("PST8PDT"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("ROK"_s),
			$of(KST)
		}),
		$$new($ObjectArray, {
			$of("Singapore"_s),
			$of(SGT)
		}),
		$$new($ObjectArray, {
			$of("SST"_s),
			$of(SBT)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/AST4ADT"_s),
			$of(AST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/CST6CDT"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/EST5EDT"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/HST10"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/MST7MDT"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/PST8PDT"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("SystemV/YST9YDT"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("Turkey"_s),
			$of(EET)
		}),
		$$new($ObjectArray, {
			$of("UCT"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("Universal"_s),
			$of(UTC)
		}),
		$$new($ObjectArray, {
			$of("US/Alaska"_s),
			$of(AKST)
		}),
		$$new($ObjectArray, {
			$of("US/Aleutian"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("US/Arizona"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("US/Central"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("US/Eastern"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Hawaii"_s),
			$of(HST)
		}),
		$$new($ObjectArray, {
			$of("US/Indiana-Starke"_s),
			$of(CST)
		}),
		$$new($ObjectArray, {
			$of("US/East-Indiana"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Michigan"_s),
			$of(EST)
		}),
		$$new($ObjectArray, {
			$of("US/Mountain"_s),
			$of(MST)
		}),
		$$new($ObjectArray, {
			$of("US/Pacific"_s),
			$of(PST)
		}),
		$$new($ObjectArray, {
			$of("US/Samoa"_s),
			$of(SAMOA)
		}),
		$$new($ObjectArray, {
			$of("VST"_s),
			$of(ICT)
		}),
		$$new($ObjectArray, {
			$of("W-SU"_s),
			$of(MSK)
		}),
		$$new($ObjectArray, {
			$of("WET"_s),
			$of(WET)
		}),
		$$new($ObjectArray, {
			$of("Zulu"_s),
			$of(UTC)
		})
	});
}

TimeZoneNames_pt_BR::TimeZoneNames_pt_BR() {
}

$Class* TimeZoneNames_pt_BR::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_pt_BR, name, initialize, &_TimeZoneNames_pt_BR_ClassInfo_, allocate$TimeZoneNames_pt_BR);
	return class$;
}

$Class* TimeZoneNames_pt_BR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun