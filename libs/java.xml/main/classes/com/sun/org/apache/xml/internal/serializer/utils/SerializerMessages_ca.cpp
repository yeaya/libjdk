#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_ca.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_NAMESPACE_PREFIX
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ATTR_NAME
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_OIERROR
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_STRING_TOO_LONG
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNABLE_TO_SERIALIZE_NODE
#undef ER_UNSUPPORTED_ENCODING
#undef ER_WARNING_WF_NOT_CHECKED
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

void SerializerMessages_ca::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_ca::getContents() {
	$useLocalObjectStack();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGKEY,
			"The message key \'\'{0}\'\' is not in the message class \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGFORMAT,
			"The format of message \'\'{0}\'\' in message class \'\'{1}\'\' failed."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER,
			"The serializer class \'\'{0}\'\' does not implement org.xml.sax.ContentHandler."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_FIND,
			"The resource [ {0} ] could not be found.\n {1}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_LOAD,
			"The resource [ {0} ] could not load: {1} \n {2} \n {3}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			"Buffer size <=0"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_UTF16_SURROGATE,
			"Invalid UTF-16 surrogate detected: {0} ?"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_OIERROR,
			"IO error"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION,
			"Cannot add attribute {0} after child nodes or before an element is produced.  Attribute will be ignored."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NAMESPACE_PREFIX,
			"Namespace for prefix \'\'{0}\'\' has not been declared."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_ATTRIBUTE,
			"Attribute \'\'{0}\'\' outside of element."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_NAMESPACE,
			"Namespace declaration \'\'{0}\'\'=\'\'{1}\'\' outside of element."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_RESOURCE,
			"Could not load \'\'{0}\'\' (check CLASSPATH), now using just the defaults"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_CHARACTER,
			"Attempt to output character of integral value {0} that is not represented in specified output encoding of {1}."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY,
			"Could not load the propery file \'\'{0}\'\' for output method \'\'{1}\'\' (check CLASSPATH)"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_PORT,
			"Invalid port number"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PORT_WHEN_HOST_NULL,
			"Port cannot be set when host is null"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED,
			"Host is not a well formed address"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_NOT_CONFORMANT,
			"The scheme is not conformant."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_FROM_NULL_STRING,
			"Cannot set scheme from null string"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE,
			"Path contains invalid escape sequence"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_INVALID_CHAR,
			"Path contains invalid character: {0}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_INVALID_CHAR,
			"Fragment contains invalid character"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_WHEN_PATH_NULL,
			"Fragment cannot be set when path is null"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_FOR_GENERIC_URI,
			"Fragment can only be set for a generic URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_SCHEME_IN_URI,
			"No scheme found in URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS,
			"Cannot initialize URI with empty parameters"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH,
			"Fragment cannot be specified in both the path and fragment"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_QUERY_STRING_IN_PATH,
			"Query string cannot be specified in path and query string"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_PORT_IF_NO_HOST,
			"Port may not be specified if host is not specified"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_USERINFO_IF_NO_HOST,
			"Userinfo may not be specified if host is not specified"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_REQUIRED,
			"Scheme is required!"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FACTORY_PROPERTY_MISSING,
			u"L\'\'objecte de propietats passat a SerializerFactory no té cap propietat \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ENCODING_NOT_SUPPORTED,
			u"Avís: el temps d\'\'execució de Java no dóna suport a la codificació \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_FOUND,
			u"El paràmetre \'\'{0}\'\' no es reconeix."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_SUPPORTED,
			u"El paràmetre \'\'{0}\'\' es reconeix però el valor sol·licitat no es pot establir."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRING_TOO_LONG,
			u"La cadena resultant és massa llarga per cabre en una DOMString: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_TYPE_MISMATCH_ERR,
			u"El tipus de valor per a aquest nom de paràmetre és incompatible amb el tipus de valor esperat."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_OUTPUT_SPECIFIED,
			u"La destinació de sortida per a les dades que s\'ha d\'escriure era nul·la."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNSUPPORTED_ENCODING,
			u"S\'ha trobat una codificació no suportada."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNABLE_TO_SERIALIZE_NODE,
			"El node no s\'ha pogut serialitzat."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CDATA_SECTIONS_SPLIT,
			u"La secció CDATA conté un o més marcadors d\'acabament \']]>\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WARNING_WF_NOT_CHECKED,
			u"No s\'ha pogut crear cap instància per comprovar si té un format correcte o no. El paràmetre del tipus ben format es va establir en cert, però la comprovació de format no s\'ha pogut realitzar."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER,
			u"El node \'\'{0}\'\' conté caràcters XML no vàlids."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT,
			u"S\'\'ha trobat un caràcter XML no vàlid (Unicode: 0x{0}) en el comentari."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_PI,
			u"S\'\'ha trobat un caràcter XML no vàlid (Unicode: 0x{0}) en les dades d\'\'instrucció de procés."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA,
			u"S\'\'ha trobat un caràcter XML no vàlid (Unicode: 0x\'\'{0})\'\' en els continguts de la CDATASection."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT,
			u"S\'\'ha trobat un caràcter XML no vàlid (Unicode: 0x\'\'{0})\'\' en el contingut de dades de caràcter del node."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME,
			u"S\'\'han trobat caràcters XML no vàlids al node {0} anomenat \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_DASH_IN_COMMENT,
			u"La cadena \"--\" no està permesa dins dels comentaris."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_LT_IN_ATTVAL,
			u"El valor d\'\'atribut \"{1}\" associat amb un tipus d\'\'element \"{0}\" no pot contenir el caràcter \'\'<\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_UNPARSED_ENT,
			u"La referència de l\'\'entitat no analitzada \"&{0};\" no està permesa."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_EXTERNAL_ENT,
			u"La referència externa de l\'\'entitat \"&{0};\" no està permesa en un valor d\'\'atribut."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND,
			"El prefix \"{0}\" no es pot vincular a l\'\'espai de noms \"{1}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ELEMENT_NAME,
			u"El nom local de l\'\'element \"{0}\" és nul."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ATTR_NAME,
			u"El nom local d\'\'atr \"{0}\" és nul."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF,
			u"El text de recanvi del node de l\'\'entitat \"{0}\" conté un node d\'\'element \"{1}\" amb un prefix de no enllaçat \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF,
			u"El text de recanvi del node de l\'\'entitat \"{0}\" conté un node d\'\'atribut \"{1}\" amb un prefix de no enllaçat \"{2}\"."_s
		})
	}));
	return contents;
}

SerializerMessages_ca::SerializerMessages_ca() {
}

$Class* SerializerMessages_ca::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_ca, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerMessages_ca, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_ca",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializerMessages_ca, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializerMessages_ca);
	});
	return class$;
}

$Class* SerializerMessages_ca::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com