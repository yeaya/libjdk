#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_de.h>
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

void ErrorMessages_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_de::getContents() {
	$useLocalObjectStack();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_STYLESHEET_ERR,
			"Mehrere Stylesheets in derselben Datei definiert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_REDEF_ERR,
			"Vorlage \"{0}\" bereits in diesem Stylesheet definiert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_UNDEF_ERR,
			"Vorlage \"{0}\" nicht in diesem Stylesheet definiert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_REDEF_ERR,
			u"Variable \"{0}\" ist mehrmals in demselben Gültigkeitsbereich definiert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_UNDEF_ERR,
			"Variable oder Parameter \"{0}\" ist nicht definiert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CLASS_NOT_FOUND_ERR,
			"Klasse \"{0}\" kann nicht gefunden werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::METHOD_NOT_FOUND_ERR,
			"Externe Methode \"{0}\" kann nicht gefunden werden (muss \"public\" sein)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ARGUMENT_CONVERSION_ERR,
			u"Konvertierung von Argument-/Rückgabetyp in Aufruf von Methode \"{0}\" nicht möglich"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_NOT_FOUND_ERR,
			"Datei oder URI \"{0}\" nicht gefunden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_URI_ERR,
			u"Ungültiger URI \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CATALOG_EXCEPTION,
			u"JAXP08090001: CatalogResolver ist mit dem Katalog \"{0}\" aktiviert, eine CatalogException wird jedoch zurückgegeben."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_ACCESS_ERR,
			u"Datei oder URI \"{0}\" kann nicht geöffnet werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_ROOT_ERR,
			"<xsl:stylesheet>- oder <xsl:transform>-Element erwartet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NAMESPACE_UNDEF_ERR,
			u"Namespace-Präfix \"{0}\" ist nicht deklariert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FUNCTION_RESOLVE_ERR,
			u"Aufruf kann nicht in Funktion \"{0}\" aufgelöst werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NEED_LITERAL_ERR,
			u"Argument für \"{0}\" muss eine literale Zeichenfolge sein."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XPATH_PARSER_ERR,
			"Fehler beim Parsen von XPath-Ausdruck \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::REQUIRED_ATTR_ERR,
			"Erforderliches Attribut \"{0}\" fehlt."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHAR_ERR,
			u"Ungültiges Zeichen \"{0}\" in XPath-Ausdruck."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_PI_ERR,
			u"Ungültiger Name \"{0}\" für Verarbeitungsanweisung."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_ATTRIBUTE_ERR,
			u"Attribut \"{0}\" außerhalb des Elements."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTRIBUTE_ERR,
			u"Ungültiges Attribut \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_INCLUDE_ERR,
			"Zyklisches import/include. Stylesheet \"{0}\" bereits geladen."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR,
			u"Die untergeordneten Elemente des xsl:import-Elements müssen vor allen anderen untergeordneten Elementen eines xsl:stylesheet-Elements stehen, einschließlich eventueller untergeordneter Elemente des xsl:include-Elements."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RESULT_TREE_SORT_ERR,
			u"Ergebnisbaumfragmente können nicht sortiert werden (<xsl:sort>-Elemente werden ignoriert). Sie müssen die Knoten sortieren, wenn Sie den Ergebnisbaum erstellen."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYMBOLS_REDEF_ERR,
			"Dezimalformatierung \"{0}\" ist bereits definiert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSL_VERSION_ERR,
			u"XSL-Version \"{0}\" wird nicht von XSLTC unterstützt."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_VARIABLE_ERR,
			"Zyklische Variablen-/Parameterreferenz in \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_BINARY_OP_ERR,
			u"Unbekannter Operator für Binärausdruck."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ARG_ERR,
			u"Ungültige Argumente für Funktionsaufruf."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DOCUMENT_ARG_ERR,
			u"Zweites Argument für document()-Funktion muss ein NodeSet sein."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_WHEN_ERR,
			"Mindestens ein <xsl:when>-Element in <xsl:choose> erforderlich."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_OTHERWISE_ERR,
			u"Nur ein <xsl:otherwise>-Element in <xsl:choose> zulässig."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_OTHERWISE_ERR,
			"<xsl:otherwise> kann nur in <xsl:choose> verwendet werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_WHEN_ERR,
			"<xsl:when> kann nur in <xsl:choose> verwendet werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WHEN_ELEMENT_ERR,
			u"Nur <xsl:when>- und <xsl:otherwise>-Elemente in <xsl:choose> zulässig."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNNAMED_ATTRIBSET_ERR,
			"Bei <xsl:attribute-set> fehlt das \"name\"-Attribut."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHILD_ERR,
			u"Ungültiges untergeordnetes Element."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ELEM_NAME_ERR,
			u"Elemente dürfen nicht den Namen \"{0}\" haben"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTR_NAME_ERR,
			u"Attribute dürfen nicht den Namen \"{0}\" haben"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_TEXT_NODE_ERR,
			u"Textdaten außerhalb des <xsl:stylesheet>-Elements der obersten Ebene."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX_PARSER_CONFIG_ERR,
			"JAXP-Parser nicht korrekt konfiguriert"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INTERNAL_ERR,
			"Nicht behebbarer interner XSLTC-Fehler: \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_XSL_ERR,
			u"Nicht unterstütztes XSL-Element \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_EXT_ERR,
			"Unbekannte XSLTC-Erweiterung \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_URI_ERR,
			"Das Eingabedokument ist kein Stylesheet (der XSL-Namespace ist nicht im Root-Element deklariert)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_TARGET_ERR,
			"Stylesheet-Ziel \"{0}\" konnte nicht gefunden werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ACCESSING_XSLT_TARGET_ERR,
			u"Stylesheet-Ziel \"{0}\" konnte nicht gelesen werden, weil der \"{1}\"-Zugriff wegen einer von der Eigenschaft accessExternalStylesheet festgelegten Einschränkung nicht zulässig ist."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_IMPLEMENTED_ERR,
			"Nicht implementiert: \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_STYLESHEET_ERR,
			u"Das Eingabedokument enthält kein XSL-Stylesheet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ELEMENT_PARSE_ERR,
			"Element \"{0}\" konnte nicht geparst werden"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::KEY_USE_ATTR_ERR,
			"Das \"use\"-Attribut von <key> muss \"node\", \"node-set\", \"string\" oder \"number\" sein."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTPUT_VERSION_ERR,
			"Ausgabe-XML-Dokumentversion muss 1.0 sein"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_RELAT_OP_ERR,
			u"Unbekannter Operator für Vergleichsausdruck"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTRIBSET_UNDEF_ERR,
			"Versuch, nicht vorhandene Attributgruppe \"{0}\" zu verwenden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTR_VAL_TEMPLATE_ERR,
			"Attributwertvorlage \"{0}\" kann nicht geparst werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNKNOWN_SIG_TYPE_ERR,
			u"Unbekannter Datentyp in Signatur für Klasse \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DATA_CONVERSION_ERR,
			"Datentyp \"{0}\" kann nicht in \"{1}\" konvertiert werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_TRANSLET_CLASS_ERR,
			u"Dieses \"Templates\" enthält keine gültige Translet-Klassendefinition."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_MAIN_TRANSLET_ERR,
			u"Dieses \"Templates\" enthält keine Klasse mit dem Namen \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_CLASS_ERR,
			"Translet-Klasse \"{0}\" konnte nicht geladen werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_OBJECT_ERR,
			"Translet-Klasse geladen, Translet-Instanz kann aber nicht erstellt werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_LISTENER_NULL_ERR,
			u"Versuch, ErrorListener für \"{0}\" auf null zu setzen"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR,
			u"Nur StreamSource, SAXSource und DOMSource werden von XSLTC unterstützt"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_SOURCE_ERR,
			u"An \"{0}\" übergebenes Source-Objekt hat keinen Inhalt."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_COMPILE_ERR,
			"Stylesheet konnte nicht kompiliert werden"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_ERR,
			"TransformerFactory erkennt Attribut \"{0}\" nicht."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR,
			u"Falscher Wert für Attribut \"{0}\" angegeben."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_RESULT_ERR,
			"setResult() muss vor startDocument() aufgerufen werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_TRANSLET_ERR,
			"Der Transformer hat kein gekapseltes Translet-Objekt."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_HANDLER_ERR,
			u"Kein definierter Ausgabe-Handler für Transformationsergebnis."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_RESULT_ERR,
			u"An \"{0}\" übergebenes Result-Objekt ist ungültig."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_PROP_ERR,
			u"Versuch, auf ungültige Transformer-Eigenschaft \"{0}\" zuzugreifen."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX2DOM_ADAPTER_ERR,
			"SAX2DOM-Adapter \"{0}\" konnte nicht erstellt werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSLTC_SOURCE_ERR,
			"XSLTCSource.build() ohne festgelegte systemID aufgerufen."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ER_RESULT_NULL,
			"Ergebnis darf nicht null sein"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE,
			u"Wert von Parameter {0} muss ein gültiges Java-Objekt sein"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_STDIN_ERR,
			"Die Option \"-i\" muss mit der Option \"-o\" verwendet werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_USAGE_STR,
			u"SYNOPSIS\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <Ausgabe>]\n      [-d <Verzeichnis>] [-j <JAR-Datei>] [-p <Package>]\n      [-n] [-x] [-u] [-v] [-h] { <Stylesheet> | -i }\n\nOPTIONS\n   -o <Ausgabe>    weist den Namen <Ausgabe> dem generierten\n                  Translet zu. Standardmäßig wird der Translet-Name\n                  vom <Stylesheet>-Namen abgeleitet. Diese Option\n                  wird ignoriert, wenn mehrere Stylesheets kompiliert werden.\n   -d <Verzeichnis> gibt ein Zielverzeichnis für das Translet an\n   -j <JAR-Datei>   verpackt Translet-Klassen in einer JAR-Datei mit dem\n                  als <jarfile> angegebenen Namen\n   -p <package>   gibt ein Packagenamenspräfix für alle generierten\n                  Translet-Klassen an.\n   -n             aktiviert das Vorlagen-Inlining (Standardverhalten durchschnittlich\n                  besser).\n   -x             schaltet die zusätzliche Debugging-Meldungsausgabe ein\n   -u             interpretiert <Stylesheet>-Argumente als URLs"
				"\n   -i             erzwingt, dass der Compiler das Stylesheet aus stdin liest\n   -v             druckt die Version des Compilers\n   -h             druckt diese Verwendungsanweisung\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_USAGE_STR,
			u"SYNOPSIS \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <JAR-Datei>]\n      [-x] [-n <Iterationen>] {-u <document_url> | <Dokument>}\n      <Klasse> [<param1>=<value1> ...]\n\n   verwendet die Translet-<Klasse> zur Transformation eines XML-Dokuments, \n   das als <Dokument> angegeben wird. Die Translet-<Klasse> befindet sich entweder im\n   CLASSPATH des Benutzers oder in der optional angegebenen <JAR-Datei>.\nOPTIONS\n   -j <JAR-Datei>    gibt eine JAR-Datei an, aus der das Translet geladen werden soll\n   -x              schaltet die zusätzliche Debugging-Meldungsausgabe ein\n   -n <Iterationen> führt die Transformation so oft aus, wie in <Iterationen> angegeben und\n                   zeigt Profilinformationen an\n   -u <document_url> gibt das XML-Eingabedokument als URL an\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_SORT_ERR,
			"<xsl:sort> kann nur in <xsl:for-each> oder <xsl:apply-templates> verwendet werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_ENCODING,
			u"Ausgabecodierung \"{0}\" wird auf dieser JVM nicht unterstützt."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYNTAX_ERR,
			"Syntaxfehler in \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CONSTRUCTOR_NOT_FOUND,
			"Externer Constructor \"{0}\" kann nicht gefunden werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_JAVA_FUNCT_THIS_REF,
			u"Das erste Argument für die nicht-\"static\"-Java-Funktion \"{0}\" ist keine gültige Objektreferenz."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_ERR,
			u"Fehler beim Prüfen des Typs des Ausdrucks \"{0}\"."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_UNK_LOC_ERR,
			u"Fehler beim Prüfen des Typs eines Ausdrucks an einer unbekannten Stelle."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR,
			u"Die Befehlszeilenoption \"{0}\" ist nicht gültig."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR,
			"Bei der Befehlszeilenoption \"{0}\" fehlt ein erforderliches Argument."_s
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
			"Transformation mit Translet \"{0}\" "_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_JAR_STR,
			"Transformation mit Translet \"{0}\" aus JAR-Datei \"{1}\""_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COULD_NOT_CREATE_TRANS_FACT,
			"Es konnte keine Instanz der TransformerFactory-Klasse \"{0}\" erstellt werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT,
			u"Der Name \"{0}\" konnte nicht als Name der Translet-Klasse verwendet werden, da er Zeichen enthält, die nicht im Namen einer Java-Klasse zulässig sind. Der Name \"{1}\" wurde stattdessen verwendet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_ERROR_KEY,
			"Compiler-Fehler:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_WARNING_KEY,
			"Compiler-Warnungen:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RUNTIME_ERROR_KEY,
			"Translet-Fehler:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_QNAME_ERR,
			"Ein Attribut, dessen Wert ein QName oder eine durch Leerstellen getrennte Liste mit QNames sein muss, hatte den Wert \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_NCNAME_ERR,
			"Ein Attribut, dessen Wert ein NCName sein muss, hatte den Wert \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_METHOD_IN_OUTPUT,
			"Das \"method\"-Attribut eines <xsl:output>-Elements hatte den Wert \"{0}\". Der Wert muss \"xml\", \"html\", \"text\" oder qname-but-not-ncname sein"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_GET_FEATURE_NULL_NAME,
			"Der Featurename darf nicht null in TransformerFactory.getFeature(Zeichenfolgenname) sein."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_FEATURE_NULL_NAME,
			"Der Featurename darf nicht null in TransformerFactory.setFeature(Zeichenfolgenname, boolescher Wert) sein."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNSUPPORTED_FEATURE,
			u"Das Feature \"{0}\" kann nicht für diese TransformerFactory festgelegt werden."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SECUREPROCESSING_FEATURE,
			"FEATURE_SECURE_PROCESSING: Feature kann nicht auf \"false\" gesetzt werden, wenn Security Manager vorhanden ist."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_TRY_CATCH,
			u"Interner XSLTC-Fehler: Der generierte Bytecode enthält einen Try-Catch-Finally-Block. Outline nicht möglich."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS,
			u"Interner XSLTC-Fehler: Die Marker OutlineableChunkStart und OutlineableChunkEnd müssen ausgeglichen und ordnungsgemäß platziert sein."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_DELETED_TARGET,
			u"Interner XSLTC-Fehler: Eine Anweisung, die Teil eines Bytecodeblocks war, für den ein Outline erstellt wurde, wird nach wie vor in der Originalmethode referenziert."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG,
			u"Interner XSLTC-Fehler: Eine Methode im Translet überschreitet die Java Virtual Machine-Längeneinschränkung einer Methode von 64 KB. Ursache hierfür sind in der Regel sehr große Vorlagen in einem Stylesheet. Versuchen Sie, das Stylesheet mit kleineren Vorlagen umzustrukturieren."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DESERIALIZE_TRANSLET_ERR,
			u"Wenn die Java-Sicherheit aktiviert ist, ist die Unterstützung für das Deserialisieren von TemplatesImpl deaktiviert. Dies kann durch Setzen der Systemeigenschaft jdk.xml.enableTemplatesImplDeserialization auf \"True\" außer Kraft gesetzt werden."_s
		})
	});
}

ErrorMessages_de::ErrorMessages_de() {
}

$Class* ErrorMessages_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_de);
	});
	return class$;
}

$Class* ErrorMessages_de::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com