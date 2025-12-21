#include <sun/tools/jar/resources/jar_de.h>

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

$MethodInfo _jar_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_de::*)()>(&jar_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_de_MethodInfo_
};

$Object* allocate$jar_de($Class* clazz) {
	return $of($alloc(jar_de));
}

void jar_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of("Kennzeichen \"c\" erfordert Angabe von Manifest oder Eingabedateien."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"Für die Option \"-d, --describe-module\" müssen keine Eingabedateien angegeben werden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"Kennzeichen \"e\" und Manifest mit dem Attribut \"Main-Class\" können nicht zusammen angegeben\nwerden."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Fehler beim Parsen der Dateiargumente"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of("Eine der Optionen -{ctxuid} muss angegeben werden."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of("Schlechter Grund: {0}, Grund muss entweder \"deprecated\", \"deprecated-for-removal\" oder \"incubating\" sein"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of("Kennzeichen \"u\" erfordert Angabe von Manifest, Kennzeichen \"e\" oder Eingabedateien."_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"Öffnen nicht möglich: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of("{0}: Verzeichnis konnte nicht erstellt werden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"Es konnte keine temporäre Datei erstellt werden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"Abhängigkeiten bei Hashing-Modul {0}. Modul {1} kann nicht im Modulpfad gefunden werden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"Ungültige Option: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"Falsche Länge bei der Verarbeitung: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"Ungültiges Moduldeskriptorattribut {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"Für die Option {0} ist ein Argument erforderlich"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of("Serviceprovider nicht gefunden: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of("Moduldeskriptor nicht gefunden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of("--module-version oder --hash-modules ohne module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"Es ist nicht möglich, mehrere \"-cuxtid\"-Optionen anzugeben"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"Kein operativer Deskriptor für Release: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of("Kein Root-Moduldeskriptor. Geben Sie \"--release\" an"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of("{0}: Datei oder Verzeichnis nicht vorhanden"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"Unerwarteter versionierte Eintrag {0} für Release {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"Release {0} nicht gültig"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"Release {0} nicht gültig, muss >= 9 sein"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"Moduldeskriptor kann nicht abgeleitet werden für: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of("Unerwarteter Moduldeskriptor {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of("Unbekannte Option: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of("Eintragsname hat das falsche Format, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"Eintrag {0} enthält eine Klasse mit einer anderen API als in der früheren Version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of("Eintragsname {0} zu kurz, kein Verzeichnis"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"Eintrag {0} weist eine Klassenversion auf, die mit einer früheren Version inkompatibel ist"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält unterschiedliche \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: module-info.class in einem versionierten Verzeichnis enthält unterschiedlichen \"main-class\"-Wert"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält falschen Namen"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält unterschiedliche \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält unterschiedliche \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält zusätzlichen \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält fehlenden \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class in einem versionierten Verzeichnis enthält zusätzlichen \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: module-info.class in einem versionierten Verzeichnis enthält unterschiedlichen \"version\"-Wert"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of("Eintrag {0} ist eine isolierte verschachtelte Klasse"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("{0} kann nicht validiert werden: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"ungültige Multi-Release-JAR-Datei {0} gelöscht"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"Eintrag {0} enthält eine Klasse mit dem internen Namen {1}, Namen stimmen nicht überein"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"Eintrag {0} enthält eine neue öffentliche Klasse, die in Basiseinträgen nicht gefunden wird"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of("Eintragsname {0} hat keine Versionsnummer"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of("Fehler beim Schreiben in vorhandener JAR-Datei"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" In jedem Modus gültige Vorgangsmodifikatoren:\n\n  -C DIR                     Zum angegebenen Verzeichnis wechseln und die folgende\n                             Datei aufnehmen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of("  -f, --file=FILE            Der Name der Archivdatei. Wenn Sie dies lauslassen, wird entweder stdin oder\n                             stdout verwendet, je nach Vorgang\n      --release VERSION      Speichert alle der folgenden Dateien in einem versionierten Verzeichnis\n                             der JAR-Datei (d.h. META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of("  -v, --verbose              Verbose-Ausgabe bei Standardausgabe generieren"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Vorgangsmodifikatoren, die nur im Erstellungsmodus gültig sind:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of("  -n, --normalize            Normalisiert Informationen im neuen JAR-Archiv\n                             nach der Erstellung"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Vorgangsmodifikatoren, die nur im Erstellungs- und Aktualisierungsmodus gültig sind:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of("      --do-not-resolve-by-default  Wird aus der Standard-Root-Gruppe von Modulen ausgeschlossen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Berechnet und zeichnet die Hashes von Modulen auf, \n                             die mit einem bestimmten Muster übereinstimmen, und direkt oder\n                             indirekt von einem modularen JAR-Archiv abhängen, das erstellt\n                             wird, oder einem nicht-modularen JAR-Archiv, das aktualisiert wird"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Vorgangsmodifikatoren, die nur im Erstellungs-, Aktualisierungs- und Indexgenerierungsmodus gültig sind:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of("  -0, --no-compress          Nur speichern, keine ZIP-Komprimierung verwenden"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME Der Anwendungseinstiegspunkt für Standalone-\n                             Anwendungen, die in einem modularen oder ausführbaren\n                             JAR-Archiv gebündelt sind"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of("  -m, --manifest=FILE        Die Manifestinformationen aus der angegebenen\n                             Manifestdatei aufnehmen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path         Speicherort von Modulabhängigkeit zur Generierung\n                             von Hash"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of("      --module-version=VERSION    Die Modulversion beim Erstellen eines modularen\n                             JAR-Archivs oder Aktualisieren eines nicht modularen JAR-Archivs"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          Keine Manifestdatei für die Einträge erstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Hinweis für ein Tool, eine Warnung auszugeben,\n                             wenn das Modul aufgelöst wird, entweder \"deprecated\", \"deprecated-for-removal\"\n                             oder \"incubating\""_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(" Hauptvorgangsmodus:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of("  -c, --create               Archiv erstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of("  -d, --describe-module      Gibt den Moduldeskriptor oder automatischen Modulnamen aus"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of("  -x, --extract              Benannte (oder alle) Dateien aus dem Archiv extrahieren"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Indexinformationen für die angegebenen JAR-\n                             Archive generieren"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Das Inhaltsverzeichnis für das Archiv auflisten"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of("  -u, --update               Ein vorhandenes JAR-Archiv aktualisieren"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(" Weitere Optionen:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        Gibt diese Meldung oder optional die Kompatibilität, Hilfe an"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Hilfe zu zusätzlichen Optionen"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of("      --version              Programmversion ausgeben"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Ein Archiv ist ein modulares JAR-Archiv, wenn der Moduldeskriptor \"module-info.class\"\n in der Root der angegebenen Verzeichnisse oder in der Root des JAR-Archivs selbst\n vorhanden ist. Die folgenden Vorgänge sind nur gültig, wenn Sie ein modulares JAR-Archiv\n erstellen oder ein vorhandenes nicht modulares JAR-Archiv aktualisieren: \"--module-version\",\n \"--hash-modules\" und \"--modulepath\".\n\n Obligatorische oder optionale Argumente zu langen Optionen sind auch für die jeweils\n zugehörigen kurzen Optionen obligatorisch oder optional."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Verwendung: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar erstellt ein Archiv für Klassen und Ressourcen und kann individuelle\nKlassen oder Ressourcen aus einem Archiv bearbeiten oder wiederherstellen.\n\n Beispiele:\n # Ein Archiv namens classes.jar mit zwei Klassendateien erstellen:\n jar --create --file classes.jar Foo.class Bar.class\n # Ein Archiv mit einem vorhandenen Manifest mit allen Dateien in foo/ erstellen:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Ein modulares JAR-Archiv erstellen, dessen Moduldeskriptor sich in\n # classes/module-info.class befindet:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Ein vorhandenes nicht modulares JAR-Archiv in ein modulares JAR-Archiv aktualisieren:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Multi-Release-JAR-Datei erstellen, wobei einige Dateien im Verzeichnis META-INF/versions/9 gespeichert werden:"
				"\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nUm den \"jar\"-Befehl zu kürzen oder zu vereinfachen, können Sie Argumente in einer separaten\nTextdatei angeben und diese mit dem @-Zeichen als Präfix an den \"jar\"-Befehl übergeben.\n\n Beispiele:\n # Zusätzliche Optionen und Liste der Klassendateien aus der Datei classes.list lesen\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Verwendung: jar [OPTION...] [ [--release VERSION] [-C dir] Dateien] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of("Verwenden Sie \"jar --help\", um weitere Informationen anzuzeigen."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"Manifest wurde hinzugefügt"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"module-info hinzugefügt: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"{0} wird hinzugefügt"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of("Kein Moduldeskriptor gefunden. Automatisches Modul wurde abgeleitet."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of("  erstellt: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of("({0} % verkleinert)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of("extrahiert: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of("Eintrag {0} wird ignoriert"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" vergrößert: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of("(ein = {0}) (aus = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(0 % gespeichert)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of("Manifest wurde aktualisiert"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of("module-info aktualisiert: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"Kompatibilitätsschnittstelle:\nVerwendung:  jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] Dateien] ...\nOptionen:\n    -c  Neues Archiv erstellen\n    -t  Inhaltsverzeichnis für Archiv anzeigen\n    -x  Benannte (oder alle) Dateien aus Archiv extrahieren\n    -u  Vorhandenes Archiv aktualisieren\n    -v  Ausgabe im Verbose-Modus aus Standardausgabe generieren\n    -f  Dateinamen für Archiv angeben\n    -m  Manifestinformationen aus angegebener Manifestdatei aufnehmen\n    -n  Pack200-Normalisierung nach Erstellung eines neuen Archivs ausführen\n    -e  Anwendungseinstiegspunkt für in ausführbare JAR-Datei \n        gebündelte Standalone-Anwendung angeben\n    -0  Nur speichern; keine ZIP-Komprimierung verwenden\n    -P  Komponenten mit vorangestelltem \"/\" (absoluter Pfad) und \"..\" (übergeordnetes Verzeichnis) aus Dateinamen beibehalten\n        -M  Keine Manifestdatei für die Einträge erstellen\n    -i  Indexinformationen für die angegebenen JAR-Dateien erstellen\n    -C  Zum angegebenen Verzeichnis "
				"wechseln und folgende Datei berücksichtigen\nDateien, die Verzeichnisse sind, werden rekursiv verarbeitet.\nDer Name der Manifestdatei, der Name der Archivdatei und der Name des Einstiegspunktes werden\nin derselben Reihenfolge wie die Kennzeichen \"m\", \"f\" und \"e\" angegeben.\n\nBeispiel 1: Zwei Klassendateien in ein Archiv \"classes.jar\" archivieren: \n       jar cvf classes.jar Foo.class Bar.class \nBeispiel 2: Mit der vorhandenen Manifestdatei \"mymanifest\" alle\n           Dateien im Verzeichnis foo/ in \"classes.jar\" archivieren: \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of("Unerwarteter versionierter Eintrag {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Warnung: Eintrag {0} ist eine öffentliche Klasse\nin einem verdeckten Package. Wenn Sie diese JAR-Datei in den Classpath einfügen, kommt es\nzu nicht kompatiblen öffentlichen Schnittstellen"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Warnung: Eintrag {0} enthält eine Klasse, die mit\neinem bereits in der JAR-Datei enthaltenen Eintrag identisch ist"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of("Warnung: Eintrag {0}, mehrere Ressourcen mit demselben Namen"_s)
		})
	});
}

jar_de::jar_de() {
}

$Class* jar_de::load$($String* name, bool initialize) {
	$loadClass(jar_de, name, initialize, &_jar_de_ClassInfo_, allocate$jar_de);
	return class$;
}

$Class* jar_de::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun