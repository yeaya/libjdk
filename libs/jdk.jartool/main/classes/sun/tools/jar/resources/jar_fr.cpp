#include <sun/tools/jar/resources/jar_fr.h>

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

$MethodInfo _jar_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_fr::*)()>(&jar_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_fr_MethodInfo_
};

$Object* allocate$jar_fr($Class* clazz) {
	return $of($alloc(jar_fr));
}

void jar_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"L\'indicateur c requiert la sp\u00e9cification d\'un fichier manifeste ou d\'un fichier d\'entr\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"L\'option \'-d, --describe-module\' ne requiert la sp\u00e9cification d\'aucun fichier d\'entr\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"L\'indicateur e et le fichier manifeste portant l\'attribut Main-Class ne peuvent pas \u00eatre sp\u00e9cifi\u00e9s \nensemble."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Erreur lors de l\'analyse des arguments de fichier"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"Une des options -{ctxuid} doit \u00eatre sp\u00e9cifi\u00e9e."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"raison incorrecte : {0}, la valeur doit \u00eatre deprecated, deprecated-for-removal ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"L\'indicateur u requiert la sp\u00e9cification d\'un fichier manifeste, d\'un fichier d\'entr\u00e9e ou d\'un indicateur e."_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of("impossible d\'\'ouvrir : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : impossible de cr\u00e9er le r\u00e9pertoire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"Impossible de cr\u00e9er un fichier temporaire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"Hachage des d\u00e9pendances du module {0}, module {1} introuvable sur le chemin de modules"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of("Option non admise : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of("longueur incorrecte lors du traitement de : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of("Attribut de descripteur de module non valide {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of("l\'\'option {0} exige un argument"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of("Fournisseur de services introuvable : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of("Descripteur de module introuvable"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of("Une des options --module-version ou --hash-modules sans module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of("Vous ne pouvez pas indiquer plus d\'une option \'-cuxtid\'"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"Aucun descripteur op\u00e9rationnel pour la version : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of("Aucun descripteur de module racine, indiquer --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : fichier ou r\u00e9pertoire introuvable"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"entr\u00e9e avec num\u00e9ro de version {0} inattendue pour la version {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of("version {0} non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"version {0} non valide : elle doit \u00eatre sup\u00e9rieure ou \u00e9gale \u00e0 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"Impossible de d\u00e9river le descripteur de module pour : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of("Descripteur de module {0} inattendu"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of("option non reconnue : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"nom d\'\'entr\u00e9e au format incorrect, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"l\'\'entr\u00e9e : {0} contient une classe avec une API diff\u00e9rente de la version ant\u00e9rieure"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"le nom d\'\'entr\u00e9e : {0} est trop court et n\'\'est pas un r\u00e9pertoire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"l\'\'entr\u00e9e : {0} a une version de classe non compatible avec une version ant\u00e9rieure"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"exports\" diff\u00e9rents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0} : module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"main-class\" diff\u00e9rents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient un nom incorrect"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"opens\" diff\u00e9rents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"provides\" diff\u00e9rents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"requires\" suppl\u00e9mentaires"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"requires\" manquants"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient un mot-cl\u00e9 \"requires transitive\" suppl\u00e9mentaire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0} : module-info.class dans un r\u00e9pertoire avec num\u00e9ro de version contient des mots-cl\u00e9s \"version\" diff\u00e9rents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"l\'\'entr\u00e9e : {0} est une classe isol\u00e9e imbriqu\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("Impossible de valider {0} : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"fichier JAR multiversion non valide {0} supprim\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"l\'\'entr\u00e9e : {0} contient une classe avec le nom interne {1}, les noms ne concordent pas"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"l\'\'entr\u00e9e : {0} contient une nouvelle classe publique introuvable dans les entr\u00e9es de base"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"le nom d\'\'entr\u00e9e : {0} n\'\'a pas de num\u00e9ro de version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"Erreur lors de l\'\u00e9criture d\'un fichier JAR existant"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" Modificateurs d\'op\u00e9ration valides pour tous les modes :\n\n  -C DIR                     Passe au r\u00e9pertoire sp\u00e9cifi\u00e9 et inclut le\n                             fichier suivant"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            Nom du fichier d\'archive. Lorsqu\'il est omis, stdin ou\n                             stdout est utilis\u00e9 en fonction de l\'op\u00e9ration\n      --release VERSION      Place tous les fichiers suivants dans un r\u00e9pertoire avec num\u00e9ro de version\n                             du fichier JAR (\u00e0 savoir META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              G\u00e9n\u00e8re une sortie en mode verbose d\'une sortie standard"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Modificateurs d\'op\u00e9ration valides uniquement en mode create :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normaliser des informations dans la nouvelle archive JAR\n                             apr\u00e8s la cr\u00e9ation"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Modificateurs d\'op\u00e9ration valides uniquement en modes create et update :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Exclure de l\'ensemble racine de modules par d\u00e9faut"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Calcule et enregistre les hachages des modules \n                             mis en correspondance d\'apr\u00e8s le mod\u00e8le donn\u00e9 et d\u00e9pendant\n                             directement ou indirectement d\'un fichier JAR modulaire\n                             en cours de cr\u00e9ation ou d\'un fichier JAR non modulaire en cours de mise \u00e0 jour"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Modificateurs d\'op\u00e9ration valides uniquement en modes create, update et generate-index :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of("  -0, --no-compress          Stocke uniquement ; n\'utilise pas de compression ZIP"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME Point d\'entr\u00e9e d\'une application en mode autonome\n                             int\u00e9gr\u00e9e \u00e0 une archive JAR modulaire\n                             ou ex\u00e9cutable"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Inclut les informations de manifeste du fichier\n                             manifeste donn\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Emplacement de la d\u00e9pendance de module pour la g\u00e9n\u00e9ration\n                             du hachage"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    Version de module lors de la cr\u00e9ation d\'un fichier JAR\n                             modulaire ou de la mise \u00e0 jour d\'un fichier JAR non modulaire"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          Ne cr\u00e9e pas de fichier manifeste pour les entr\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Indication en fonction de laquelle un outil \u00e9met un avertissement si le module\n                             est r\u00e9solu. La valeur doit \u00eatre deprecated, deprecated-for-removal,\n                             ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(" Mode d\'exploitation principal :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               Cr\u00e9e l\'archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of("  -d, --describe-module      afficher le descripteur de module ou le nom de module automatique"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              Extrait des fichiers nomm\u00e9s (ou tous les fichiers) de l\'archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  G\u00e9n\u00e8re des informations d\'index pour les archives JAR\n                             indiqu\u00e9es"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Affiche la table des mati\u00e8res de l\'archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               Met \u00e0 jour une archive JAR existante"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(" Autres options :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        Affiche l\'aide ou \u00e9ventuellement la compatibilit\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Affiche l\'aide sur les options suppl\u00e9mentaires"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of("      --version              Imprime la version de programme"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Une archive est un fichier JAR modulaire si un descripteur de module, \'module-info.class\', se\n trouve dans la racine des r\u00e9pertoires donn\u00e9s ou dans la racine de l\'archive JAR\n elle-m\u00eame. Les op\u00e9rations suivantes sont valides uniquement lors de la cr\u00e9ation d\'un fichier JAR modulaire\n ou de la mise \u00e0 jour d\'un fichier JAR non modulaire existant : \'--module-version\',\n \'--hash-modules\' et \'--module-path\'.\n\n Les arguments obligatoires ou facultatifs pour les options longues sont \u00e9galement obligatoires ou facultatifs\n pour toute option courte correspondante."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Syntaxe : jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar cr\u00e9e une archive pour les classes et les ressources, et peut manipuler ou\nrestaurer les classes ou ressources individuelles \u00e0 partir d\'une archive.\n\n Exemples :\n # Cr\u00e9ation d\'une archive nomm\u00e9e classes.jar compos\u00e9e de deux fichiers de classe :\n jar --create --file classes.jar Foo.class Bar.class\n # Cr\u00e9ation d\'une archive \u00e0 l\'aide d\'un manifeste existant, avec tous les fichiers dans foo/ :\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Cr\u00e9ation d\'une archive JAR modulaire, o\u00f9 le descripteur de module est situ\u00e9 dans\n # classes/module-info.class :\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Mise \u00e0 jour d\'un fichier JAR non modulaire existant vers un fichier JAR modulaire :\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Cr\u00e9e un fichier JAR multiversion en pla\u00e7ant certains fichiers dans le r\u00e9pert"
				"oire META-INF/versions/9 :\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nPour raccourcir ou simplifier la commande JAR, vous pouvez sp\u00e9cifier des arguments dans un\nfichier texte distinct et le transmettre \u00e0 la commande JAR avec le signe arobase (@) en tant que pr\u00e9fixe.\n\n Exemples :\n # Options de lecture suppl\u00e9mentaires et liste des fichiers de classe \u00e0 partir du fichier classes.list\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of("Syntaxe : jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of("Pour plus d\'informations, essayez \'jar --help\'."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"manifeste ajout\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"module-info ajout\u00e9 : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of("ajout : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"Descripteur de module introuvable. Module automatique d\u00e9riv\u00e9."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  cr\u00e9\u00e9 : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of("(compression : {0} %)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of("extrait : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"entr\u00e9e {0} ignor\u00e9e"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" d\u00e9compress\u00e9 : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(entr\u00e9e = {0}) (sortie = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(stockage : 0 %)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"manifeste mis \u00e0 jour"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"module-info mis \u00e0 jour : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"Interface de compatibilit\u00e9 :\nSyntaxe : jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\nOptions :\n    -c  cr\u00e9e une archive\n    -t  affiche la table des mati\u00e8res de l\'archive\n    -x  extrait des fichiers nomm\u00e9s (ou tous les fichiers) de l\'archive\n    -u  met \u00e0 jour l\'archive existante\n    -v  g\u00e9n\u00e8re une sortie en mode verbose d\'une sortie standard\n    -f  sp\u00e9cifie le nom de fichier d\'archive\n    -m  inclut les informations de manifeste \u00e0 partir du fichier manifeste sp\u00e9cifi\u00e9\n    -n  effectue une normalisation Pack200 apr\u00e8s la cr\u00e9ation d\'une archive\n    -e  sp\u00e9cifie le point d\'entr\u00e9e d\'une application en mode autonome \n        int\u00e9gr\u00e9e \u00e0 un fichier JAR ex\u00e9cutable\n    -0  stockage uniquement, pas de compression ZIP\n    -P  pr\u00e9serve les signes de d\u00e9but \'/\' (chemin absolu) et \"..\" (r\u00e9pertoire parent) dans les noms de fichier\n    -M  ne cr\u00e9e pas de fichier manifeste pour les entr\u00e9es\n    -i  g\u00e9n\u00e8re les informations d\'index des fichiers JAR sp\u00e9cifi\u00e9s\n    -C  passe au r\u00e9pertoire sp\u00e9cifi"
				"\u00e9 et inclut le fichier suivant\nSi l\'un des fichiers est un r\u00e9pertoire, celui-ci est trait\u00e9 r\u00e9cursivement.\nLes noms du fichier manifeste, du fichier d\'archive et du point d\'entr\u00e9e sont\nsp\u00e9cifi\u00e9s dans le m\u00eame ordre que celui des indicateurs m, f et e.\n\nExemple 1 : pour archiver deux fichiers de classe dans une archive intitul\u00e9e classes.jar : \n       jar cvf classes.jar Foo.class Bar.class \nExemple 2 : pour utiliser un fichier manifeste existant \'mymanifest\', puis archiver tous les\n           fichiers du r\u00e9pertoire foo/ dans \'classes.jar\' : \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"entr\u00e9e avec num\u00e9ro de version {0} inattendue"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Avertissement : l\'\'entr\u00e9e {0} est une classe publique\ndans un package dissimul\u00e9, le placement de ce fichier JAR sur le\nchemin de classe g\u00e9n\u00e9rera des interfaces publiques incompatibles"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Avertissement : l\'\'entr\u00e9e {0} contient une classe\nidentique \u00e0 une entr\u00e9e qui se trouve d\u00e9j\u00e0 dans le fichier JAR"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"Avertissement : entr\u00e9e {0}, plusieurs ressources du m\u00eame nom"_s)
		})
	});
}

jar_fr::jar_fr() {
}

$Class* jar_fr::load$($String* name, bool initialize) {
	$loadClass(jar_fr, name, initialize, &_jar_fr_ClassInfo_, allocate$jar_fr);
	return class$;
}

$Class* jar_fr::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun