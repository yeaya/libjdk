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

void jar_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"error.bad.cflag"_s,
			u"L\'indicateur c requiert la spécification d\'un fichier manifeste ou d\'un fichier d\'entrée."_s
		}),
		$$new($ObjectArray, {
			"error.bad.dflag"_s,
			u"L\'option \'-d, --describe-module\' ne requiert la spécification d\'aucun fichier d\'entrée"_s
		}),
		$$new($ObjectArray, {
			"error.bad.eflag"_s,
			u"L\'indicateur e et le fichier manifeste portant l\'attribut Main-Class ne peuvent pas être spécifiés \nensemble."_s
		}),
		$$new($ObjectArray, {
			"error.bad.file.arg"_s,
			"Erreur lors de l\'analyse des arguments de fichier"_s
		}),
		$$new($ObjectArray, {
			"error.bad.option"_s,
			u"Une des options -{ctxuid} doit être spécifiée."_s
		}),
		$$new($ObjectArray, {
			"error.bad.reason"_s,
			u"raison incorrecte : {0}, la valeur doit être deprecated, deprecated-for-removal ou incubating"_s
		}),
		$$new($ObjectArray, {
			"error.bad.uflag"_s,
			u"L\'indicateur u requiert la spécification d\'un fichier manifeste, d\'un fichier d\'entrée ou d\'un indicateur e."_s
		}),
		$$new($ObjectArray, {
			"error.cant.open"_s,
			"impossible d\'\'ouvrir : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.create.dir"_s,
			u"{0} : impossible de créer le répertoire"_s
		}),
		$$new($ObjectArray, {
			"error.create.tempfile"_s,
			u"Impossible de créer un fichier temporaire"_s
		}),
		$$new($ObjectArray, {
			"error.hash.dep"_s,
			u"Hachage des dépendances du module {0}, module {1} introuvable sur le chemin de modules"_s
		}),
		$$new($ObjectArray, {
			"error.illegal.option"_s,
			"Option non admise : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.incorrect.length"_s,
			"longueur incorrecte lors du traitement de : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.invalid.versioned.module.attribute"_s,
			"Attribut de descripteur de module non valide {0}"_s
		}),
		$$new($ObjectArray, {
			"error.missing.arg"_s,
			"l\'\'option {0} exige un argument"_s
		}),
		$$new($ObjectArray, {
			"error.missing.provider"_s,
			"Fournisseur de services introuvable : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.module.descriptor.not.found"_s,
			"Descripteur de module introuvable"_s
		}),
		$$new($ObjectArray, {
			"error.module.options.without.info"_s,
			"Une des options --module-version ou --hash-modules sans module-info.class"_s
		}),
		$$new($ObjectArray, {
			"error.multiple.main.operations"_s,
			"Vous ne pouvez pas indiquer plus d\'une option \'-cuxtid\'"_s
		}),
		$$new($ObjectArray, {
			"error.no.operative.descriptor"_s,
			u"Aucun descripteur opérationnel pour la version : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.no.root.descriptor"_s,
			"Aucun descripteur de module racine, indiquer --release"_s
		}),
		$$new($ObjectArray, {
			"error.nosuch.fileordir"_s,
			u"{0} : fichier ou répertoire introuvable"_s
		}),
		$$new($ObjectArray, {
			"error.release.unexpected.versioned.entry"_s,
			u"entrée avec numéro de version {0} inattendue pour la version {1}"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.notnumber"_s,
			"version {0} non valide"_s
		}),
		$$new($ObjectArray, {
			"error.release.value.toosmall"_s,
			u"version {0} non valide : elle doit être supérieure ou égale à 9"_s
		}),
		$$new($ObjectArray, {
			"error.unable.derive.automodule"_s,
			u"Impossible de dériver le descripteur de module pour : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.unexpected.module-info"_s,
			"Descripteur de module {0} inattendu"_s
		}),
		$$new($ObjectArray, {
			"error.unrecognized.option"_s,
			"option non reconnue : {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.bad.entry.name"_s,
			u"nom d\'\'entrée au format incorrect, {0}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.different.api"_s,
			u"l\'\'entrée : {0} contient une classe avec une API différente de la version antérieure"_s
		}),
		$$new($ObjectArray, {
			"error.validator.entryname.tooshort"_s,
			u"le nom d\'\'entrée : {0} est trop court et n\'\'est pas un répertoire"_s
		}),
		$$new($ObjectArray, {
			"error.validator.incompatible.class.version"_s,
			u"l\'\'entrée : {0} a une version de classe non compatible avec une version antérieure"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.exports.notequal"_s,
			u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"exports\" différents"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.manclass.notequal"_s,
			u"{0} : module-info.class dans un répertoire avec numéro de version contient des mots-clés \"main-class\" différents"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.name.notequal"_s,
			u"module-info.class dans un répertoire avec numéro de version contient un nom incorrect"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.opens.notequal"_s,
			u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"opens\" différents"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.provides.notequal"_s,
			u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"provides\" différents"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.added"_s,
			u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"requires\" supplémentaires"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.dropped"_s,
			u"module-info.class dans un répertoire avec numéro de version contient des mots-clés \"requires\" manquants"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.requires.transitive"_s,
			u"module-info.class dans un répertoire avec numéro de version contient un mot-clé \"requires transitive\" supplémentaire"_s
		}),
		$$new($ObjectArray, {
			"error.validator.info.version.notequal"_s,
			u"{0} : module-info.class dans un répertoire avec numéro de version contient des mots-clés \"version\" différents"_s
		}),
		$$new($ObjectArray, {
			"error.validator.isolated.nested.class"_s,
			u"l\'\'entrée : {0} est une classe isolée imbriquée"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.exception"_s,
			"Impossible de valider {0} : {1}"_s
		}),
		$$new($ObjectArray, {
			"error.validator.jarfile.invalid"_s,
			u"fichier JAR multiversion non valide {0} supprimé"_s
		}),
		$$new($ObjectArray, {
			"error.validator.names.mismatch"_s,
			u"l\'\'entrée : {0} contient une classe avec le nom interne {1}, les noms ne concordent pas"_s
		}),
		$$new($ObjectArray, {
			"error.validator.new.public.class"_s,
			u"l\'\'entrée : {0} contient une nouvelle classe publique introuvable dans les entrées de base"_s
		}),
		$$new($ObjectArray, {
			"error.validator.version.notnumber"_s,
			u"le nom d\'\'entrée : {0} n\'\'a pas de numéro de version"_s
		}),
		$$new($ObjectArray, {
			"error.write.file"_s,
			u"Erreur lors de l\'écriture d\'un fichier JAR existant"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any"_s,
			u" Modificateurs d\'opération valides pour tous les modes :\n\n  -C DIR                     Passe au répertoire spécifié et inclut le\n                             fichier suivant"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.file"_s,
			u"  -f, --file=FILE            Nom du fichier d\'archive. Lorsqu\'il est omis, stdin ou\n                             stdout est utilisé en fonction de l\'opération\n      --release VERSION      Place tous les fichiers suivants dans un répertoire avec numéro de version\n                             du fichier JAR (à savoir META-INF/versions/VERSION/)"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.any.verbose"_s,
			u"  -v, --verbose              Génère une sortie en mode verbose d\'une sortie standard"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create"_s,
			u" Modificateurs d\'opération valides uniquement en mode create :\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.normalize"_s,
			u"  -n, --normalize            Normaliser des informations dans la nouvelle archive JAR\n                             après la création"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update"_s,
			u" Modificateurs d\'opération valides uniquement en modes create et update :\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.do-not-resolve-by-default"_s,
			u"      --do-not-resolve-by-default  Exclure de l\'ensemble racine de modules par défaut"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.hash-modules"_s,
			u"      --hash-modules=PATTERN Calcule et enregistre les hachages des modules \n                             mis en correspondance d\'après le modèle donné et dépendant\n                             directement ou indirectement d\'un fichier JAR modulaire\n                             en cours de création ou d\'un fichier JAR non modulaire en cours de mise à jour"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index"_s,
			u" Modificateurs d\'opération valides uniquement en modes create, update et generate-index :\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.index.no-compress"_s,
			"  -0, --no-compress          Stocke uniquement ; n\'utilise pas de compression ZIP"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.main-class"_s,
			u"  -e, --main-class=CLASSNAME Point d\'entrée d\'une application en mode autonome\n                             intégrée à une archive JAR modulaire\n                             ou exécutable"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.manifest"_s,
			u"  -m, --manifest=FILE        Inclut les informations de manifeste du fichier\n                             manifeste donné"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-path"_s,
			u"  -p, --module-path          Emplacement de la dépendance de module pour la génération\n                             du hachage"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.module-version"_s,
			u"      --module-version=VERSION    Version de module lors de la création d\'un fichier JAR\n                             modulaire ou de la mise à jour d\'un fichier JAR non modulaire"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.no-manifest"_s,
			u"  -M, --no-manifest          Ne crée pas de fichier manifeste pour les entrées"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.create.update.warn-if-resolved"_s,
			u"      --warn-if-resolved     Indication en fonction de laquelle un outil émet un avertissement si le module\n                             est résolu. La valeur doit être deprecated, deprecated-for-removal,\n                             ou incubating"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main"_s,
			" Mode d\'exploitation principal :\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.create"_s,
			u"  -c, --create               Crée l\'archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.describe-module"_s,
			"  -d, --describe-module      afficher le descripteur de module ou le nom de module automatique"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.extract"_s,
			u"  -x, --extract              Extrait des fichiers nommés (ou tous les fichiers) de l\'archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.generate-index"_s,
			u"  -i, --generate-index=FILE  Génère des informations d\'index pour les archives JAR\n                             indiquées"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.list"_s,
			u"  -t, --list                 Affiche la table des matières de l\'archive"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.main.update"_s,
			u"  -u, --update               Met à jour une archive JAR existante"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other"_s,
			" Autres options :\n"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help"_s,
			u"  -h, --help[:compat]        Affiche l\'aide ou éventuellement la compatibilité"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.help-extra"_s,
			u"      --help-extra           Affiche l\'aide sur les options supplémentaires"_s
		}),
		$$new($ObjectArray, {
			"main.help.opt.other.version"_s,
			"      --version              Imprime la version de programme"_s
		}),
		$$new($ObjectArray, {
			"main.help.postopt"_s,
			u" Une archive est un fichier JAR modulaire si un descripteur de module, \'module-info.class\', se\n trouve dans la racine des répertoires donnés ou dans la racine de l\'archive JAR\n elle-même. Les opérations suivantes sont valides uniquement lors de la création d\'un fichier JAR modulaire\n ou de la mise à jour d\'un fichier JAR non modulaire existant : \'--module-version\',\n \'--hash-modules\' et \'--module-path\'.\n\n Les arguments obligatoires ou facultatifs pour les options longues sont également obligatoires ou facultatifs\n pour toute option courte correspondante."_s
		}),
		$$new($ObjectArray, {
			"main.help.preopt"_s,
			u"Syntaxe : jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar crée une archive pour les classes et les ressources, et peut manipuler ou\nrestaurer les classes ou ressources individuelles à partir d\'une archive.\n\n Exemples :\n # Création d\'une archive nommée classes.jar composée de deux fichiers de classe :\n jar --create --file classes.jar Foo.class Bar.class\n # Création d\'une archive à l\'aide d\'un manifeste existant, avec tous les fichiers dans foo/ :\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # Création d\'une archive JAR modulaire, où le descripteur de module est situé dans\n # classes/module-info.class :\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # Mise à jour d\'un fichier JAR non modulaire existant vers un fichier JAR modulaire :\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # Crée un fichier JAR multiversion en plaçant certains fichiers dans le répert"
				"oire META-INF/versions/9 :\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\nPour raccourcir ou simplifier la commande JAR, vous pouvez spécifier des arguments dans un\nfichier texte distinct et le transmettre à la commande JAR avec le signe arobase (@) en tant que préfixe.\n\n Exemples :\n # Options de lecture supplémentaires et liste des fichiers de classe à partir du fichier classes.list\n jar --create --file my.jar @classes.list\n"_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary"_s,
			"Syntaxe : jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s
		}),
		$$new($ObjectArray, {
			"main.usage.summary.try"_s,
			"Pour plus d\'informations, essayez \'jar --help\'."_s
		}),
		$$new($ObjectArray, {
			"out.added.manifest"_s,
			u"manifeste ajouté"_s
		}),
		$$new($ObjectArray, {
			"out.added.module-info"_s,
			u"module-info ajouté : {0}"_s
		}),
		$$new($ObjectArray, {
			"out.adding"_s,
			"ajout : {0}"_s
		}),
		$$new($ObjectArray, {
			"out.automodule"_s,
			u"Descripteur de module introuvable. Module automatique dérivé."_s
		}),
		$$new($ObjectArray, {
			"out.create"_s,
			u"  créé : {0}"_s
		}),
		$$new($ObjectArray, {
			"out.deflated"_s,
			"(compression : {0} %)"_s
		}),
		$$new($ObjectArray, {
			"out.extracted"_s,
			"extrait : {0}"_s
		}),
		$$new($ObjectArray, {
			"out.ignore.entry"_s,
			u"entrée {0} ignorée"_s
		}),
		$$new($ObjectArray, {
			"out.inflated"_s,
			u" décompressé : {0}"_s
		}),
		$$new($ObjectArray, {
			"out.size"_s,
			u"(entrée = {0}) (sortie = {1})"_s
		}),
		$$new($ObjectArray, {
			"out.stored"_s,
			"(stockage : 0 %)"_s
		}),
		$$new($ObjectArray, {
			"out.update.manifest"_s,
			u"manifeste mis à jour"_s
		}),
		$$new($ObjectArray, {
			"out.update.module-info"_s,
			u"module-info mis à jour : {0}"_s
		}),
		$$new($ObjectArray, {
			"usage.compat"_s,
			u"Interface de compatibilité :\nSyntaxe : jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\nOptions :\n    -c  crée une archive\n    -t  affiche la table des matières de l\'archive\n    -x  extrait des fichiers nommés (ou tous les fichiers) de l\'archive\n    -u  met à jour l\'archive existante\n    -v  génère une sortie en mode verbose d\'une sortie standard\n    -f  spécifie le nom de fichier d\'archive\n    -m  inclut les informations de manifeste à partir du fichier manifeste spécifié\n    -n  effectue une normalisation Pack200 après la création d\'une archive\n    -e  spécifie le point d\'entrée d\'une application en mode autonome \n        intégrée à un fichier JAR exécutable\n    -0  stockage uniquement, pas de compression ZIP\n    -P  préserve les signes de début \'/\' (chemin absolu) et \"..\" (répertoire parent) dans les noms de fichier\n    -M  ne crée pas de fichier manifeste pour les entrées\n    -i  génère les informations d\'index des fichiers JAR spécifiés\n    -C  passe au répertoire spécifi"
				"é et inclut le fichier suivant\nSi l\'un des fichiers est un répertoire, celui-ci est traité récursivement.\nLes noms du fichier manifeste, du fichier d\'archive et du point d\'entrée sont\nspécifiés dans le même ordre que celui des indicateurs m, f et e.\n\nExemple 1 : pour archiver deux fichiers de classe dans une archive intitulée classes.jar : \n       jar cvf classes.jar Foo.class Bar.class \nExemple 2 : pour utiliser un fichier manifeste existant \'mymanifest\', puis archiver tous les\n           fichiers du répertoire foo/ dans \'classes.jar\' : \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s
		}),
		$$new($ObjectArray, {
			"warn.release.unexpected.versioned.entry"_s,
			u"entrée avec numéro de version {0} inattendue"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.concealed.public.class"_s,
			u"Avertissement : l\'\'entrée {0} est une classe publique\ndans un package dissimulé, le placement de ce fichier JAR sur le\nchemin de classe générera des interfaces publiques incompatibles"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.identical.entry"_s,
			u"Avertissement : l\'\'entrée {0} contient une classe\nidentique à une entrée qui se trouve déjà dans le fichier JAR"_s
		}),
		$$new($ObjectArray, {
			"warn.validator.resources.with.same.name"_s,
			u"Avertissement : entrée {0}, plusieurs ressources du même nom"_s
		})
	});
}

jar_fr::jar_fr() {
}

$Class* jar_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(jar_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.tools.jar.resources.jar_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(jar_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(jar_fr);
	});
	return class$;
}

$Class* jar_fr::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun