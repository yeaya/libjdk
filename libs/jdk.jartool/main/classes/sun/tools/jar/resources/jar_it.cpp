#include <sun/tools/jar/resources/jar_it.h>
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

void jar_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			u"Per il flag \'c\' è necessario specificare file manifest o di input."_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			u"Per l\'opzione \'-d, --describe-module\' non è necessario specificare alcun file di input"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			"Il flag \'e\' e il manifest con l\'attributo \'Main-Class\' non possono essere specificati\ninsieme."_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			"Errore durante l\'analisi degli argomenti del file"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			u"È necessario specificare una delle opzioni -{ctxuid}."_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			"Motivo non valido: {0}. Deve essere deprecated, deprecated-for-removal o incubating"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			u"Per il flag \'u\' è necessario specificare il flag \'e\' oppure file manifest o di input."_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			"impossibile aprire: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			"{0} : impossibile creare la directory"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			"Impossibile creare il file temporaneo."_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			"{0} dipendenze del modulo di hashing. Impossibile trovare il modulo {1} nel percorso del modulo"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			"Opzione non valida: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			"lunghezza non valida durante l\'\'elaborazione: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			"Attributo descrittore del modulo {0} non valido."_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			"l\'\'opzione {0} richiede un argomento"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			"Provider di servizi non trovato: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			"Descrittore di modulo non trovato"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			"Una delle opzioni --module-version o --hash-modules non contiene module-info.class"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			u"Impossibile specificare più di un\'opzione \'-cuxtid\'"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			"Nessun descrittore operativo per la release: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			"Nessun descrittore di modulo radice, specificare --release"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			"{0} : file o directory inesistente"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			"voce con controllo delle versioni non prevista {0} per la release {1}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			"release {0} non valida"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			u"la release {0} non è valida: deve essere >= 9"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			"Impossibile derivare il descrittore di modulo per: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			"Descrittore di modulo {0} imprevisto"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			"opzione non riconosciuta: {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			"nome di voce {0} con formato non valido"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			"la voce {0} contiene una classe con un\'\'API diversa dalla versione precedente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			u"nome di voce {0} troppo breve. Non è una directory"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			"la voce {0} ha una versione incompatibile con una versione precedente"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			"module-info.class in una directory con controllo delle versioni contiene \"exports\" differenti"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			"{0}: module-info.class in una directory con controllo delle versioni contiene valori \"main-class\" differenti"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			"module-info.class in una directory con controllo delle versioni contiene un nome errato"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			"module-info.class in una directory con controllo delle versioni contiene valori \"opens\" differenti"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			"module-info.class in una directory con controllo delle versioni contiene valori \"provides\" differenti"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			"module-info.class in una directory con controllo delle versioni contiene valori \"requires\" aggiuntivi"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			"module-info.class in una directory con controllo delle versioni contiene valori \"requires\" mancanti"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			"module-info.class in una directory con controllo delle versioni contiene valori \"requires transitive\" aggiuntivi"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			"{0}: module-info.class in una directory con controllo delle versioni contiene valori \"version\" differenti"_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			u"la voce {0} è una classe nidificata isolata"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			"impossibile convalidare {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			u"file jar {0} con più release non valido eliminato"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			"la voce {0} contiene una classe con nome interno {1}. I nomi non corrispondono"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			"la voce {0} contiene una nuova classe pubblica non trovata nelle voci di base"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			"il nome di voce {0} non dispone di un numero di versione"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			"Errore durante la scrittura del file jar esistente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			u" Modificatori di funzionamento validi in qualsiasi modalità:\n\n  -C DIR                     Passa alla directory specificata e include il\n                              file seguente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			"  -f, --file=FILE            Il nome file dell\'archivio. Se omesso, viene usato stdin o\n                             stdout in base all\'operazione\n      --release VERSION      Posiziona tutti i file successivi in una directory con controllo delle versioni\n                             del file jar (ad esempio, META-INF/versions/VERSION/)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			"  -v, --verbose              Genera l\'output descrittivo nell\'output standard"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			u" Modificatori di funzionamento validi solo nella modalità di creazione:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			"  -n, --normalize            Normalizza le informazioni nel nuovo archivio jar\n                             dopo la creazione"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			u" Modificatori di funzionamento validi solo nella modalità di creazione e aggiornamento:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			"      --do-not-resolve-by-default  Esclude dal set radice predefinito dei moduli"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			"      --hash-modules=PATTERN Calcola e registra gli hash dei moduli \n                             corrispondenti in base al pattern specificato e dipendenti\n                             in modo diretto o indiretto dalla creazione di un file jar modulare\n                             o dall\'aggiornamento di un file jar non modulare"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			u" Modificatori di funzionamento validi solo nella modalità di creazione, aggiornamento e di generazione dell\'indice:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			"  -0, --no-compress          Solo per la memorizzazione. Non utilizza alcuna compressione ZIP"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			"  -e, --main-class=CLASSNAME Punto di ingresso per le applicazioni\n                             stand-alone incluse nell\'archivio jar modulare o\n                             eseguibile"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			"  -m, --manifest=FILE        Include le informazioni sul file manifest dal file\n                             manifest specificato"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			"  -p, --module-path          Posizione della dipendenza del modulo per la generazione\n                             dell\'hash"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			"      --module-version=VERSION    Versione del modulo utilizzata durante la creazione di un file\n                             jar modulare o l\'aggiornamento di un file jar non modulare"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			"  -M, --no-manifest          Non crea un file manifest per le voci"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			u"      --warn-if-resolved     Suggerimento per uno strumento per l\'emissione di un\'avvertenza se il modulo\n                             viene risolto. Può essere deprecated, deprecated-for-removal\n                             o incubating"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			u" Modalità di funzionamento principale:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			"  -c, --create               Crea l\'archivio"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			"  -d, --describe-module      Visualizza il descrittore di modulo o il nome modulo automatico"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			"  -x, --extract              Estrae i file con nome (o tutti i file) dall\'archivio"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			"  -i, --generate-index=FILE  Genera le informazioni sull\'indice per gli archivi\n                             jar specificati"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			"  -t, --list                 Visualizza l\'indice dell\'archivio"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			"  -u, --update               Aggiorna un archivio jar esistente"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			" Altre opzioni:\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			u"  -h, --help[:compat]        Fornisce questa Guida o facoltativamente la Guida sulla compatibilità"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			"      --help-extra           Fornisce la Guida per le opzioni non standard"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			"      --version              Stampa la versione del programma"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			u" Un archivio è un file jar modulare se un descrittore di modulo, \'module-info.class\', si trova\n nella directory radice delle directory specificate o nella radice dell\'archivio jar\n stesso. Le operazioni seguenti sono valide solo durante la creazione di un file jar modulare\n o l\'aggiornamento di un file jar non modulare esistente: \'--module-version\',\n \'--hash-modules\' e \'--module-path\'.\n\n Gli argomenti obbligatori o facoltativi per le opzioni lunghe sono obbligatori\n  o facoltativi anche per le opzioni brevi corrispondenti."_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			u"Uso: jar [OPTION...] [ [--release VERSION] [-C dir] file] ...\nIl file jar crea un archivio per le classi e le risorse e può manipolare o\nripristinare le singole classi o risorse da un archivio.\n\n Esempi:\n # Crea un archivio denominato classes.jar con due file di classe:\n jar --create --file classes.jar Foo.class Bar.class\n # Crea un archivio mediante un file manifest esistente, con tutti i file in foo/:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Crea un archivio jar modulare, in cui il descrittore di modulo si trova in\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Aggiorna un file jar non modulare esistente in un file jar modulare:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Crea un file jar per più release, posizionando alcuni file nella directory META-INF/versions/9:\n jar --create --file mr.jar -C foo classes --release 9 -C f"
				"oo9 classes\n\nPer abbreviare o semplificare il comando jar, è possibile specificare gli argomenti in un file\ndi testo distinto e passarlo al comando jar con il segno @ come prefisso.\n\n Esempi:\n # Legge le opzioni aggiuntive e la lista di file di classe dal file classes.list\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			"Uso: jar [OPTION...] [ [--release VERSION] [-C dir] file] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			"Utilizzare \'jar --help\' per ulteriori informazioni."_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			"aggiunto manifest"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			"aggiunto module-info: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			"aggiunta in corso di: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			"Nessun descrittore di modulo trovato. Derivato modulo automatico."_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			"     creato: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			"(compresso {0}%)"_s
		}),
		$$new($ObjectArray, {
			"out.extracted"_s,
			"estratto: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.ignore.entry"_s,
			u"la voce {0} sarà ignorata"_s
		}),
		$$new($ObjectArray, {
			"out.inflated"_s,
			" decompresso: {0}"_s
		}),
		$$new($ObjectArray, {
			"out.size"_s,
			"(in = {0}) (out = {1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			"(memorizzato 0%)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			"aggiornato manifest"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			"aggiornato module-info: {0}"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			u"Interfaccia di compatibilità:\nUso: jar {ctxui}[vfmn0PMe] [file-jar] [file-manifest] [punto di ingresso] [-C dir] file] ...\nOpzioni:\n    -c  crea un nuovo archivio\n    -t  visualizza l\'indice dell\'archivio\n    -x  estrae i file con nome (o tutti i file) dall\'archivio\n    -u  aggiorna l\'archivio esistente\n    -v  genera output commentato dall\'output standard\n    -f  specifica il nome file dell\'archivio\n    -m  include informazioni manifest dal file manifest specificato\n    -n  esegue la normalizzazione Pack200 dopo la creazione di un nuovo archivio\n    -e  specifica il punto di ingresso per l\'applicazione stand-alone \n        inclusa nel file jar eseguibile\n    -0  solo memorizzazione; senza compressione ZIP\n    -P  conserva i componenti iniziali \'/\' (percorso assoluto) e \\\"..\\\" (directory padre) dai nomi file\n    -M  consente di non creare un file manifest per le voci\n    -i  genera informazioni sull\'indice per i file jar specificati\n    -C  imposta la directory specificata e include il file seguente\nSe un fil"
				"e è una directory, verrà elaborato in modo ricorsivo.\nIl nome del file manifest, del file di archivio e del punto di ingresso devono\nessere specificati nello stesso ordine dei flag \'m\', \'f\' ed \'e\'.\n\nEsempio 1: archiviazione di due file di classe in un archivio con il nome classes.jar: \n       jar cvf classes.jar Foo.class Bar.class \nEsempio 2: utilizzo del file manifest esistente \'mymanifest\' e archiviazione di tutti i\n           file della directory foo/ in \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			"voce con controllo delle versioni non prevista {0}"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			u"Avvertenza: la voce {0} è una classe pubblica\nin un package nascosto. Il posizionamento di questo file jar nel classpath\ngenererà interfacce pubbliche incompatibili"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			u"Avvertenza: la voce {0} contiene una classe\nidentica a una voce già presente nel file jar"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			u"Avvertenza: voce {0}. Più risorse con lo stesso nome"_s
		})
	});
}

jar_it::jar_it() {
}

$Class* jar_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar_it);
	});
	return class$;
}

$Class* jar_it::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun