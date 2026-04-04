#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_es.h>
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

void ErrorMessages_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_es::getContents() {
	$useLocalObjectStack();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_STYLESHEET_ERR,
			u"Se ha definido más de una hoja de estilo en el mismo archivo."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_REDEF_ERR,
			"La plantilla \'\'{0}\'\' ya se ha definido en esta hoja de estilo."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_UNDEF_ERR,
			"La plantilla \'\'{0}\'\' no se ha definido en esta hoja de estilo."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_REDEF_ERR,
			u"Se ha definido varias veces la variable \'\'{0}\'\' en el mismo ámbito."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_UNDEF_ERR,
			u"No se ha definido la variable o el parámetro \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CLASS_NOT_FOUND_ERR,
			"No se ha encontrado la clase \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::METHOD_NOT_FOUND_ERR,
			u"No se ha encontrado el método externo \'\'{0}\'\' (debe ser público)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ARGUMENT_CONVERSION_ERR,
			u"No se puede convertir el tipo de argumento/retorno en la llamada al método \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_NOT_FOUND_ERR,
			"No se ha encontrado el archivo o URI \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_URI_ERR,
			u"URI \'\'{0}\'\' no válido."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CATALOG_EXCEPTION,
			u"JAXP08090001: CatalogResolver está activado con el catálogo \"{0}\", pero se ha devuelto una excepción CatalogException."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_ACCESS_ERR,
			"No se puede abrir el archivo o URI \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_ROOT_ERR,
			"Se esperaba el elemento <xsl:stylesheet> o <xsl:transform>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NAMESPACE_UNDEF_ERR,
			"No se ha declarado el prefijo de espacio de nombres \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FUNCTION_RESOLVE_ERR,
			u"No se ha podido resolver la llamada a la función \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NEED_LITERAL_ERR,
			"El argumento en \'\'{0}\'\' debe ser una cadena literal."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XPATH_PARSER_ERR,
			u"Error al analizar la expresión XPath \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::REQUIRED_ATTR_ERR,
			"Falta el atributo \'\'{0}\'\' necesario."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHAR_ERR,
			u"Carácter \'\'{0}\'\' no permitido en la expresión XPath."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_PI_ERR,
			u"Nombre \'\'{0}\'\' no permitido para la instrucción de procesamiento."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_ATTRIBUTE_ERR,
			u"El atributo \'\'{0}\'\' está fuera del elemento."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTRIBUTE_ERR,
			"Atributo \'\'{0}\'\' no permitido."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_INCLUDE_ERR,
			"Import/include circular. La hoja de estilo \'\'{0}\'\' ya se ha cargado."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR,
			"Los secundarios del elemento xsl:import deben preceder al resto de secundarios de elementos de un elemento xsl:stylesheet, incluidos los secundarios de elementos xsl:include."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RESULT_TREE_SORT_ERR,
			u"Los fragmentos del árbol de resultados no se pueden ordenar (los elementos <xsl:sort> se ignoran). Debe ordenar los nodos al crear el árbol de resultados."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYMBOLS_REDEF_ERR,
			"Ya se ha definido el formato decimal \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSL_VERSION_ERR,
			u"La versión XSL \'\'{0}\'\' no está soportada por XSLTC."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_VARIABLE_ERR,
			u"La referencia de variable/parámetro circular en \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_BINARY_OP_ERR,
			u"Operador desconocido para la expresión binaria."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ARG_ERR,
			u"Argumentos no permitidos para la llamada de función."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DOCUMENT_ARG_ERR,
			u"El segundo argumento en la función document() debe ser un juego de nodos."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_WHEN_ERR,
			"Se necesita al menos un elemento <xsl:when> en <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_OTHERWISE_ERR,
			u"Sólo se permite un elemento <xsl:otherwise> en <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_OTHERWISE_ERR,
			u"<xsl:otherwise> sólo se puede utilizar en <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_WHEN_ERR,
			u"<xsl:when> sólo se puede utilizar en <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WHEN_ELEMENT_ERR,
			u"Sólo se permiten los elementos <xsl:when> y <xsl:otherwise> en <xsl:choose>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNNAMED_ATTRIBSET_ERR,
			"Falta el atributo \'name\' en <xsl:attribute-set>"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHILD_ERR,
			"Elemento secundario no permitido."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ELEM_NAME_ERR,
			"No se puede llamar \'\'{0}\'\' a un elemento"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTR_NAME_ERR,
			"No se puede llamar \'\'{0}\'\' a un atributo"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_TEXT_NODE_ERR,
			"Datos de texto fuera del elemento <xsl:stylesheet> de nivel superior."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX_PARSER_CONFIG_ERR,
			"El analizador JAXP no se ha configurado correctamente"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INTERNAL_ERR,
			"Error interno de XSLTC irrecuperable: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_XSL_ERR,
			"Elemento \'\'{0}\'\' de XSL no soportado."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_EXT_ERR,
			u"Extensión \'\'{0}\'\' de XSLTC no reconocida."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_URI_ERR,
			u"El documento de entrada no es una hoja de estilo (el espacio de nombres XSL no se ha declarado en el elemento raíz)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_TARGET_ERR,
			"No se ha encontrado el destino de hoja de estilo \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ACCESSING_XSLT_TARGET_ERR,
			u"No se ha podido leer el destino de hoja de estilos \'\'{0}\'\', porque no se permite el acceso \'\'{1}\'\' debido a una restricción definida por la propiedad accessExternalStylesheet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_IMPLEMENTED_ERR,
			"No implantado: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_STYLESHEET_ERR,
			"El documento de entrada no contiene una hoja de estilo XSL."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ELEMENT_PARSE_ERR,
			"No se ha podido analizar el elemento \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::KEY_USE_ATTR_ERR,
			"El atributo use de <key> debe ser node, node-set, string o number."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTPUT_VERSION_ERR,
			u"La versión del documento XML de salida debe ser 1.0"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_RELAT_OP_ERR,
			u"Operador desconocido para la expresión relacional"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTRIBSET_UNDEF_ERR,
			u"Se está intentando utilizar el juego de atributos \'\'{0}\'\' no existente."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTR_VAL_TEMPLATE_ERR,
			"No se puede analizar la plantilla del valor de atributo \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNKNOWN_SIG_TYPE_ERR,
			"Tipo de datos desconocido en la firma para la clase \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DATA_CONVERSION_ERR,
			"No se puede convertir el tipo de datos \'\'{0}\'\' en \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_TRANSLET_CLASS_ERR,
			u"Templates no contiene una definición de clase translet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_MAIN_TRANSLET_ERR,
			"Templates no contiene una clase con el nombre \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_CLASS_ERR,
			"No se ha podido cargar la clase de translet \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_OBJECT_ERR,
			"La clase de translet se ha cargado, pero no se puede crear una instancia de translet."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_LISTENER_NULL_ERR,
			"Intentando definir ErrorListener para \'\'{0}\'\' como nulo"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR,
			u"Sólo StreamSource, SAXSource y DOMSource están soportados por XSLTC"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_SOURCE_ERR,
			"El objeto Source que se ha transferido a \'\'{0}\'\' no tiene contenido."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_COMPILE_ERR,
			"No se ha podido compilar la hoja de estilo"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_ERR,
			"TransformerFactory no reconoce el atributo \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR,
			u"Valor no válido especificado para el atributo \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_RESULT_ERR,
			"setResult() debe llamarse antes de startDocument()."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_TRANSLET_ERR,
			"Transformer no tiene un objeto translet encapsulado."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_HANDLER_ERR,
			u"No se ha definido el manejador de salida para el resultado de la transformación."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_RESULT_ERR,
			u"El objeto Result que se ha pasado a \'\'{0}\'\' no es válido."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_PROP_ERR,
			u"Se está intentando acceder a la propiedad \'\'{0}\'\' de Transformer no válida."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX2DOM_ADAPTER_ERR,
			"No se ha podido crear el adaptador SAX2DOM: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSLTC_SOURCE_ERR,
			u"Se ha llamado a XSLTCSource.build() sin haber definido la identificación del sistema."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ER_RESULT_NULL,
			"El resultado no debe ser nulo"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE,
			u"El valor del parámetro {0} debe ser un objeto Java válido"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_STDIN_ERR,
			u"La opción -i debe utilizarse con la opción -o."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_USAGE_STR,
			u"SINOPSIS\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <salida>]\n      [-d <directorio>] [-j <archivo jar>] [-p <paquete>]\n      [-n] [-x] [-u] [-v] [-h] { <hoja de estilo> | -i }\n\nOPCIONES\n   -o <salida>    asigna el nombre de <salida> al translet\n                  generado. Por defecto, el nombre del translet se\n                  deriva del nombre de <hoja de estilo>. Esta opción\n                  se ignora si se compilan varias hojas de estilo.\n   -d <directorio> especifica un directorio de destino para el translet\n   -j <archivo jar>   empaqueta las clases de translet en un archivo jar del\n                  nombre especificado como <archivo jar>\n   -p <paquete>   especifica un prefijo de nombre de paquete para todas las clases de translet n\n                  generadas.\n   -n             permite poner en línea la plantilla (comportamiento por defecto mejor\n                  sobre la media).\n   -x             activa la salida del mensaje de depuración\n   -u             interpreta los a"
				"rgumentos <hoja de estilo> como URL\n   -i             obliga al compilador a leer la hoja de estilo de stdin\n   -v             imprime la versión del compilador\n   -h             imprime esta sentencia de uso\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_USAGE_STR,
			u"SYNOPSIS \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <archivo jar>]\n      [-x] [-n <iteraciones>] {-u <url_documento> | <documento>}\n      <clase> [<parámetro1>=<valor1> ...]\n\n   utiliza el translet <clase> para transformar un documento XML \n   especificado como <documento>. El translet <clase> se encuentra en\n   la CLASSPATH del usuario o en el <archivo jar> especificado opcionalmente.\nOPCIONES\n   -j <archivo jar>    especifica un archivo jar desde el que cargar el translet\n   -x              activa la salida del mensaje de depuración adicional\n   -n <iteraciones> ejecuta el número de <iteraciones> de una transformación y\n                   muestra la información de la creación de perfil\n   -u <url_documento> especifica el documento de entrada XML como una URL\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_SORT_ERR,
			u"<xsl:sort> sólo se puede utilizar en <xsl:for-each> o <xsl:apply-templates>."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_ENCODING,
			u"La codificación de salida \'\'{0}\'\' no está soportada en esta JVM."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYNTAX_ERR,
			"Error de sintaxis en \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CONSTRUCTOR_NOT_FOUND,
			"No se ha encontrado el constructor externo \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_JAVA_FUNCT_THIS_REF,
			u"El primer argumento de la función Java no estática \'\'{0}\'\' no es una referencia de objeto válida."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_ERR,
			u"Error al comprobar el tipo de la expresión \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_UNK_LOC_ERR,
			u"Error al comprobar el tipo de una expresión en una ubicación desconocida."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR,
			u"La opción de línea de comandos \'\'{0}\'\' no es válida."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR,
			u"Falta un argumento necesario en la opción de línea de comandos \'\'{0}\'\'."_s
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
			u"Transformación que utiliza el translet \'\'{0}\'\' "_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_JAR_STR,
			u"Transformación que utiliza el translet \'\'{0}\'\' del archivo jar \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COULD_NOT_CREATE_TRANS_FACT,
			"No se ha podido crear una instancia de la clase TransformerFactory \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT,
			u"El nombre \'\'{0}\'\' no se ha podido utilizar como el nombre de la clase de translet porque contiene caracteres que no están permitidos en el nombre de la clase Java. Se ha utilizado el nombre \'\'{1}\'\' en su lugar."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_ERROR_KEY,
			"Errores del compilador:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_WARNING_KEY,
			"Advertencias del compilador:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RUNTIME_ERROR_KEY,
			"Errores del translet:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_QNAME_ERR,
			u"Un atributo cuyo valor debe ser un QName o lista de QNames separados por espacios en blanco tenía el valor \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_NCNAME_ERR,
			u"Un atributo cuyo valor debe ser un NCName tenía el valor \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_METHOD_IN_OUTPUT,
			u"El atributo method de un elemento <xsl:output> tenía el valor \'\'{0}\'\'. El valor debe ser \'\'xml\'\', \'\'html\'\', \'\'text\'\' o qname-but-not-ncname"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_GET_FEATURE_NULL_NAME,
			u"El nombre de función no puede ser nulo en TransformerFactory.getFeature (nombre de cadena)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_FEATURE_NULL_NAME,
			u"El nombre de función no puede ser nulo en TransformerFactory.setFeature (nombre de cadena, valor booleano)."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNSUPPORTED_FEATURE,
			u"No se puede definir la función \'\'{0}\'\'en esta fábrica del transformador."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SECUREPROCESSING_FEATURE,
			u"FEATURE_SECURE_PROCESSING: no se puede definir la función en false cuando está presente el gestor de seguridad."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_TRY_CATCH,
			u"Error interno de XSLTC: el código de bytes generado contiene un bloque try-catch-finally y no se puede delimitar."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS,
			"Error interno de XSLTC: los marcadores OutlineableChunkStart y OutlineableChunkEnd deben estar equilibrados y correctamente anidados."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_DELETED_TARGET,
			u"Error interno de XSLTC: todavía se hace referencia a una instrucción que formaba parte de un bloque de código de bytes delimitado en el método original."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG,
			u"Error interno de XSLTC: un método en el translet excede la limitación de Java Virtual Machine de longitud de un método de 64 kilobytes. Normalmente, esto lo causan plantillas en una hoja de estilos demasiado grandes. Pruebe a reestructurar la hoja de estilos para utilizar plantillas más pequeñas."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DESERIALIZE_TRANSLET_ERR,
			u"Cuando la seguridad de Java está activada, el soporte para anular la serialización de TemplatesImpl está desactivado. Esto se puede sustituir definiendo la propiedad del sistema jdk.xml.enableTemplatesImplDeserialization en true."_s
		})
	});
}

ErrorMessages_es::ErrorMessages_es() {
}

$Class* ErrorMessages_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_es",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_es);
	});
	return class$;
}

$Class* ErrorMessages_es::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com