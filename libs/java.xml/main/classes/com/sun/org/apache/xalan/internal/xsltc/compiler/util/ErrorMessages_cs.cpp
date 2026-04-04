#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_cs.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ARGUMENT_CONVERSION_ERR
#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_VAL_TEMPLATE_ERR
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
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
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
#undef INTERNAL_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
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

void ErrorMessages_cs::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_cs::getContents() {
	$useLocalObjectStack();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_STYLESHEET_ERR,
			u"Více než jedna předloha stylu je definována ve stejném souboru."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_REDEF_ERR,
			u"Šablona \'\'{0}\'\' je již v této předloze stylu definována."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_UNDEF_ERR,
			u"Šablona \'\'{0}\'\' není v této předloze stylu definována."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_REDEF_ERR,
			u"Proměnná \'\'{0}\'\' je několikanásobně definována ve stejném oboru."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_UNDEF_ERR,
			u"Proměnná nebo parametr \'\'{0}\'\' nejsou definovány."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CLASS_NOT_FOUND_ERR,
			u"Nelze najít třídu \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::METHOD_NOT_FOUND_ERR,
			u"Nelze najít externí metodu \'\'{0}\'\' (musí být veřejná)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ARGUMENT_CONVERSION_ERR,
			u"Nelze převést argument/návratový typ ve volání metody \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_NOT_FOUND_ERR,
			"Soubor nebo URI \'\'{0}\'\' nebyl nalezen."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_URI_ERR,
			u"Neplatné URI \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_ACCESS_ERR,
			u"Nelze otevřít soubor nebo URI \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_ROOT_ERR,
			u"Byl očekáván prvek <xsl:stylesheet> nebo <xsl:transform>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NAMESPACE_UNDEF_ERR,
			u"Předpona oboru názvů \'\'{0}\'\' není deklarována."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FUNCTION_RESOLVE_ERR,
			u"Nelze vyřešit volání funkce \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NEED_LITERAL_ERR,
			u"Argument pro \'\'{0}\'\' musí být řetězcem literálu."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XPATH_PARSER_ERR,
			u"Chyba při analýze výrazu XPath \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::REQUIRED_ATTR_ERR,
			u"Požadovaný atribut \'\'{0}\'\' chybí."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHAR_ERR,
			u"Neplatný znak \'\'{0}\'\' ve výrazu XPath."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_PI_ERR,
			u"Neplatný název \'\'{0}\'\' pro zpracování instrukce."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_ATTRIBUTE_ERR,
			u"Atribut \'\'{0}\'\' je vně prvku."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTRIBUTE_ERR,
			u"Neplatný atribut \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_INCLUDE_ERR,
			u"Cyklický import/zahrnutí. Předloha stylu \'\'{0}\'\' je již zavedena."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RESULT_TREE_SORT_ERR,
			u"Fragmenty stromu výsledků nemohou být řazeny (prvky <xsl:sort> se ignorují). Při vytváření stromu výsledků musíte seřadit uzly."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYMBOLS_REDEF_ERR,
			u"Desetinné formátování \'\'{0}\'\' je již definováno."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSL_VERSION_ERR,
			u"Verze XSL \'\'{0}\'\' není produktem XSLTC podporována."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_VARIABLE_ERR,
			u"Cyklický odkaz na proměnnou/parametr v \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_BINARY_OP_ERR,
			u"Neznámý operátor pro binární výraz."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ARG_ERR,
			u"Neplatný argument pro volání funkce."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DOCUMENT_ARG_ERR,
			u"Druhý argument pro funkci document() musí být node-set."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_WHEN_ERR,
			u"Alespoň jeden prvek <xsl:when> se vyžaduje v <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_OTHERWISE_ERR,
			"Jen jeden prvek <xsl:otherwise> je povolen v <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_OTHERWISE_ERR,
			u"Prvek <xsl:otherwise> může být použit jen v <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_WHEN_ERR,
			u"Prvek <xsl:when> může být použit jen v <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WHEN_ELEMENT_ERR,
			"Pouze prvky <xsl:when> a <xsl:otherwise> jsou povoleny v <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNNAMED_ATTRIBSET_ERR,
			u"V prvku <xsl:attribute-set> chybí atribut \'name\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHILD_ERR,
			u"Neplatný prvek potomka."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ELEM_NAME_ERR,
			"Nelze volat prvek \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTR_NAME_ERR,
			"Nelze volat atribut \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_TEXT_NODE_ERR,
			u"Textová data jsou vně prvku nejvyšší úrovně <xsl:stylesheet>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX_PARSER_CONFIG_ERR,
			u"Analyzátor JAXP je nesprávně konfigurován."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INTERNAL_ERR,
			u"Neopravitelná chyba XSLTC-internal: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_XSL_ERR,
			u"Nepodporovaný prvek XSL \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_EXT_ERR,
			u"Nerozpoznaná přípona XSLTC \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_URI_ERR,
			u"Vstupní dokument není předloha stylu (obor názvů XSL není deklarován v kořenovém elementu)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_TARGET_ERR,
			u"Nelze najít cílovou předlohu se stylem \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ACCESSING_XSLT_TARGET_ERR,
			"Could not read stylesheet target \'\'{0}\'\', because \'\'{1}\'\' access is not allowed."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_IMPLEMENTED_ERR,
			u"Neimplementováno: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_STYLESHEET_ERR,
			u"Vstupní dokument neobsahuje předlohu stylu XSL."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ELEMENT_PARSE_ERR,
			"Nelze analyzovat prvek \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::KEY_USE_ATTR_ERR,
			u"Atribut use proměnné <key> musí být typu node, node-set, string nebo number."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTPUT_VERSION_ERR,
			u"Výstupní verze dokumentu XML by měla být 1.0"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_RELAT_OP_ERR,
			u"Neznámý operátor pro relační výraz"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTRIBSET_UNDEF_ERR,
			u"Pokus použít neexistující sadu atributů \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTR_VAL_TEMPLATE_ERR,
			u"Nelze analyzovat šablonu hodnoty atributu \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNKNOWN_SIG_TYPE_ERR,
			u"Neznámý datový typ proměnné signature pro třídu \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DATA_CONVERSION_ERR,
			u"Nelze převést datový typ \'\'{0}\'\' na \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_TRANSLET_CLASS_ERR,
			u"Tato šablona neobsahuje platnou definici třídy translet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_MAIN_TRANSLET_ERR,
			u"Tato šablona neobsahuje třídu se jménem \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_CLASS_ERR,
			u"Nelze zavést třídu translet \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_OBJECT_ERR,
			u"Třída translet byla zavedena, avšak nelze vytvořit instanci translet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_LISTENER_NULL_ERR,
			"Pokus nastavit objekt ErrorListener pro \'\'{0}\'\' na hodnotu null"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR,
			u"Pouze proměnné StreamSource, SAXSource a DOMSource jsou podporovány produktem XSLTC"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_SOURCE_ERR,
			u"Zdrojový objekt předaný \'\'{0}\'\' nemá žádný obsah."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_COMPILE_ERR,
			u"Nelze kompilovat předlohu se stylem"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_ERR,
			u"Třída TransformerFactory nerozpoznala atribut \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_RESULT_ERR,
			u"Metoda setResult() musí být volána před metodou startDocument()."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_TRANSLET_ERR,
			u"Objekt Transformer nemá žádný zapouzdřený objekt translet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_HANDLER_ERR,
			u"Neexistuje žádný definovaný výstupní obslužný program pro výsledek transformace."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_RESULT_ERR,
			u"Výsledný objekt předaný \'\'{0}\'\' je neplatný."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_PROP_ERR,
			u"Pokus o přístup k neplatné vlastnosti objektu Transformer: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX2DOM_ADAPTER_ERR,
			u"Nelze vytvořit adaptér SAX2DOM: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSLTC_SOURCE_ERR,
			u"Byla volána metoda XSLTCSource.build(), aniž by byla nastavena hodnota systemId."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_STDIN_ERR,
			u"Volba -i musí být použita s volbou -o."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_USAGE_STR,
			u"SYNOPSIS\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-s] [-u] [-v] [-h] { <stylesheet> | -i }\n\nVOLBY\n   -o <output>    přiřazuje název <output> generovanému\n                  transletu. Standardně je název transletu\n                  převzat z názvu <stylesheet>. Tato volba\n                   se ignoruje, pokud se kompilují násobné předlohy stylů.\n   -d <directory> určuje výchozí adresář pro translet\n   -j <jarfile>   zabalí třídu transletu do souboru jar\n     pojmenovaného jako <jarfile>\n   -p <package>   určuje předponu názvu balíčku pro všechny generované \n třídy transletu.\n   -n             povoluje zarovnání šablony (výchozí chování je v průměru lepší\n                  .\n   -x             zapne další výstup zprávy ladění\n   -s             zakáže volání System.exit\n   -u             interpretuje <stylesheet> argumenty jako URL\n   -i             vynutí kompilátor číst předlohu stylů ze stdin\n   -v       "
				"      tiskne verzi kompilátoru \n   -h             tiskne výpis tohoto použití \n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_USAGE_STR,
			u"SYNOPSIS \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-s] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   použije translet <class> k transformaci dokumentu XML \n určeného jako <document>. Translet <class> je buď v\n   v uživatelské cestě CLASSPATH nebo ve volitelně určeném souboru <jarfile>.\nVOLBY\n     -j <jarfile>    určuje soubor jarfile, ze kterého se zavede translet\n   -x      převede další výstup zprávy ladění\n   -s              vypne volání System.exit\n   -n <iterations> spustí transformaci <iterations> krát a\n                   zobrazí informaci  o profilu\n   -u <document_url> určí vstupní dokument XML jako URL\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_SORT_ERR,
			u"Prvek <xsl:sort> může být použit jen v <xsl:for-each> nebo <xsl:apply-templates>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_ENCODING,
			u"Výstupní kódování \'\'{0}\'\' není v tomto prostředí JVM podporováno."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYNTAX_ERR,
			"Chyba syntaxe v \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CONSTRUCTOR_NOT_FOUND,
			u"Nelze najít vnější konstruktor \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_JAVA_FUNCT_THIS_REF,
			u"První argument nestatické funkce Java \'\'{0}\'\' není platným odkazem na objekt."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_ERR,
			u"Chyba při kontrole typu výrazu \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_UNK_LOC_ERR,
			u"Chyba při kontrole typu výrazu na neznámém místě."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR,
			u"Volba příkazového řádku \'\'{0}\'\' není platná."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR,
			u"Volbě příkazového řádku \'\'{0}\'\' chybí požadovaný argument."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WARNING_PLUS_WRAPPED_MSG,
			u"VAROVÁNÍ: \'\'{0}\'\'\n        :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WARNING_MSG,
			u"VAROVÁNÍ: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG,
			u"ZÁVAŽNÁ CHYBA: \'\'{0}\'\'\n             :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FATAL_ERR_MSG,
			u"ZÁVAŽNÁ CHYBA: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_PLUS_WRAPPED_MSG,
			"CHYBA: \'\'{0}\'\'\n     :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_MSG,
			"CHYBA: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_TRANSLET_STR,
			u"Transformace použitím transletu \'\'{0}\'\' "_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_JAR_STR,
			u"Transformace použitím transletu \'\'{0}\'\' ze souboru jar \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COULD_NOT_CREATE_TRANS_FACT,
			u"Nelze vytvořit instanci třídy TransformerFactory \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_ERROR_KEY,
			u"Chyby kompilátoru:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_WARNING_KEY,
			u"Varování kompilátoru:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RUNTIME_ERROR_KEY,
			"Chyby transletu:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SECUREPROCESSING_FEATURE,
			"FEATURE_SECURE_PROCESSING: Cannot set the feature to false when security manager is present."_s
		})
	});
}

ErrorMessages_cs::ErrorMessages_cs() {
}

$Class* ErrorMessages_cs::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_cs, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_cs, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_cs",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_cs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_cs);
	});
	return class$;
}

$Class* ErrorMessages_cs::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com