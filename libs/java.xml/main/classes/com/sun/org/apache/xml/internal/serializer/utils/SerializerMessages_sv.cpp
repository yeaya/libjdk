#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_sv.h>
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
#undef ER_WRITING_INTERNAL_SUBSET
#undef ER_XML_VERSION_NOT_SUPPORTED

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

void SerializerMessages_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_sv::getContents() {
	$useLocalObjectStack();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGKEY,
			u"Meddelandenyckeln \'\'{0}\'\' är inte i meddelandeklassen \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGFORMAT,
			u"Formatet på meddelandet \'\'{0}\'\' i meddelandeklassen \'\'{1}\'\' underkändes."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER,
			"Serializerklassen \'\'{0}\'\' implementerar inte org.xml.sax.ContentHandler."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_FIND,
			u"Resursen [ {0} ] kunde inte hämtas.\n {1}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_LOAD,
			"Resursen [ {0} ] kunde inte laddas: {1} \n {2} \t {3}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			"Buffertstorlek <=0"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_UTF16_SURROGATE,
			u"Ogiltigt UTF-16-surrogat upptäckt: {0} ?"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_OIERROR,
			"IO-fel"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION,
			u"Kan inte lägga till attributet {0} efter underordnade noder eller innan ett element har skapats. Attributet ignoreras."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NAMESPACE_PREFIX,
			u"Namnrymd för prefix \'\'{0}\'\' har inte deklarerats."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_ATTRIBUTE,
			u"Attributet \'\'{0}\'\' finns utanför elementet."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_NAMESPACE,
			u"Namnrymdsdeklarationen \'\'{0}\'\'=\'\'{1}\'\' finns utanför element."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_RESOURCE,
			u"Kunde inte ladda \'\'{0}\'\' (kontrollera CLASSPATH), använder nu enbart standardvärden"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_CHARACTER,
			u"Försök att skriva utdatatecken med integralvärdet {0} som inte är representerat i angiven utdatakodning av {1}."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY,
			u"Kunde inte ladda egenskapsfilen \'\'{0}\'\' för utdatametoden \'\'{1}\'\' (kontrollera CLASSPATH)"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_PORT,
			"Ogiltigt portnummer"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PORT_WHEN_HOST_NULL,
			u"Port kan inte ställas in när värd är null"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED,
			u"Värd är inte en välformulerad adress"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_NOT_CONFORMANT,
			u"Schemat är inte likformigt."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_FROM_NULL_STRING,
			u"Kan inte ställa in schema från null-sträng"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE,
			u"Sökvägen innehåller en ogiltig escape-sekvens"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_INVALID_CHAR,
			u"Sökvägen innehåller ett ogiltigt tecken: {0}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_INVALID_CHAR,
			u"Fragment innehåller ett ogiltigt tecken"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_WHEN_PATH_NULL,
			u"Fragment kan inte ställas in när sökväg är null"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_FOR_GENERIC_URI,
			u"Fragment kan bara ställas in för en allmän URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_SCHEME_IN_URI,
			"Schema saknas i URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS,
			"Kan inte initiera URI med tomma parametrar"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH,
			u"Fragment kan inte anges i både sökvägen och fragmentet"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_QUERY_STRING_IN_PATH,
			u"Frågesträng kan inte anges i både sökvägen och frågesträngen"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_PORT_IF_NO_HOST,
			u"Port får inte anges om värden inte är angiven"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_USERINFO_IF_NO_HOST,
			u"Användarinfo får inte anges om värden inte är angiven"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_XML_VERSION_NOT_SUPPORTED,
			u"Varning:  Versionen av utdatadokumentet som begärts är \'\'{0}\'\'.  Den här versionen av XML stöds inte.  Versionen av utdatadokumentet kommer att vara \'\'1.0\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_REQUIRED,
			u"Schema krävs!"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FACTORY_PROPERTY_MISSING,
			u"Egenskapsobjektet som överförts till SerializerFactory har ingen \'\'{0}\'\'-egenskap."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ENCODING_NOT_SUPPORTED,
			u"Varning: Kodningen \'\'{0}\'\' stöds inte av Java runtime."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_FOUND,
			u"Parametern \'\'{0}\'\' känns inte igen."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_SUPPORTED,
			u"Parametern \'\'{0}\'\' känns igen men det begärda värdet kan inte anges."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRING_TOO_LONG,
			u"Resultatsträngen är för lång och ryms inte i DOMString: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_TYPE_MISMATCH_ERR,
			u"Värdetypen för detta parameternamn är inkompatibelt med förväntad värdetyp. "_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_OUTPUT_SPECIFIED,
			"Den utdatadestination som data ska skrivas till var null."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNSUPPORTED_ENCODING,
			u"En kodning som inte stöds har påträffats."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNABLE_TO_SERIALIZE_NODE,
			"Noden kunde inte serialiseras."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CDATA_SECTIONS_SPLIT,
			u"CDATA-sektionen innehåller en eller flera avslutningsmarkörer (\']]>\')."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WARNING_WF_NOT_CHECKED,
			u"En instans av Well-Formedness-kontrollen kunde inte skapas. Parametern well-formed har angetts till sant men Well-Formedness-kontrollen kan inte utföras."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER,
			u"Noden \'\'{0}\'\' innehåller ogiltiga XML-tecken."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT,
			"Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i kommentaren."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_PI,
			"Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i bearbetningsinstruktionsdata."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA,
			u"Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i innehållet i CDATASection."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT,
			u"Ett ogiltigt XML-tecken (Unicode: 0x{0}) hittades i teckendatainnehållet för noden."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME,
			"Ett ogiltigt XML-tecken/ogiltiga XML-tecken hittades i {0}-noden med namnet \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_DASH_IN_COMMENT,
			u"Strängen \"--\" är inte tillåten inom kommentarer."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_LT_IN_ATTVAL,
			u"Attributvärdet \"{1}\" som associeras med elementtyp \"{0}\" får inte innehålla något \'\'<\'\'-tecken."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_UNPARSED_ENT,
			u"Den otolkade enhetsreferensen \"&{0};\" är inte tillåten."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_EXTERNAL_ENT,
			u"Den externa enhetsreferensen \"&{0};\" tillåts inte i ett attributvärde."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND,
			"Prefixet \"{0}\" kan inte bindas till namnrymden \"{1}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ELEMENT_NAME,
			u"Det lokala namnet på elementet \"{0}\" är null."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ATTR_NAME,
			u"Det lokala namnet på attributet \"{0}\" är null."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF,
			u"Ersättningstexten för enhetsnoden \"{0}\" innehåller elementnoden \"{1}\" med ett obundet prefix, \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF,
			u"Ersättningstexten för enhetsnoden \"{0}\" innehåller attributnoden \"{1}\" med ett obundet prefix, \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WRITING_INTERNAL_SUBSET,
			u"Ett fel inträffade vid skrivning till den interna delmängden."_s
		})
	}));
	return contents;
}

SerializerMessages_sv::SerializerMessages_sv() {
}

$Class* SerializerMessages_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerMessages_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializerMessages_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializerMessages_sv);
	});
	return class$;
}

$Class* SerializerMessages_sv::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com