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
	{"<init>", "()V", nullptr, $PUBLIC, $method(jar_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_sv, getContents, $ObjectArray2*)},
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
			$of(u"för c-flaggan måste manifest- eller indatafiler anges."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"alternativet \'-d, --describe-module\' kräver att ingen indatafil anges"_s)
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
			$of(u"Ett av alternativen -{ctxuid} måste anges."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"ogiltig orsak: {0} måste vara deprecated, deprecated-for-removal eller incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"för u-flaggan måste manifest-, e-flagg- eller indatafiler anges."_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"kan inte öppna: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : kunde inte skapa någon katalog"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"Kunde inte skapa en tillfällig fil"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"{0}-beroenden för hashningsmodulen, kan inte hitta modulen {1} på modulsökvägen"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"Otillåtet alternativ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"ogiltig längd vid bearbetning: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"Ogiltigt attribut för moduldeskriptor, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"alternativet {0} kräver ett argument"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"Tjänsteleverantören hittades inte: {0}"_s)
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
			$of(u"Ingen operativ deskriptor för utgåvan: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of("Ingen rotmoduldeskriptor, ange --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : det finns ingen sådan fil eller katalog"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"oväntad versionshanterad post, {0}, för utgåvan {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"utgåva {0} är inte giltig"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"utgåva {0} är inte giltig, måste vara >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"Kan inte härleda moduldeskriptor för: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"Oväntad moduldeskriptor, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"okänt alternativ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"postnamnet {0} är felaktigt utformat"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"posten {0} innehåller en klass med ett annat api från en tidigare version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"postnamnet {0} är för kort, inte en katalog"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"posten {0} har en klassversion som är inkompatibel med en tidigare version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller olika \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: module-info.class i en versionshanterad katalog innehåller olika \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller ett felaktigt namn"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller olika \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller olika \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller fler \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller saknade \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class i en versionshanterad katalog innehåller fler \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: module-info.class i en versionshanterad katalog innehåller olika \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"posten {0} är en isolerad kapslad klass"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("kan inte validera {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"ogiltig jar-fil för flera utgåvor, {0}, har tagits bort"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"posten {0} innehåller en klass med det interna namnet {1}, namnen matchar inte"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"posten {0} innehåller en ny allmän klass som inte kan hittas i basposterna"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of("postnamnet {0} har inget versionsnummer"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"Ett fel inträffade vid skrivning till befintlig jar-fil."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" Åtgärdsmodifierare som är giltiga i alla lägen:\n\n  -C DIR                     Ändra till den angivna katalogen och inkludera\n                             följande fil"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            Namnet på arkivfilen. När det utelämnas används stdin eller\n                             stdout beroende på åtgärden\n      --release VERSION      Placerar alla följande filer i en versionshanterad katalog\n                             i jar-filen (t.ex. META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              Generera utförliga utdata till standardutdata"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Åtgärdsmodifierare som endast är giltiga i läget create:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normalisera informationen i det nya jar-arkivet\n                             när det har skapats"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Åtgärdsmodifierare som endast är giltiga i lägena create och update:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Exkludera från standardrotuppsättningen med moduler"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Beräkna och registrera hashningarna för moduler som\n                             matchar det angivna mönstret och som är direkt eller\n                             indirekt beroende av att ett modulärt jar-arkiv skapas\n                             eller att ett icke-modulärt jar-arkiv uppdateras"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Åtgärdsmodifierare som endast är giltiga i lägena create, update och generate-index:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          Endast lagring, använd ingen ZIP-komprimering"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME Applikationsingångspunkten för fristående\n                             applikationer paketerad i ett modulärt, eller körbart,\n                             jar-arkiv"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Inkludera manifestinformationen från den angivna\n                             manifestfilen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Plats för modulberoende för att generera\n                             hashningen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    Modulversionen vid skapande av ett modulärt\n                             jar-arkiv eller vid uppdatering av ett icke-modulärt jar-arkiv"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          Skapa inte en manifestfil för posterna"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Tips för ett verktyg för att utfärda en varning om modulen\n                             har lösts. deprecated, deprecated-for-removal,\n                             eller incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" Huvudfunktionsläge:\n"_s)
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
			$of(u"  -x, --extract              Extrahera namngivna (eller alla) filer från arkivet"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Generera indexinformation för de angivna jar-\n                             arkiven"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Listar innehållsförteckningen för arkivet"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Uppdatera ett befintligt jar-arkiv"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" Övriga alternativ:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        Visa den här hjälpen eller kompatibilitetshjälpen (valfritt)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Visa hjälp för extra alternativ"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of("      --version              Skriv ut programversion"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Ett arkiv är ett modulärt jar-arkiv om en moduldeskriptor, \'module-info.class\',\n finns i roten av de angivna katalogerna eller det angivna jar-arkivet.\n Följande åtgärder är endast giltiga vid skapande av ett modulärt jar-arkiv och\n vid uppdatering av ett befintligt icke-modulärt jar-arkiv: \'--module-version\',\n \'--hash-modules\' och \'--module-path\'.\n\n Obligatoriska och valfria alternativ för långa alternativ är även obligatoriska\n respektive valfria för alla motsvarande korta alternativ."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Syntax: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar skapar ett arkiv för klasser och resurser, och kan ändra och återställa\nenskilda klasser och resurser från ett arkiv.\n\n Exempel:\n # Skapa ett arkiv med namnet classes.jar med två klassfiler:\n jar --create --file classes.jar Foo.class Bar.class\n # Skapa ett arkiv med ett befintligt manifest med alla filerna i \'foo/\':\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Skapa ett modulärt jar-arkiv, där moduldeskriptorn finns i\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Uppdatera ett befintligt icke-modulärt jar-arkiv till ett modulärt jar-arkiv:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Skapa ett jar-arkiv för flera utgåvor och placera vissa av filerna i katalogen \'META-INF/versions/9\':\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nOm du v"
				"ill förkorta eller förenkla kommandot jar kan du ange argument i en separat\ntextfil och överföra den med tecknet \'@\' som prefix.\n\n Exempel:\n # Läs ytterligare alternativ och en lista över klassfiler från filen \'classes.list\'\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Syntax: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"Försök med \'jar --help\' för mer information."_s)
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
			$of(u"lägger till: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"Ingen moduldeskriptor hittades. Härledd automatisk modul."_s)
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
			$of(u"Kompatibilitetsgränssnitt:\nSyntax: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\nAlternativ:\n    -c  skapa nytt arkiv\n    -t  lista innehållsförteckning för arkiv\n    -x  extrahera namngivna (eller alla) filer från arkivet\n    -u  uppdatera befintligt arkiv\n    -v  generera utförliga utdata till standardutdata\n    -f  ange namnet på arkivfilen\n    -m  inkludera manifestinformation från den angivna manifestfilen\n    -n  utför Pack200-normalisering när ett nytt arkiv har skapats\n    -e  ange applikationsingångspunkt för fristående applikation \n        som medföljer i en jar-programfil\n    -0  lagra endast, använd inte ZIP-komprimering\n    -P  behåll komponenter för inledande \'/\' (absolut sökväg) och \"..\" (överordnad  katalog) från filnamn\n    -M  skapa inte en manifestfil för posterna\n    -i  generera indexinformation för de angivna jar-filerna\n    -C  ändra till den angivna katalogen och inkludera följande fil\nOm en fil är en katalog bearbetas den rekursivt.\nNamnen på manife"
				"stfilen, arkivfilen och ingångspunkten anges med samma\nordning som flaggorna \'m\', \'f\' och \'e\'.\n\nExempel 1: arkivera två klassfiler i ett arkiv med namnet classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExempel 2: använd den befintliga manifestfilen \'mymanifest\' och arkivera alla\n           filer i katalogen \'foo/\' till \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"oväntad versionshanterad post, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Varning: posten {0} är en allmän klass\ni ett dolt paket. Om du placerar den här jar-filen på klassökvägen leder\ndet till inkompatibla allmänna gränssnitt"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Varning: posten {0} innehåller en klass som\när identisk med en post som redan finns i jar-filen"_s)
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