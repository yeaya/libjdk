#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_pt_BR.h>
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

void SerializerMessages_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_pt_BR::getContents() {
	$useLocalObjectStack();
	$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGKEY,
			u"A chave de mensagem \'\'{0}\'\' não está na classe de mensagem \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::BAD_MSGFORMAT,
			"Houve falha no formato da mensagem \'\'{0}\'\' na classe de mensagem \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER,
			u"A classe \'\'{0}\'\' do serializador não implementa org.xml.sax.ContentHandler."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_FIND,
			u"Não foi possível encontrar o recurso [ {0} ].\n {1}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_RESOURCE_COULD_NOT_LOAD,
			u"O recurso [ {0} ] não foi carregado: {1} \n {2} \t {3}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			"Tamanho do buffer <=0"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_UTF16_SURROGATE,
			u"Foi detectado um substituto de UTF-16 inválido: {0} ?"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_OIERROR,
			"Erro de E/S"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION,
			u"Não é possível adicionar o atributo {0} depois dos nós filhos ou antes que um elemento seja produzido. O atributo será ignorado."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NAMESPACE_PREFIX,
			u"O namespace do prefixo \'\'{0}\'\' não foi declarado."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_ATTRIBUTE,
			"Atributo \'\'{0}\'\' fora do elemento."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRAY_NAMESPACE,
			u"Declaração de namespace \'\'{0}\'\'=\'\'{1}\'\' fora do elemento."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_RESOURCE,
			u"Não foi possível carregar \'\'{0}\'\' (verificar CLASSPATH); usando agora apenas os padrões"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ILLEGAL_CHARACTER,
			u"Tentativa de exibir um caractere de valor integral {0} que não está representado na codificação de saída especificada de {1}."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY,
			u"Não foi possível carregar o arquivo de propriedade \'\'{0}\'\' para o método de saída \'\'{1}\'\' (verificar CLASSPATH)"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_INVALID_PORT,
			u"Número de porta inválido"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PORT_WHEN_HOST_NULL,
			u"A porta não pode ser definida quando o host é nulo"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED,
			u"O host não é um endereço correto"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_NOT_CONFORMANT,
			u"O esquema não é compatível."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_FROM_NULL_STRING,
			u"Não é possível definir o esquema de uma string nula"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE,
			u"O caminho contém uma sequência inválida de caracteres de escape"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_PATH_INVALID_CHAR,
			u"O caminho contém um caractere inválido: {0}"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_INVALID_CHAR,
			u"O fragmento contém um caractere inválido"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_WHEN_PATH_NULL,
			u"O fragmento não pode ser definido quando o caminho é nulo"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FRAG_FOR_GENERIC_URI,
			u"O fragmento só pode ser definido para um URI genérico"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_SCHEME_IN_URI,
			"Nenhum esquema encontrado no URI"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS,
			u"Não é possível inicializar o URI com parâmetros vazios"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH,
			u"O fragmento não pode ser especificado no caminho nem no fragmento"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_QUERY_STRING_IN_PATH,
			u"A string de consulta não pode ser especificada no caminho nem na string de consulta"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_PORT_IF_NO_HOST,
			u"A porta não pode ser especificada se o host não tiver sido especificado"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_USERINFO_IF_NO_HOST,
			u"As informações do usuário não podem ser especificadas se o host não tiver sido especificado"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_XML_VERSION_NOT_SUPPORTED,
			u"Advertência: a versão do documento de saída deve ser obrigatoriamente \'\'{0}\'\'. Esta versão do XML não é suportada. A versão do documento de saída será \'\'1.0\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_SCHEME_REQUIRED,
			u"O esquema é obrigatório!"_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FACTORY_PROPERTY_MISSING,
			u"O objeto Properties especificado para a SerializerFactory não tem uma propriedade \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ENCODING_NOT_SUPPORTED,
			u"Advertência: a codificação \'\'{0}\'\' não é suportada pelo Java runtime."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_FOUND,
			u"O parâmetro \'\'{0}\'\' não é reconhecido."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_FEATURE_NOT_SUPPORTED,
			u"O parâmetro \'\'{0}\'\' é reconhecido, mas o valor solicitado não pode ser definido."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_STRING_TOO_LONG,
			u"A string resultante é muito longa para se ajustar a uma DOMString: \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_TYPE_MISMATCH_ERR,
			u"O tipo de valor do nome deste parâmetro é incompatível com o tipo de valor esperado."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NO_OUTPUT_SPECIFIED,
			u"O destino da saída dos dados a serem gravados era nulo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNSUPPORTED_ENCODING,
			u"Uma codificação não suportada foi encontrada."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_UNABLE_TO_SERIALIZE_NODE,
			u"Não foi possível serializar o nó."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_CDATA_SECTIONS_SPLIT,
			u"A Seção CDATA contém um ou mais marcadores de término \']]>\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WARNING_WF_NOT_CHECKED,
			u"Não foi possível criar uma instância do verificador de Formato Correto. O parâmetro formatado corretamente foi definido como verdadeiro, mas a verificação de formato correto não pode ser executada."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER,
			u"O nó \'\'{0}\'\' contém caracteres XML inválidos."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT,
			u"Um caractere XML inválido (Unicode: 0x{0}) foi encontrado no comentário."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_PI,
			u"Um caractere XML inválido (Unicode: 0x{0}) foi encontrado nos dados da instrução de processamento."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA,
			u"Um caractere XML inválido (Unicode: 0x {0}) foi encontrado no conteúdo da Seção CDATA."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT,
			u"Um caractere XML inválido (Unicode: 0x {0}) foi encontrado no conteúdo dos dados de caracteres do nó."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME,
			u"Um ou mais caracteres XML inválidos foram encontrados no nó {0} chamado \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_DASH_IN_COMMENT,
			u"A string \"--\" não é permitida nos comentários."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_LT_IN_ATTVAL,
			u"O valor do atributo \"{1}\" associado a um tipo de elemento \"{0}\" não deve conter o caractere \'\'<\'\'."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_UNPARSED_ENT,
			u"A referência da entidade não submetida a parsing \"&{0};\" não é permitida."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WF_REF_TO_EXTERNAL_ENT,
			u"A referência da entidade externa \"&{0};\" não é permitida em um valor do atributo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND,
			u"O prefixo \"{0}\" não pode ser vinculado ao namespace \"{1}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ELEMENT_NAME,
			u"O nome local do elemento \"{0}\" é nulo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_NULL_LOCAL_ATTR_NAME,
			u"O nome local do atributo \"{0}\" é nulo."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF,
			u"O texto de substituição do nó \"{0}\" de entidade contém um nó \"{1}\" de elemento com um prefixo desvinculado \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF,
			u"O texto de substituição do nó \"{0}\" de entidade contém um nó \"{1}\" de atributo com um prefixo desvinculado \"{2}\"."_s
		}),
		$$new($ObjectArray, {
			$MsgKey::ER_WRITING_INTERNAL_SUBSET,
			"Ocorreu um erro ao gravar o subconjunto interno."_s
		})
	}));
	return contents;
}

SerializerMessages_pt_BR::SerializerMessages_pt_BR() {
}

$Class* SerializerMessages_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerMessages_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SerializerMessages_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SerializerMessages_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerializerMessages_pt_BR);
	});
	return class$;
}

$Class* SerializerMessages_pt_BR::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com