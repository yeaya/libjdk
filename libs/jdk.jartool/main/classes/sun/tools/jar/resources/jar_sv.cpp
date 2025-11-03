#include <sun/tools/jar/resources/jar_sv.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

$MethodInfo _jar_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_sv::*)()>(&jar_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_sv_MethodInfo_
};

$Object* allocate$jar_sv($Class* clazz) {
	return $of($alloc(jar_sv));
}

void jar_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"f\u00f6r c-flaggan m\u00e5ste manifest- eller indatafiler anges."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"alternativet \'-d, --describe-module\' kr\u00e4ver att ingen indatafil anges"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of("e-flaggan och manifest med attributet Main-Class kan inte anges \ntillsammans."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Fel vid tolkning av filargument"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"Ett av alternativen -{ctxuid} m\u00e5ste anges."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"ogiltig orsak: {0} m\u00e5ste vara deprecated, deprecated-for-removal eller incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"f\u00f6r u-flaggan m\u00e5ste manifest-, e-flagg- eller indatafiler anges."_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"kan inte \u00f6ppna: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : kunde inte skapa n\u00e5gon katalog"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"Kunde inte skapa en tillf\u00e4llig fil"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"{0}-beroenden f\u00f6r hashningsmodulen, kan inte hitta modulen {1} p\u00e5 moduls\u00f6kv\u00e4gen"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"Otill\u00e5tet alternativ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"ogiltig l\u00e4ngd vid bearbetning: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"Ogiltigt attribut f\u00f6r moduldeskriptor, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"alternativet {0} kr\u00e4ver ett argument"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"Tj\u00e4nsteleverant\u00f6ren hittades inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of("Moduldeskriptorn hittades inte"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of("--module-version eller --hash-modules utan module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of("Du kan inte ange flera alternativ av typen \'-cuxtid\'"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"Ingen operativ deskriptor f\u00f6r utg\u00e5van: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of("Ingen rotmoduldeskriptor, ange --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : det finns ingen s\u00e5dan fil eller katalog"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"ov\u00e4ntad versionshanterad post, {0}, f\u00f6r utg\u00e5van {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"utg\u00e5va {0} \u00e4r inte giltig"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"utg\u00e5va {0} \u00e4r inte giltig, m\u00e5ste vara >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"Kan inte h\u00e4rleda moduldeskriptor f\u00f6r: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"Ov\u00e4ntad moduldeskriptor, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"ok\u00e4nt alternativ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"postnamnet {0} \u00e4r felaktigt utformat"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"posten {0} inneh\u00e5ller en klass med ett annat api fr\u00e5n en tidigare version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"postnamnet {0} \u00e4r f\u00f6r kort, inte en katalog"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"posten {0} har en klassversion som \u00e4r inkompatibel med en tidigare version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller olika \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: module-info.class i en versionshanterad katalog inneh\u00e5ller olika \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller ett felaktigt namn"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller olika \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller olika \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller fler \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller saknade \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class i en versionshanterad katalog inneh\u00e5ller fler \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: module-info.class i en versionshanterad katalog inneh\u00e5ller olika \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"posten {0} \u00e4r en isolerad kapslad klass"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("kan inte validera {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"ogiltig jar-fil f\u00f6r flera utg\u00e5vor, {0}, har tagits bort"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"posten {0} inneh\u00e5ller en klass med det interna namnet {1}, namnen matchar inte"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"posten {0} inneh\u00e5ller en ny allm\u00e4n klass som inte kan hittas i basposterna"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of("postnamnet {0} har inget versionsnummer"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"Ett fel intr\u00e4ffade vid skrivning till befintlig jar-fil."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" \u00c5tg\u00e4rdsmodifierare som \u00e4r giltiga i alla l\u00e4gen:\n\n  -C DIR                     \u00c4ndra till den angivna katalogen och inkludera\n                             f\u00f6ljande fil"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            Namnet p\u00e5 arkivfilen. N\u00e4r det utel\u00e4mnas anv\u00e4nds stdin eller\n                             stdout beroende p\u00e5 \u00e5tg\u00e4rden\n      --release VERSION      Placerar alla f\u00f6ljande filer i en versionshanterad katalog\n                             i jar-filen (t.ex. META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              Generera utf\u00f6rliga utdata till standardutdata"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" \u00c5tg\u00e4rdsmodifierare som endast \u00e4r giltiga i l\u00e4get create:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normalisera informationen i det nya jar-arkivet\n                             n\u00e4r det har skapats"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" \u00c5tg\u00e4rdsmodifierare som endast \u00e4r giltiga i l\u00e4gena create och update:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Exkludera fr\u00e5n standardrotupps\u00e4ttningen med moduler"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Ber\u00e4kna och registrera hashningarna f\u00f6r moduler som\n                             matchar det angivna m\u00f6nstret och som \u00e4r direkt eller\n                             indirekt beroende av att ett modul\u00e4rt jar-arkiv skapas\n                             eller att ett icke-modul\u00e4rt jar-arkiv uppdateras"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" \u00c5tg\u00e4rdsmodifierare som endast \u00e4r giltiga i l\u00e4gena create, update och generate-index:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          Endast lagring, anv\u00e4nd ingen ZIP-komprimering"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME Applikationsing\u00e5ngspunkten f\u00f6r frist\u00e5ende\n                             applikationer paketerad i ett modul\u00e4rt, eller k\u00f6rbart,\n                             jar-arkiv"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Inkludera manifestinformationen fr\u00e5n den angivna\n                             manifestfilen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Plats f\u00f6r modulberoende f\u00f6r att generera\n                             hashningen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    Modulversionen vid skapande av ett modul\u00e4rt\n                             jar-arkiv eller vid uppdatering av ett icke-modul\u00e4rt jar-arkiv"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          Skapa inte en manifestfil f\u00f6r posterna"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Tips f\u00f6r ett verktyg f\u00f6r att utf\u00e4rda en varning om modulen\n                             har l\u00f6sts. deprecated, deprecated-for-removal,\n                             eller incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" Huvudfunktionsl\u00e4ge:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of("  -c, --create               Skapa arkivet"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of("  -d, --describe-module      Skriv ut moduldeskriptorn eller det automatiska modulnamnet"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              Extrahera namngivna (eller alla) filer fr\u00e5n arkivet"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Generera indexinformation f\u00f6r de angivna jar-\n                             arkiven"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Listar inneh\u00e5llsf\u00f6rteckningen f\u00f6r arkivet"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Uppdatera ett befintligt jar-arkiv"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" \u00d6vriga alternativ:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        Visa den h\u00e4r hj\u00e4lpen eller kompatibilitetshj\u00e4lpen (valfritt)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Visa hj\u00e4lp f\u00f6r extra alternativ"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of("      --version              Skriv ut programversion"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Ett arkiv \u00e4r ett modul\u00e4rt jar-arkiv om en moduldeskriptor, \'module-info.class\',\n finns i roten av de angivna katalogerna eller det angivna jar-arkivet.\n F\u00f6ljande \u00e5tg\u00e4rder \u00e4r endast giltiga vid skapande av ett modul\u00e4rt jar-arkiv och\n vid uppdatering av ett befintligt icke-modul\u00e4rt jar-arkiv: \'--module-version\',\n \'--hash-modules\' och \'--module-path\'.\n\n Obligatoriska och valfria alternativ f\u00f6r l\u00e5nga alternativ \u00e4r \u00e4ven obligatoriska\n respektive valfria f\u00f6r alla motsvarande korta alternativ."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Syntax: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar skapar ett arkiv f\u00f6r klasser och resurser, och kan \u00e4ndra och \u00e5terst\u00e4lla\nenskilda klasser och resurser fr\u00e5n ett arkiv.\n\n Exempel:\n # Skapa ett arkiv med namnet classes.jar med tv\u00e5 klassfiler:\n jar --create --file classes.jar Foo.class Bar.class\n # Skapa ett arkiv med ett befintligt manifest med alla filerna i \'foo/\':\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Skapa ett modul\u00e4rt jar-arkiv, d\u00e4r moduldeskriptorn finns i\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Uppdatera ett befintligt icke-modul\u00e4rt jar-arkiv till ett modul\u00e4rt jar-arkiv:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Skapa ett jar-arkiv f\u00f6r flera utg\u00e5vor och placera vissa av filerna i katalogen \'META-INF/versions/9\':\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nOm du v"
				"ill f\u00f6rkorta eller f\u00f6renkla kommandot jar kan du ange argument i en separat\ntextfil och \u00f6verf\u00f6ra den med tecknet \'@\' som prefix.\n\n Exempel:\n # L\u00e4s ytterligare alternativ och en lista \u00f6ver klassfiler fr\u00e5n filen \'classes.list\'\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Syntax: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"F\u00f6rs\u00f6k med \'jar --help\' f\u00f6r mer information."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of("tillagt manifestfil"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of("lade till module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"l\u00e4gger till: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"Ingen moduldeskriptor hittades. H\u00e4rledd automatisk modul."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of("  skapad: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of("({0}% packat)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of("extraherat: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of("ignorerar posten {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(" uppackat: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of("(in = {0}) (ut = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(0% lagrat)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of("uppdaterat manifest"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of("uppdaterade module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"Kompatibilitetsgr\u00e4nssnitt:\nSyntax: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\nAlternativ:\n    -c  skapa nytt arkiv\n    -t  lista inneh\u00e5llsf\u00f6rteckning f\u00f6r arkiv\n    -x  extrahera namngivna (eller alla) filer fr\u00e5n arkivet\n    -u  uppdatera befintligt arkiv\n    -v  generera utf\u00f6rliga utdata till standardutdata\n    -f  ange namnet p\u00e5 arkivfilen\n    -m  inkludera manifestinformation fr\u00e5n den angivna manifestfilen\n    -n  utf\u00f6r Pack200-normalisering n\u00e4r ett nytt arkiv har skapats\n    -e  ange applikationsing\u00e5ngspunkt f\u00f6r frist\u00e5ende applikation \n        som medf\u00f6ljer i en jar-programfil\n    -0  lagra endast, anv\u00e4nd inte ZIP-komprimering\n    -P  beh\u00e5ll komponenter f\u00f6r inledande \'/\' (absolut s\u00f6kv\u00e4g) och \"..\" (\u00f6verordnad  katalog) fr\u00e5n filnamn\n    -M  skapa inte en manifestfil f\u00f6r posterna\n    -i  generera indexinformation f\u00f6r de angivna jar-filerna\n    -C  \u00e4ndra till den angivna katalogen och inkludera f\u00f6ljande fil\nOm en fil \u00e4r en katalog bearbetas den rekursivt.\nNamnen p\u00e5 manife"
				"stfilen, arkivfilen och ing\u00e5ngspunkten anges med samma\nordning som flaggorna \'m\', \'f\' och \'e\'.\n\nExempel 1: arkivera tv\u00e5 klassfiler i ett arkiv med namnet classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExempel 2: anv\u00e4nd den befintliga manifestfilen \'mymanifest\' och arkivera alla\n           filer i katalogen \'foo/\' till \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"ov\u00e4ntad versionshanterad post, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Varning: posten {0} \u00e4r en allm\u00e4n klass\ni ett dolt paket. Om du placerar den h\u00e4r jar-filen p\u00e5 klass\u00f6kv\u00e4gen leder\ndet till inkompatibla allm\u00e4nna gr\u00e4nssnitt"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Varning: posten {0} inneh\u00e5ller en klass som\n\u00e4r identisk med en post som redan finns i jar-filen"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of("Varning: posten {0}, flera resurser med samma namn"_s)
		})
	});
}

jar_sv::jar_sv() {
}

$Class* jar_sv::load$($String* name, bool initialize) {
	$loadClass(jar_sv, name, initialize, &_jar_sv_ClassInfo_, allocate$jar_sv);
	return class$;
}

$Class* jar_sv::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun