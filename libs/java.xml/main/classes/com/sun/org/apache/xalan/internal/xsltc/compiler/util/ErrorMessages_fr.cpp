#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_fr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ARGUMENT_CONVERSION_ERR
#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_VAL_TEMPLATE_ERR
#undef CATALOG_EXCEPTION
#undef CIRCULAR_INCLUDE_ERR
#undef CIRCULAR_VARIABLE_ERR
#undef CLASS_NOT_FOUND_ERR
#undef CMDLINE_OPT_MISSING_ARG_ERR
#undef COMPILER_ERROR_KEY
#undef COMPILER_WARNING_KEY
#undef COMPILE_STDIN_ERR
#undef COMPILE_USAGE_STR
#undef CONSTRUCTOR_NOT_FOUND
#undef COULD_NOT_CREATE_TRANS_FACT
#undef DATA_CONVERSION_ERR
#undef DESERIALIZE_TRANSLET_ERR
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
#undef ER_RESULT_NULL
#undef FATAL_ERR_MSG
#undef FATAL_ERR_PLUS_WRAPPED_MSG
#undef FILE_ACCESS_ERR
#undef FILE_NOT_FOUND_ERR
#undef FUNCTION_RESOLVE_ERR
#undef ILLEGAL_ARG_ERR
#undef ILLEGAL_ATTRIBUTE_ERR
#undef ILLEGAL_ATTR_NAME_ERR
#undef ILLEGAL_BINARY_OP_ERR
#undef ILLEGAL_CHAR_ERR
#undef ILLEGAL_CHILD_ERR
#undef ILLEGAL_CMDLINE_OPTION_ERR
#undef ILLEGAL_ELEM_NAME_ERR
#undef ILLEGAL_PI_ERR
#undef ILLEGAL_RELAT_OP_ERR
#undef ILLEGAL_TEXT_NODE_ERR
#undef IMPORT_PRECEDE_OTHERS_ERR
#undef INTERNAL_ERR
#undef INVALID_METHOD_IN_OUTPUT
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_GET_FEATURE_NULL_NAME
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_INVALID_ATTR_VALUE_ERR
#undef JAXP_INVALID_SET_PARAM_VALUE
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_FEATURE_NULL_NAME
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
#undef JAXP_UNSUPPORTED_FEATURE
#undef KEY_USE_ATTR_ERR
#undef METHOD_NOT_FOUND_ERR
#undef MISSING_ROOT_ERR
#undef MISSING_WHEN_ERR
#undef MISSING_XSLT_TARGET_ERR
#undef MISSING_XSLT_URI_ERR
#undef MULTIPLE_OTHERWISE_ERR
#undef MULTIPLE_STYLESHEET_ERR
#undef NAMESPACE_UNDEF_ERR
#undef NEED_LITERAL_ERR
#undef NOT_IMPLEMENTED_ERR
#undef NOT_STYLESHEET_ERR
#undef NO_JAVA_FUNCT_THIS_REF
#undef NO_MAIN_TRANSLET_ERR
#undef NO_TRANSLET_CLASS_ERR
#undef OUTLINE_ERR_DELETED_TARGET
#undef OUTLINE_ERR_METHOD_TOO_BIG
#undef OUTLINE_ERR_TRY_CATCH
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#undef OUTPUT_VERSION_ERR
#undef REQUIRED_ATTR_ERR
#undef RESULT_TREE_SORT_ERR
#undef RUNTIME_ERROR_KEY
#undef SAX2DOM_ADAPTER_ERR
#undef SAX_PARSER_CONFIG_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_OTHERWISE_ERR
#undef STRAY_SORT_ERR
#undef STRAY_WHEN_ERR
#undef SYMBOLS_REDEF_ERR
#undef SYNTAX_ERR
#undef TEMPLATE_REDEF_ERR
#undef TEMPLATE_UNDEF_ERR
#undef TRANSFORM_USAGE_STR
#undef TRANSFORM_WITH_JAR_STR
#undef TRANSFORM_WITH_TRANSLET_STR
#undef TRANSLET_CLASS_ERR
#undef TRANSLET_NAME_JAVA_CONFLICT
#undef TRANSLET_OBJECT_ERR
#undef TYPE_CHECK_ERR
#undef TYPE_CHECK_UNK_LOC_ERR
#undef UNKNOWN_SIG_TYPE_ERR
#undef UNNAMED_ATTRIBSET_ERR
#undef UNSUPPORTED_ENCODING
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef VARIABLE_REDEF_ERR
#undef VARIABLE_UNDEF_ERR
#undef WARNING_MSG
#undef WARNING_PLUS_WRAPPED_MSG
#undef WHEN_ELEMENT_ERR
#undef XPATH_PARSER_ERR
#undef XSLTC_SOURCE_ERR
#undef XSL_VERSION_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

void ErrorMessages_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_fr::getContents() {
	$useLocalObjectStack();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_STYLESHEET_ERR,
			u"Plusieurs feuilles de style définies dans le même fichier."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_REDEF_ERR,
			u"Modèle \'\'{0}\'\' déjà défini dans cette feuille de style."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_UNDEF_ERR,
			u"Modèle \'\'{0}\'\' non défini dans cette feuille de style."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_REDEF_ERR,
			u"Plusieurs variables \'\'{0}\'\' définies dans la même portée."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_UNDEF_ERR,
			u"La variable ou le paramètre \'\'{0}\'\' n\'\'est pas défini."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CLASS_NOT_FOUND_ERR,
			"Impossible de trouver la classe \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::METHOD_NOT_FOUND_ERR,
			u"Méthode externe \'\'{0}\'\' introuvable (elle doit être \"public\")."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ARGUMENT_CONVERSION_ERR,
			u"Impossible de convertir le type de retour/d\'\'argument dans l\'\'appel de la méthode \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_NOT_FOUND_ERR,
			"Fichier ou URI \'\'{0}\'\' introuvable."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_URI_ERR,
			"URI \'\'{0}\'\' non valide."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CATALOG_EXCEPTION,
			u"JAXP08090001 : le CatalogResolver est activé avec le catalogue \"{0}\", mais une exception CatalogException est renvoyée."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_ACCESS_ERR,
			"Impossible d\'\'ouvrir le fichier ou l\'\'URI \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_ROOT_ERR,
			u"Elément <xsl:stylesheet> ou <xsl:transform> attendu."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NAMESPACE_UNDEF_ERR,
			u"Le préfixe de l\'\'espace de noms \'\'{0}\'\' n\'\'a pas été déclaré."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FUNCTION_RESOLVE_ERR,
			u"Impossible de résoudre l\'\'appel de la fonction \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NEED_LITERAL_ERR,
			u"L\'\'argument pour \'\'{0}\'\' doit être une chaîne littérale."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XPATH_PARSER_ERR,
			"Erreur lors de l\'\'analyse de l\'\'expression XPath \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::REQUIRED_ATTR_ERR,
			"Attribut \'\'{0}\'\' obligatoire manquant."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHAR_ERR,
			u"Caractère \'\'{0}\'\' non admis dans l\'\'expression XPath."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_PI_ERR,
			"Nom \'\'{0}\'\' non admis pour l\'\'instruction de traitement."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_ATTRIBUTE_ERR,
			u"Attribut \'\'{0}\'\' à l\'\'extérieur de l\'\'élément."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTRIBUTE_ERR,
			"Attribut \'\'{0}\'\' non admis."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_INCLUDE_ERR,
			u"Opération import/include circulaire. La feuille de style \'\'{0}\'\' est déjà chargée."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR,
			u"Les enfants d\'élément xsl:import doivent précéder tous les autres enfants d\'élément d\'un élément xsl:stylesheet, y compris tout enfant d\'élément xsl:include."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RESULT_TREE_SORT_ERR,
			u"Les fragments de l\'arborescence de résultats ne peuvent pas être triés (les éléments <xsl:sort> ne sont pas pris en compte). Vous devez trier les noeuds lorsque vous créez l\'arborescence de résultats."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYMBOLS_REDEF_ERR,
			u"Le formatage décimal \'\'{0}\'\' est déjà défini."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSL_VERSION_ERR,
			"La version XSL \'\'{0}\'\' n\'\'est pas prise en charge par XSLTC."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_VARIABLE_ERR,
			u"Référence de paramètre/variable circulaire dans \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_BINARY_OP_ERR,
			u"Opérateur inconnu pour l\'expression binaire."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ARG_ERR,
			"Arguments non admis pour l\'appel de la fonction."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DOCUMENT_ARG_ERR,
			u"Le deuxième argument de la fonction document() doit être un jeu de noeuds."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_WHEN_ERR,
			u"Au moins un élément <xsl:when> est obligatoire dans <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_OTHERWISE_ERR,
			u"Un seul élément <xsl:otherwise> est autorisé dans <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_OTHERWISE_ERR,
			u"<xsl:otherwise> ne peut être utilisé que dans <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_WHEN_ERR,
			u"<xsl:when> ne peut être utilisé que dans <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WHEN_ELEMENT_ERR,
			u"Seuls les éléments <xsl:when> et <xsl:otherwise> sont autorisés dans <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNNAMED_ATTRIBSET_ERR,
			"Attribut \"name\" manquant dans <xsl:attribute-set>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHILD_ERR,
			u"Elément enfant non admis."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ELEM_NAME_ERR,
			u"Vous ne pouvez pas appeler un élément \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTR_NAME_ERR,
			"Vous ne pouvez pas appeler un attribut \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_TEXT_NODE_ERR,
			u"Données texte en dehors de l\'élément <xsl:stylesheet> de niveau supérieur."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX_PARSER_CONFIG_ERR,
			u"L\'analyseur JAXP n\'est pas configuré correctement"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INTERNAL_ERR,
			u"Erreur interne XSLTC irrécupérable : \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_XSL_ERR,
			u"Elément \'\'{0}\'\' XSL non pris en charge."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_EXT_ERR,
			"Extension \'\'{0}\'\' XSLTC non reconnue."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_URI_ERR,
			u"Le document d\'entrée n\'est pas une feuille de style (l\'espace de noms XSL n\'est pas déclaré dans l\'élément racine)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_TARGET_ERR,
			"Cible de feuille de style \'\'{0}\'\' introuvable."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ACCESSING_XSLT_TARGET_ERR,
			u"Impossible de lire la cible de feuille de style \'\'{0}\'\' car l\'\'accès à \'\'{1}\'\' n\'\'est pas autorisé en raison d\'\'une restriction définie par la propriété accessExternalStylesheet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_IMPLEMENTED_ERR,
			u"Non implémenté : \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_STYLESHEET_ERR,
			u"Le document d\'entrée ne contient pas de feuille de style XSL."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ELEMENT_PARSE_ERR,
			u"Impossible d\'\'analyser l\'\'élément \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::KEY_USE_ATTR_ERR,
			u"L\'attribut \"use\" de <key> doit être node, node-set, string ou number."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTPUT_VERSION_ERR,
			u"La version du document XML de sortie doit être 1.0"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_RELAT_OP_ERR,
			u"Opérateur inconnu pour l\'expression relationnelle"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTRIBSET_UNDEF_ERR,
			"Tentative d\'\'utilisation de l\'\'ensemble d\'\'attributs non existant \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTR_VAL_TEMPLATE_ERR,
			u"Impossible d\'\'analyser le modèle de valeur d\'\'attribut \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNKNOWN_SIG_TYPE_ERR,
			u"Type de données inconnu dans la signature pour la classe \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DATA_CONVERSION_ERR,
			u"Impossible de convertir le type de données \'\'{0}\'\' en \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_TRANSLET_CLASS_ERR,
			u"Cette classe Templates ne contient pas de définition de classe de translet valide."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_MAIN_TRANSLET_ERR,
			"Cette classe Termplates ne contient pas de classe portant le nom \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_CLASS_ERR,
			"Impossible de charger la classe de translet \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_OBJECT_ERR,
			u"Classe de translet chargée, mais impossible de créer une instance de translet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_LISTENER_NULL_ERR,
			u"Tentative de définition d\'\'ErrorListener sur NULL pour \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR,
			"Seuls StreamSource, SAXSource et DOMSource sont pris en charge par XSLTC"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_SOURCE_ERR,
			u"L\'\'objet Source transmis à \'\'{0}\'\' n\'\'a pas de contenu."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_COMPILE_ERR,
			"Impossible de compiler la feuille de style"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_ERR,
			u"TransformerFactory ne reconnaît pas l\'\'attribut \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR,
			u"La valeur indiquée pour l\'\'attribut \'\'{0}\'\' est incorrecte."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_RESULT_ERR,
			u"setResult() doit être appelé avant startDocument()."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_TRANSLET_ERR,
			u"La classe Transformer ne contient pas d\'objet translet encapsulé."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_HANDLER_ERR,
			u"Aucun gestionnaire de sortie défini pour le résultat de la transformation."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_RESULT_ERR,
			u"L\'\'objet de résultat transmis à \'\'{0}\'\' n\'\'est pas valide."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_PROP_ERR,
			u"Tentative d\'\'accès à la propriété Transformer non valide \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX2DOM_ADAPTER_ERR,
			u"Impossible de créer l\'\'adaptateur SAX2DOM : \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSLTC_SOURCE_ERR,
			u"XSLTCSource.build() appelé sans que l\'ID système soit défini."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ER_RESULT_NULL,
			u"Le résultat ne doit pas être NULL"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE,
			u"La valeur du paramètre {0} doit être un objet Java valide"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_STDIN_ERR,
			u"L\'option -i doit être utilisée avec l\'option -o."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_USAGE_STR,
			u"SYNTAXE\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\nOPTIONS\n   -o <output>    attribue le nom <output> au\n                  translet généré. Par défaut, le nom du translet est\n                  dérivé du nom <stylesheet>. Cette option\n                  n\'est pas prise en compte lors de la compilation de plusieurs feuilles de style.\n   -d <directory> indique un répertoire de destination pour le translet\n   -j <jarfile>   package les classes de translet dans un fichier JAR portant le\n                  nom spécifié comme <jarfile>\n   -p <package>   indique un préfixe de nom de package pour toutes les\n                  classes de translet générées.\n   -n             active le mode INLINE du modèle (comportement par défaut amélioré\n                  en moyenne).\n   -x             active la sortie de messages de débogage supplémentaires\n   -u             interprète les argumen"
				"ts <stylesheet> comme des URL\n   -i             force le compilateur à lire la feuille de style à partir de STDIN\n   -v             affiche la version du compilateur\n   -h             affiche cette instruction de syntaxe\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_USAGE_STR,
			u"SYNTAXE \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   utilise le translet <class> pour transformer un document XML\n   spécifié comme <document>. Le translet <class> est soit dans\n   la variable d\'environnement CLASSPATH de l\'utilisateur, soit dans un fichier <jarfile> indiqué en option.\nOPTIONS\n   -j <jarfile>    indique un fichier JAR à partir duquel charger le translet\n   -x              active la sortie de messages de débogage supplémentaires\n   -n <iterations> exécute la transformation <iterations> fois et\n                   affiche les informations de profilage\n   -u <document_url> spécifie le document d\'entrée XML comme URL\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_SORT_ERR,
			u"<xsl:sort> peut uniquement être utilisé dans <xsl:for-each> ou <xsl:apply-templates>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_ENCODING,
			"L\'\'encodage de sortie \'\'{0}\'\' n\'\'est pas pris en charge sur cette Java Virtual Machine (JVM)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYNTAX_ERR,
			"Erreur de syntaxe dans \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CONSTRUCTOR_NOT_FOUND,
			"Constructeur \'\'{0}\'\' externe introuvable."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_JAVA_FUNCT_THIS_REF,
			u"Le premier argument pour la fonction Java \'\'{0}\'\' non static n\'\'est pas une référence d\'\'objet valide."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_ERR,
			u"Erreur lors de la vérification du type de l\'\'expression \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_UNK_LOC_ERR,
			u"Erreur lors de la vérification du type d\'expression à un emplacement inconnu."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR,
			"L\'\'option de ligne de commande \'\'{0}\'\' n\'\'est pas valide."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR,
			"Argument obligatoire manquant dans l\'\'option de ligne de commande \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WARNING_PLUS_WRAPPED_MSG,
			"WARNING:  \'\'{0}\'\'\n       :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WARNING_MSG,
			"WARNING:  \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG,
			"FATAL ERROR:  \'\'{0}\'\'\n           :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FATAL_ERR_MSG,
			"FATAL ERROR:  \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_PLUS_WRAPPED_MSG,
			"ERROR:  \'\'{0}\'\'\n     :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_MSG,
			"ERROR:  \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_TRANSLET_STR,
			u"Transformation à l\'\'aide du translet \'\'{0}\'\' "_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_JAR_STR,
			u"Transformation à l\'\'aide du translet \'\'{0}\'\' dans le fichier JAR \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COULD_NOT_CREATE_TRANS_FACT,
			u"Impossible de créer une instance de la classe TransformerFactory \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT,
			u"Impossible d\'\'utiliser le nom \'\'{0}\'\' comme nom de classe de translet car il contient des caractères non autorisés dans le nom de la classe Java. Le nom \'\'{1}\'\' a été utilisé à la place."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_ERROR_KEY,
			"Erreurs de compilateur :"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_WARNING_KEY,
			"Avertissements de compilateur :"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RUNTIME_ERROR_KEY,
			"Erreurs de translet :"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_QNAME_ERR,
			u"Un attribut dont la valeur doit être un QName ou une liste de QNames séparés par des espaces avait la valeur \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_NCNAME_ERR,
			u"Un attribut dont la valeur doit être un NCName avait la valeur \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_METHOD_IN_OUTPUT,
			u"L\'\'attribut \"method\" d\'\'un élément <xsl:output> avait la valeur \'\'{0}\'\'. La valeur doit être l\'\'une des suivantes : \'\'xml\'\', \'\'html\'\', \'\'text\'\' ou qname-but-not-ncname"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_GET_FEATURE_NULL_NAME,
			u"Le nom de la fonctionnalité ne peut pas être NULL dans TransformerFactory.getFeature (chaîne pour le nom)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_FEATURE_NULL_NAME,
			u"Le nom de la fonctionnalité ne peut pas être NULL dans TransformerFactory.setFeature (chaîne pour le nom, valeur booléenne)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNSUPPORTED_FEATURE,
			u"Impossible de définir la fonctionnalité \'\'{0}\'\' sur cette propriété TransformerFactory."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SECUREPROCESSING_FEATURE,
			u"FEATURE_SECURE_PROCESSING : impossible de définir la fonctionnalité sur False en présence du gestionnaire de sécurité."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_TRY_CATCH,
			u"Erreur XSLTC interne : le code exécutable généré contient un bloc try-catch-finally et ne peut pas être délimité."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS,
			u"Erreur XSLTC interne : les marqueurs OutlineableChunkStart et OutlineableChunkEnd doivent être équilibrés et correctement imbriqués."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_DELETED_TARGET,
			u"Erreur XSLTC interne : une instruction ayant fait partie d\'un bloc de code exécutable délimité est toujours référencée dans la méthode d\'origine."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG,
			u"Erreur XSLTC interne : une méthode dans le translet dépasse la limite de la JVM concernant la longueur d\'une méthode de 64 kilo-octets. En général, ceci est dû à de très grands modèles dans une feuille de style. Essayez de restructurer la feuille de style pour utiliser des modèles plus petits."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DESERIALIZE_TRANSLET_ERR,
			u"Lorsque la sécurité Java est activée, la prise en charge de la désérialisation de TemplatesImpl est désactivée. La définition de la propriété système jdk.xml.enableTemplatesImplDeserialization sur True permet de remplacer ce paramètre."_s
		})
	});
}

ErrorMessages_fr::ErrorMessages_fr() {
}

$Class* ErrorMessages_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_fr);
	});
	return class$;
}

$Class* ErrorMessages_fr::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com