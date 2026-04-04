#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_it.h>
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

void SerializerMessages_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_it::getContents() {
	$useLocalObjectStack();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGKEY,
			"La chiave di messaggio \'\'{0}\'\' non si trova nella classe messaggio \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGFORMAT,
			"Formato di messaggio \'\'{0}\'\' in classe messaggio \'\'{1}\'\' non riuscito."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER,
			"La classe serializzatore \'\'{0}\'\' non implementa org.xml.sax.ContentHandler."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_FIND,
			"Risorsa [ {0} ] non trovata.\n {1}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_LOAD,
			"Impossibile caricare la risorsa [ {0} ]: {1} \n {2} \t {3}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			"Dimensione buffer <=0"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_UTF16_SURROGATE,
			"Rilevato surrogato UTF-16 non valido: {0}?"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_OIERROR,
			"Errore di I/O"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION,
			u"Impossibile aggiungere l\'\'attributo {0} dopo i nodi figlio o prima che sia prodotto un elemento. L\'\'attributo verrà ignorato."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NAMESPACE_PREFIX,
			u"Lo spazio di nomi per il prefisso \'\'{0}\'\' non è stato dichiarato."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_ATTRIBUTE,
			"Attributo \'\'{0}\'\' al di fuori dell\'\'elemento."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_NAMESPACE,
			"Dichiarazione dello spazio di nomi \'\'{0}\'\'=\'\'{1}\'\' al di fuori dell\'\'elemento."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_RESOURCE,
			"Impossibile caricare \'\'{0}\'\' (verificare CLASSPATH); verranno utilizzati i valori predefiniti"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_CHARACTER,
			"Tentativo di eseguire l\'\'output di un carattere di valore integrale {0} non rappresentato nella codifica di output {1} specificata."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY,
			u"Impossibile caricare il file delle proprietà \'\'{0}\'\' per il metodo di emissione \'\'{1}\'\' (verificare CLASSPATH)"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_PORT,
			"Numero di porta non valido"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PORT_WHEN_HOST_NULL,
			u"La porta non può essere impostata se l\'host è nullo"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED,
			u"Host non è un indirizzo corretto"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_NOT_CONFORMANT,
			u"Lo schema non è conforme."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_FROM_NULL_STRING,
			"Impossibile impostare lo schema da una stringa nulla"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE,
			"Il percorso contiene sequenza di escape non valida"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_INVALID_CHAR,
			"Il percorso contiene un carattere non valido: {0}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_INVALID_CHAR,
			"Il frammento contiene un carattere non valido"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_WHEN_PATH_NULL,
			u"Il frammento non può essere impostato se il percorso è nullo"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_FOR_GENERIC_URI,
			u"Il frammento può essere impostato solo per un URI generico"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_SCHEME_IN_URI,
			"Nessuno schema trovato nell\'URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS,
			"Impossibile inizializzare l\'URI con i parametri vuoti"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH,
			u"Il frammento non può essere specificato sia nel percorso che nel frammento"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_QUERY_STRING_IN_PATH,
			u"La stringa di query non può essere specificata nella stringa di percorso e query."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_PORT_IF_NO_HOST,
			u"La porta non può essere specificata se l\'host non è specificato"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_USERINFO_IF_NO_HOST,
			u"Userinfo non può essere specificato se l\'host non è specificato"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_XML_VERSION_NOT_SUPPORTED,
			u"Avvertenza: la versione del documento di output deve essere \'\'{0}\'\'. Questa versione di XML non è supportata. La versione del documento di output sarà \'\'1.0\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_REQUIRED,
			u"Lo schema è obbligatorio."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FACTORY_PROPERTY_MISSING,
			u"L\'\'oggetto Properties passato a SerializerFactory non dispone di una proprietà \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ENCODING_NOT_SUPPORTED,
			u"Avvertenza: la codifica \'\'{0}\'\' non è supportata da Java Runtime."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_FOUND,
			u"Il parametro {0} non è riconosciuto."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_SUPPORTED,
			u"Il parametro \'\'{0}\'\' è stato riconosciuto, ma non è possibile impostare il valore richiesto."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRING_TOO_LONG,
			u"La stringa risultante è troppo lunga per adattarsi in DOMString: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_TYPE_MISMATCH_ERR,
			u"Il tipo di valore per questo nome parametro non è compatibile con il tipo di valore previsto. "_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_OUTPUT_SPECIFIED,
			u"La destinazione di output per i dati da scrivere è nulla."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNSUPPORTED_ENCODING,
			u"È stata rilevata una codifica non supportata."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNABLE_TO_SERIALIZE_NODE,
			"Impossibile serializzare il nodo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CDATA_SECTIONS_SPLIT,
			u"La sezione CDATA contiene uno o più indicatori di fine \']]>\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WARNING_WF_NOT_CHECKED,
			u"Impossibile creare un\'istanza dello strumento di controllo della correttezza del formato. Il parametro con formato valido è impostato su true, ma non è possibile eseguire il controllo della correttezza del formato."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER,
			"Il nodo \'\'{0}\'\' contiene caratteri XML non validi."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT,
			u"È stato trovato un carattere XML non valido (Unicode: 0x{0}) nel commento."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_PI,
			u"È stato trovato un carattere XML non valido (Unicode: 0x{0}) nei dati dell\'\'istruzione di elaborazione."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA,
			u"È stato trovato un carattere XML non valido (Unicode: 0x{0}) nei contenuti della sezione CDATA."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT,
			u"È stato trovato un carattere XML non valido (Unicode: 0x{0}) nel contenuto dei dati carattere del nodo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME,
			u"È stato trovato un carattere o caratteri XML non validi nel nodo {0} denominato \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_DASH_IN_COMMENT,
			u"La stringa \"--\" non è consentita nei commenti."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_LT_IN_ATTVAL,
			"Il valore dell\'\'attributo \"{1}\" associato a un tipo di elemento \"{0}\" non deve essere contenere il carattere \'\'<\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_UNPARSED_ENT,
			u"Il riferimento di entità non analizzata \"&{0};\" non è consentito."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_EXTERNAL_ENT,
			u"Il riferimento di entità esterna \"&{0};\" non è consentito in un valore di attributo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND,
			"Impossibile associare il prefisso \"{0}\" allo spazio di nomi \"{1}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ELEMENT_NAME,
			u"Il nome locale dell\'\'elemento \"{0}\" è nullo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ATTR_NAME,
			u"Il nome locale dell\'\'attributo \"{0}\" è nullo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF,
			u"Il testo di sostituzione del nodo entità \"{0}\" contiene un nodo elemento \"{1}\" con un prefisso non associato \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF,
			u"Il testo di sostituzione del nodo entità \"{0}\" contiene un nodo attributo \"{1}\" con un prefisso non associato \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WRITING_INTERNAL_SUBSET,
			u"Si è verificato un errore durante la scrittura del subset interno."_s
		})
	}));
	return contents;
}

SerializerMessages_it::SerializerMessages_it() {
}

$Class* SerializerMessages_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerMessages_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializerMessages_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializerMessages_it);
	});
	return class$;
}

$Class* SerializerMessages_it::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com