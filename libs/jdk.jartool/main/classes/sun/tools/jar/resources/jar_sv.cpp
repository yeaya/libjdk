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

void jar_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			u"för c-flaggan måste manifest- eller indatafiler anges."_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			u"alternativet \'-d, --describe-module\' kräver att ingen indatafil anges"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			"e-flaggan och manifest med attributet Main-Class kan inte anges \ntillsammans."_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			"Fel vid tolkning av filargument"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			u"Ett av alternativen -{ctxuid} måste anges."_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			u"ogiltig orsak: {0} måste vara deprecated, deprecated-for-removal eller incubating"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			u"för u-flaggan måste manifest-, e-flagg- eller indatafiler anges."_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			u"kan inte öppna: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			u"{0} : kunde inte skapa någon katalog"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			u"Kunde inte skapa en tillfällig fil"_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			u"{0}-beroenden för hashningsmodulen, kan inte hitta modulen {1} på modulsökvägen"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			u"Otillåtet alternativ: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			u"ogiltig längd vid bearbetning: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			u"Ogiltigt attribut för moduldeskriptor, {0}"_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			u"alternativet {0} kräver ett argument"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			u"Tjänsteleverantören hittades inte: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			"Moduldeskriptorn hittades inte"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			"--module-version eller --hash-modules utan module-info.class"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			"Du kan inte ange flera alternativ av typen \'-cuxtid\'"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			u"Ingen operativ deskriptor för utgåvan: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			"Ingen rotmoduldeskriptor, ange --release"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			u"{0} : det finns ingen sådan fil eller katalog"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			u"oväntad versionshanterad post, {0}, för utgåvan {1}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			u"utgåva {0} är inte giltig"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			u"utgåva {0} är inte giltig, måste vara >= 9"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			u"Kan inte härleda moduldeskriptor för: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			u"Oväntad moduldeskriptor, {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			u"okänt alternativ: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			u"postnamnet {0} är felaktigt utformat"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			u"posten {0} innehåller en klass med ett annat api från en tidigare version"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			u"postnamnet {0} är för kort, inte en katalog"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			u"posten {0} har en klassversion som är inkompatibel med en tidigare version"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			u"module-info.class i en versionshanterad katalog innehåller olika \"exports\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			u"{0}: module-info.class i en versionshanterad katalog innehåller olika \"main-class\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			u"module-info.class i en versionshanterad katalog innehåller ett felaktigt namn"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			u"module-info.class i en versionshanterad katalog innehåller olika \"opens\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			u"module-info.class i en versionshanterad katalog innehåller olika \"provides\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			u"module-info.class i en versionshanterad katalog innehåller fler \"requires\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			u"module-info.class i en versionshanterad katalog innehåller saknade \"requires\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			u"module-info.class i en versionshanterad katalog innehåller fler \"requires transitive\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			u"{0}: module-info.class i en versionshanterad katalog innehåller olika \"version\""_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			u"posten {0} är en isolerad kapslad klass"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			"kan inte validera {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			u"ogiltig jar-fil för flera utgåvor, {0}, har tagits bort"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			u"posten {0} innehåller en klass med det interna namnet {1}, namnen matchar inte"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			u"posten {0} innehåller en ny allmän klass som inte kan hittas i basposterna"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			"postnamnet {0} har inget versionsnummer"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			u"Ett fel inträffade vid skrivning till befintlig jar-fil."_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			u" Åtgärdsmodifierare som är giltiga i alla lägen:\n\n  -C DIR                     Ändra till den angivna katalogen och inkludera\n                             följande fil"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			u"  -f, --file=FILE            Namnet på arkivfilen. När det utelämnas används stdin eller\n                             stdout beroende på åtgärden\n      --release VERSION      Placerar alla följande filer i en versionshanterad katalog\n                             i jar-filen (t.ex. META-INF/versions/VERSION/)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			u"  -v, --verbose              Generera utförliga utdata till standardutdata"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			u" Åtgärdsmodifierare som endast är giltiga i läget create:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			u"  -n, --normalize            Normalisera informationen i det nya jar-arkivet\n                             när det har skapats"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			u" Åtgärdsmodifierare som endast är giltiga i lägena create och update:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			u"      --do-not-resolve-by-default  Exkludera från standardrotuppsättningen med moduler"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			u"      --hash-modules=PATTERN Beräkna och registrera hashningarna för moduler som\n                             matchar det angivna mönstret och som är direkt eller\n                             indirekt beroende av att ett modulärt jar-arkiv skapas\n                             eller att ett icke-modulärt jar-arkiv uppdateras"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			u" Åtgärdsmodifierare som endast är giltiga i lägena create, update och generate-index:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			u"  -0, --no-compress          Endast lagring, använd ingen ZIP-komprimering"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			u"  -e, --main-class=CLASSNAME Applikationsingångspunkten för fristående\n                             applikationer paketerad i ett modulärt, eller körbart,\n                             jar-arkiv"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			u"  -m, --manifest=FILE        Inkludera manifestinformationen från den angivna\n                             manifestfilen"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			u"  -p, --module-path          Plats för modulberoende för att generera\n                             hashningen"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			u"      --module-version=VERSION    Modulversionen vid skapande av ett modulärt\n                             jar-arkiv eller vid uppdatering av ett icke-modulärt jar-arkiv"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			u"  -M, --no-manifest          Skapa inte en manifestfil för posterna"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			u"      --warn-if-resolved     Tips för ett verktyg för att utfärda en varning om modulen\n                             har lösts. deprecated, deprecated-for-removal,\n                             eller incubating"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			u" Huvudfunktionsläge:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			"  -c, --create               Skapa arkivet"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			"  -d, --describe-module      Skriv ut moduldeskriptorn eller det automatiska modulnamnet"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			u"  -x, --extract              Extrahera namngivna (eller alla) filer från arkivet"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			u"  -i, --generate-index=FILE  Generera indexinformation för de angivna jar-\n                             arkiven"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			u"  -t, --list                 Listar innehållsförteckningen för arkivet"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			"  -u, --update               Uppdatera ett befintligt jar-arkiv"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			u" Övriga alternativ:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			u"  -h, --help[:compat]        Visa den här hjälpen eller kompatibilitetshjälpen (valfritt)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			u"      --help-extra           Visa hjälp för extra alternativ"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			"      --version              Skriv ut programversion"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			u" Ett arkiv är ett modulärt jar-arkiv om en moduldeskriptor, \'module-info.class\',\n finns i roten av de angivna katalogerna eller det angivna jar-arkivet.\n Följande åtgärder är endast giltiga vid skapande av ett modulärt jar-arkiv och\n vid uppdatering av ett befintligt icke-modulärt jar-arkiv: \'--module-version\',\n \'--hash-modules\' och \'--module-path\'.\n\n Obligatoriska och valfria alternativ för långa alternativ är även obligatoriska\n respektive valfria för alla motsvarande korta alternativ."_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			u"Syntax: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar skapar ett arkiv för klasser och resurser, och kan ändra och återställa\nenskilda klasser och resurser från ett arkiv.\n\n Exempel:\n # Skapa ett arkiv med namnet classes.jar med två klassfiler:\n jar --create --file classes.jar Foo.class Bar.class\n # Skapa ett arkiv med ett befintligt manifest med alla filerna i \'foo/\':\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Skapa ett modulärt jar-arkiv, där moduldeskriptorn finns i\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Uppdatera ett befintligt icke-modulärt jar-arkiv till ett modulärt jar-arkiv:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Skapa ett jar-arkiv för flera utgåvor och placera vissa av filerna i katalogen \'META-INF/versions/9\':\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nOm du v"
				"ill förkorta eller förenkla kommandot jar kan du ange argument i en separat\ntextfil och överföra den med tecknet \'@\' som prefix.\n\n Exempel:\n # Läs ytterligare alternativ och en lista över klassfiler från filen \'classes.list\'\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			"Syntax: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			u"Försök med \'jar --help\' för mer information."_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			"tillagt manifestfil"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			"lade till module-info: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			u"lägger till: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			u"Ingen moduldeskriptor hittades. Härledd automatisk modul."_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			"  skapad: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			"({0}% packat)"_s
		}),
		$$new($ObjectArray, {
			"out.extracted"_s,
			"extraherat: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.ignore.entry"_s,
			"ignorerar posten {0}"_s
		}),
		$$new($ObjectArray, {
			"out.inflated"_s,
			" uppackat: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.size"_s,
			"(in = {0}) (ut = {1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			"(0% lagrat)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			"uppdaterat manifest"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			"uppdaterade module-info: {0}"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			u"Kompatibilitetsgränssnitt:\nSyntax: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\nAlternativ:\n    -c  skapa nytt arkiv\n    -t  lista innehållsförteckning för arkiv\n    -x  extrahera namngivna (eller alla) filer från arkivet\n    -u  uppdatera befintligt arkiv\n    -v  generera utförliga utdata till standardutdata\n    -f  ange namnet på arkivfilen\n    -m  inkludera manifestinformation från den angivna manifestfilen\n    -n  utför Pack200-normalisering när ett nytt arkiv har skapats\n    -e  ange applikationsingångspunkt för fristående applikation \n        som medföljer i en jar-programfil\n    -0  lagra endast, använd inte ZIP-komprimering\n    -P  behåll komponenter för inledande \'/\' (absolut sökväg) och \"..\" (överordnad  katalog) från filnamn\n    -M  skapa inte en manifestfil för posterna\n    -i  generera indexinformation för de angivna jar-filerna\n    -C  ändra till den angivna katalogen och inkludera följande fil\nOm en fil är en katalog bearbetas den rekursivt.\nNamnen på manife"
				"stfilen, arkivfilen och ingångspunkten anges med samma\nordning som flaggorna \'m\', \'f\' och \'e\'.\n\nExempel 1: arkivera två klassfiler i ett arkiv med namnet classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nExempel 2: använd den befintliga manifestfilen \'mymanifest\' och arkivera alla\n           filer i katalogen \'foo/\' till \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			u"oväntad versionshanterad post, {0}"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			u"Varning: posten {0} är en allmän klass\ni ett dolt paket. Om du placerar den här jar-filen på klassökvägen leder\ndet till inkompatibla allmänna gränssnitt"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			u"Varning: posten {0} innehåller en klass som\när identisk med en post som redan finns i jar-filen"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			"Varning: posten {0}, flera resurser med samma namn"_s
		})
	});
}

jar_sv::jar_sv() {
}

$Class* jar_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar_sv);
	});
	return class$;
}

$Class* jar_sv::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun