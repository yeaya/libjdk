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
			$of(u"L\'indicateur c requiert la spécification d\'un fichier manifeste ou d\'un fichier d\'entrée."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"L\'option \'-d, --describe-module\' ne requiert la spécification d\'aucun fichier d\'entrée"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"L\'indicateur e et le fichier manifeste portant l\'attribut Main-Class ne peuvent pas être spécifiés \nensemble."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of("Erreur lors de l\'analyse des arguments de fichier"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"Une des options -{ctxuid} doit être spécifiée."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"raison incorrecte : {0}, la valeur doit être deprecated, deprecated-for-removal ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"L\'indicateur u requiert la spécification d\'un fichier manifeste, d\'un fichier d\'entrée ou d\'un indicateur e."_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of("impossible d\'\'ouvrir : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : impossible de créer le répertoire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"Impossible de créer un fichier temporaire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"Hachage des dépendances du module {0}, module {1} introuvable sur le chemin de modules"_s)
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
			$of(u"Aucun descripteur opérationnel pour la version : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of("Aucun descripteur de module racine, indiquer --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : fichier ou répertoire introuvable"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"entrée avec numéro de version {0} inattendue pour la version {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of("version {0} non valide"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"version {0} non valide : elle doit être supérieure ou égale à 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"Impossible de dériver le descripteur de module pour : {0}"_s)
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
			$of(u"nom d\'\'entrée au format incorrect, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"l\'\'entrée : {0} contient une classe avec une API différente de la version antérieure"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"le nom d\'\'entrée : {0} est trop court et n\'\'est pas un répertoire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"l\'\'entrée : {0} a une version de classe non compatible avec une version antérieure"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"exports\" différents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0} : module-info.class dans un répertoire avec numéro de version contient des mots-clés \"main-class\" différents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient un nom incorrect"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"opens\" différents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"provides\" différents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"requires\" supplémentaires"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"requires\" manquants"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"module-info.class dans un répertoire avec numéro de version contient un mot-clé \"requires transitive\" supplémentaire"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0} : module-info.class dans un répertoire avec numéro de version contient des mots-clés \"version\" différents"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"l\'\'entrée : {0} est une classe isolée imbriquée"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of("Impossible de valider {0} : {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"fichier JAR multiversion non valide {0} supprimé"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"l\'\'entrée : {0} contient une classe avec le nom interne {1}, les noms ne concordent pas"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"l\'\'entrée : {0} contient une nouvelle classe publique introuvable dans les entrées de base"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"le nom d\'\'entrée : {0} n\'\'a pas de numéro de version"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"Erreur lors de l\'écriture d\'un fichier JAR existant"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" Modificateurs d\'opération valides pour tous les modes :\n\n  -C DIR                     Passe au répertoire spécifié et inclut le\n                             fichier suivant"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            Nom du fichier d\'archive. Lorsqu\'il est omis, stdin ou\n                             stdout est utilisé en fonction de l\'opération\n      --release VERSION      Place tous les fichiers suivants dans un répertoire avec numéro de version\n                             du fichier JAR (à savoir META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              Génère une sortie en mode verbose d\'une sortie standard"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" Modificateurs d\'opération valides uniquement en mode create :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            Normaliser des informations dans la nouvelle archive JAR\n                             après la création"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" Modificateurs d\'opération valides uniquement en modes create et update :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  Exclure de l\'ensemble racine de modules par défaut"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN Calcule et enregistre les hachages des modules \n                             mis en correspondance d\'après le modèle donné et dépendant\n                             directement ou indirectement d\'un fichier JAR modulaire\n                             en cours de création ou d\'un fichier JAR non modulaire en cours de mise à jour"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" Modificateurs d\'opération valides uniquement en modes create, update et generate-index :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of("  -0, --no-compress          Stocke uniquement ; n\'utilise pas de compression ZIP"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME Point d\'entrée d\'une application en mode autonome\n                             intégrée à une archive JAR modulaire\n                             ou exécutable"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        Inclut les informations de manifeste du fichier\n                             manifeste donné"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          Emplacement de la dépendance de module pour la génération\n                             du hachage"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    Version de module lors de la création d\'un fichier JAR\n                             modulaire ou de la mise à jour d\'un fichier JAR non modulaire"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          Ne crée pas de fichier manifeste pour les entrées"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     Indication en fonction de laquelle un outil émet un avertissement si le module\n                             est résolu. La valeur doit être deprecated, deprecated-for-removal,\n                             ou incubating"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(" Mode d\'exploitation principal :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               Crée l\'archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of("  -d, --describe-module      afficher le descripteur de module ou le nom de module automatique"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              Extrait des fichiers nommés (ou tous les fichiers) de l\'archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  Génère des informations d\'index pour les archives JAR\n                             indiquées"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 Affiche la table des matières de l\'archive"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               Met à jour une archive JAR existante"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(" Autres options :\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        Affiche l\'aide ou éventuellement la compatibilité"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           Affiche l\'aide sur les options supplémentaires"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of("      --version              Imprime la version de programme"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" Une archive est un fichier JAR modulaire si un descripteur de module, \'module-info.class\', se\n trouve dans la racine des répertoires donnés ou dans la racine de l\'archive JAR\n elle-même. Les opérations suivantes sont valides uniquement lors de la création d\'un fichier JAR modulaire\n ou de la mise à jour d\'un fichier JAR non modulaire existant : \'--module-version\',\n \'--hash-modules\' et \'--module-path\'.\n\n Les arguments obligatoires ou facultatifs pour les options longues sont également obligatoires ou facultatifs\n pour toute option courte correspondante."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"Syntaxe : jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar crée une archive pour les classes et les ressources, et peut manipuler ou\nrestaurer les classes ou ressources individuelles à partir d\'une archive.\n\n Exemples :\n # Création d\'une archive nommée classes.jar composée de deux fichiers de classe :\n jar --create --file classes.jar Foo.class Bar.class\n # Création d\'une archive à l\'aide d\'un manifeste existant, avec tous les fichiers dans foo/ :\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Création d\'une archive JAR modulaire, où le descripteur de module est situé dans\n # classes/module-info.class :\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Mise à jour d\'un fichier JAR non modulaire existant vers un fichier JAR modulaire :\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Crée un fichier JAR multiversion en plaçant certains fichiers dans le répert"
				"oire META-INF/versions/9 :\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nPour raccourcir ou simplifier la commande JAR, vous pouvez spécifier des arguments dans un\nfichier texte distinct et le transmettre à la commande JAR avec le signe arobase (@) en tant que préfixe.\n\n Exemples :\n # Options de lecture supplémentaires et liste des fichiers de classe à partir du fichier classes.list\n jar --create --file my.jar @classes.list\n"_s)
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
			$of(u"manifeste ajouté"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"module-info ajouté : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of("ajout : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"Descripteur de module introuvable. Module automatique dérivé."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  créé : {0}"_s)
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
			$of(u"entrée {0} ignorée"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" décompressé : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(entrée = {0}) (sortie = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of("(stockage : 0 %)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"manifeste mis à jour"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"module-info mis à jour : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"Interface de compatibilité :\nSyntaxe : jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\nOptions :\n    -c  crée une archive\n    -t  affiche la table des matières de l\'archive\n    -x  extrait des fichiers nommés (ou tous les fichiers) de l\'archive\n    -u  met à jour l\'archive existante\n    -v  génère une sortie en mode verbose d\'une sortie standard\n    -f  spécifie le nom de fichier d\'archive\n    -m  inclut les informations de manifeste à partir du fichier manifeste spécifié\n    -n  effectue une normalisation Pack200 après la création d\'une archive\n    -e  spécifie le point d\'entrée d\'une application en mode autonome \n        intégrée à un fichier JAR exécutable\n    -0  stockage uniquement, pas de compression ZIP\n    -P  préserve les signes de début \'/\' (chemin absolu) et \"..\" (répertoire parent) dans les noms de fichier\n    -M  ne crée pas de fichier manifeste pour les entrées\n    -i  génère les informations d\'index des fichiers JAR spécifiés\n    -C  passe au répertoire spécifi"
				"é et inclut le fichier suivant\nSi l\'un des fichiers est un répertoire, celui-ci est traité récursivement.\nLes noms du fichier manifeste, du fichier d\'archive et du point d\'entrée sont\nspécifiés dans le même ordre que celui des indicateurs m, f et e.\n\nExemple 1 : pour archiver deux fichiers de classe dans une archive intitulée classes.jar : \n       jar cvf classes.jar Foo.class Bar.class \nExemple 2 : pour utiliser un fichier manifeste existant \'mymanifest\', puis archiver tous les\n           fichiers du répertoire foo/ dans \'classes.jar\' : \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"entrée avec numéro de version {0} inattendue"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"Avertissement : l\'\'entrée {0} est une classe publique\ndans un package dissimulé, le placement de ce fichier JAR sur le\nchemin de classe générera des interfaces publiques incompatibles"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"Avertissement : l\'\'entrée {0} contient une classe\nidentique à une entrée qui se trouve déjà dans le fichier JAR"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"Avertissement : entrée {0}, plusieurs ressources du même nom"_s)
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