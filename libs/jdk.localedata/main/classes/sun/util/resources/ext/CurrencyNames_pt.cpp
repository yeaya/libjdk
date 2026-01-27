#include <sun/util/resources/ext/CurrencyNames_pt.h>

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

$MethodInfo _CurrencyNames_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_pt",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_MethodInfo_
};

$Object* allocate$CurrencyNames_pt($Class* clazz) {
	return $of($alloc(CurrencyNames_pt));
}

void CurrencyNames_pt::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_pt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("Peseta de Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirém dos Emirados Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of("Afegane (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afegane"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Lek Albanês"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Dram armênio"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Guilder das Antilhas Holandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Cuanza angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"Xelim austríaco"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dólar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("Guilder de Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of("Manat azerbaijano"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Manat do Azerbaijão"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Marco bósnio-herzegovino conversível"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Dólar de Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka de Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Franco belga"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"Lev forte búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Lev novo búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinar bareinita"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franco do Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Dólar das Bermudas"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Dólar do Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("Boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("Mvdol boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Real brasileiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Dólar das Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ngultrum do Butão"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula botsuanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of("Rublo novo bielo-russo (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of("Rublo bielo-russo"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Dólar do Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dólar canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Franco congolês"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Franco suíço"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of("Unidades de Fomento chilenas"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuan Renminbi chinês"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("Peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("Colon da Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"Dinar sérvio antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Peso cubano conversível"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo cabo-verdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Libra cipriota"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Coroa checa"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"Marco alemão"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franco do Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Coroa dinamarquesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("Peso dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Coroa estoniana"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Libra egípcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa da Eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of("Peseta espanhola"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Birr etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Marca finlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Dólar de Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("Libra das Malvinas"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Franco francês"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Libra esterlina britânica"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Cedi de Gana (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"Cedi ganês"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Libra de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dalasi de Gâmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Franco de Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("Dracma grego"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Quetçal da Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"Peso da Guiné-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Dólar da Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Dólar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("Lempira de Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Gurde do Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Forinte húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Rupia indonésia"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Libra irlandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("Sheqel Novo israelita"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rúpia indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("Dinar iraquiano"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("Coroa islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Lira italiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Dólar jamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinar jordaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Iene japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Xelim queniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("Som quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Riel cambojano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franco de Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("Won norte-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("Won sul-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("Dinar coveitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Dólar das Ilhas Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Tenge do Cazaquistão"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("Kip de Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Libra libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("Rupia do Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dólar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti do Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("Lita lituano"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"Franco luxemburguês"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Lats letão"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dinar líbio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dirém marroquino"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Leu moldávio"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary de Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of("Franco de Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Dinar macedônio"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kyat de Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("Tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataca macaense"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya da Mauritânia"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of("Lira maltesa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rupia de Maurício"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rupias das Ilhas Maldivas"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Cuacha do Maláui"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("Peso mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Unidade Mexicana de Investimento (UDI)"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgit malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metical antigo de Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Metical do Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dólar da Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Córdoba Ouro nicaraguense"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"Florim holandês"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Coroa norueguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Dólar da Nova Zelândia"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Rial de Omã"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("Balboa panamenho"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("Sol Novo peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Kina da Papua-Nova Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("Peso filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupia paquistanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Zloti polonês"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"Escudo português"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("Guarani paraguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Rial catariano"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("Leu romeno antigo"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("Leu romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Dinar sérvio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("Rublo russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of("Rublo russo (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Franco ruandês"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Rial saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Dólar das Ilhas Salomão"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia das Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"Dinar sudanês"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Libra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("Coroa sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Dólar de Cingapura"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Libra de Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Tolar Bons esloveno"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Coroa eslovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone de Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Xelim somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Dólar do Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of("Florim do Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra de São Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of("Colom salvadorenho"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Libra síria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lilangeni da Suazilândia"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Baht tailandês"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni tadjique"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"Manat do Turcomenistão"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Novo Manat do Turcomenistão"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar tunisiano"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Paʻanga de Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of("Escudo timorense"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("Lira turca antiga"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("Lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Dólar de Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Dólar Novo de Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Xelim da Tanzânia"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Xelim ugandense"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dólar norte-americano"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"Dólar norte-americano (Dia seguinte)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"Dólar norte-americano (Mesmo dia)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("Peso uruguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Sum do Usbequistão"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"Bolívar venezuelano"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"Bolívar v enezuelano forte"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("Vatu de Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("Tala samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franco CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Prata"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Ouro"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("Unidade Composta Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Unidade Monetária Europeia"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("Unidade de Conta Europeia (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("Unidade de Conta Europeia (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Dólar do Caribe Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("Direitos Especiais de Giro"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Franco-ouro francês"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Franco UIC francês"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franco CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"Paládio"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("Franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platina"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"Código de Moeda de Teste"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"Moeda Desconhecida ou Inválida"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Rial iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("Dinar noviy iugoslavo"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand sul-africano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of("Cuacha zambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dólar do Zimbábue"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"Dólar do Zimbábue (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"Dólar do Zimbábue (2008)"_s)
		})
	});
}

CurrencyNames_pt::CurrencyNames_pt() {
}

$Class* CurrencyNames_pt::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt, name, initialize, &_CurrencyNames_pt_ClassInfo_, allocate$CurrencyNames_pt);
	return class$;
}

$Class* CurrencyNames_pt::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun